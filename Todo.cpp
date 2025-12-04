#include <iostream>              // Allows printing to screen and reading from keyboard
#include <fstream>               // Allows reading and writing to files
#include <vector>                // Allows using dynamic arrays (vector)
#include <string>                // Allows using text strings

// This function reads all tasks from a file and returns them as a list
std::vector<std::string> loadTasks() {
    std::vector<std::string> tasks;     // Creates a list to store tasks
    std::ifstream file("tasks.txt");    // Opens the file "tasks.txt" for reading

    std::string line;                   // Temporary string to store each line

    // Reads the file line-by-line until no lines remain
    while (std::getline(file, line)) {
        tasks.push_back(line);          // Adds each line (task) into the list
    }

    return tasks;                       // Returns the list of tasks
}

// This function saves all tasks from the list into the file
void saveTasks(const std::vector<std::string>& tasks) {
    std::ofstream file("tasks.txt");    // Opens "tasks.txt" for writing (old content will be erased)

    // Writes each task on its own line
    for (const std::string& task : tasks) {
        file << task << "\n";           // Saves the task text followed by a newline
    }
}

// This function prints all tasks to the screen
void listTasks(const std::vector<std::string>& tasks) {
    if (tasks.empty()) {                // Checks if there are zero tasks
        std::cout << "No tasks yet.\n"; // If empty — prints message
        return;                         // Exits the function
    }

    // Prints all tasks with numbers (1, 2, 3...)
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";  // Shows index and task text
    }
}

// This function adds a new task to the list
void addTask(std::vector<std::string>& tasks, const std::string& text) {
    tasks.push_back(text);              // Adds the new task to the end of the list
    std::cout << "Task added: " << text << "\n";  // Prints confirmation message
}

int main() {                             // Entry point of the program
    std::vector<std::string> tasks = loadTasks(); // Loads existing tasks from file

    int choice;                           // Variable to store user's menu choice

    while (true) {                        // Infinite loop until the user chooses to exit
        std::cout << "\n=== SIMPLE TODO ===\n";          // Prints menu header
        std::cout << "1. List tasks\n";                  // Option 1
        std::cout << "2. Add task\n";                    // Option 2
        std::cout << "3. Exit\n";                        // Option 3
        std::cout << "Choose: ";                         // Ask for user input

        std::cin >> choice;                              // Read user's choice

        if (choice == 1) {                               // If user selected "list"
            listTasks(tasks);                            // Show tasks
        }
        else if (choice == 2) {                          // If user selected "add task"
            std::cout << "Enter task text: ";            // Ask for task text
            std::cin.ignore();                           // Clears leftover newline in input buffer
            std::string text;                            // Variable to store user's input
            std::getline(std::cin, text);                // Reads full line of text
            addTask(tasks, text);                        // Adds the new task
            saveTasks(tasks);                            // Saves tasks to file
        }
        else if (choice == 3) {                          // If user selected "exit"
            std::cout << "Goodbye!\n";                  // Farewell message
            break;                                       // Breaks the loop → program ends
        }
        else {                                           // If input is not 1/2/3
            std::cout << "Invalid choice.\n";            // Show error message
        }
    }

    return 0;                                            // Signals successful program end
}
