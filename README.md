
# **SIMPLE TODO MANAGER — README**

---

## 📝 **About this Project**

This project is a **simple, beginner‑friendly TODO manager written in C++**, designed specifically for:

* people who are **new to programming**,
* those learning how to work with **files**,
* students practicing **functions, vectors, loops**, and **basic I/O**,
* GitHub beginners who want to understand how to publish a real project.

This README explains **everything in great detail**, so even the most inexperienced user can understand what the program does and how to work with it.

---

## 🚀 **What This Program Does**

This C++ application allows you to:

* **Add new tasks**
* **List all tasks**
* **Store tasks in a file** (`tasks.txt`)
* **Automatically load tasks** when program starts
* **Exit safely without losing data**

It is intentionally kept simple so you can **study and expand it** yourself.

---

## 🎯 **Goals of This Program**

This project was created to help beginners understand:

* how to use **std::vector** for dynamic lists;
* how to work with **file input/output** (reading & writing text files);
* how `while` loops work for menu-driven programs;
* how to properly structure a program using **functions**.

The entire code is inside **one file**, making it as clear as possible.

---

## 📂 **Project Structure**

```
project_folder/
│
├── todo.cpp       → main program file
├── tasks.txt      → automatically created task storage
└── README.md       → documentation
```

---

## 💡 **How the Program Works (Step-by-Step)**

1. When program starts, it **loads tasks** from `tasks.txt` (if file exists).
2. It displays a **menu** with 3 options:

   * List tasks
   * Add task
   * Exit
3. If you add a task, it is **immediately saved**.
4. If you list tasks, they appear with **numbers**.
5. On exit, nothing is lost — tasks stay in the file.

---

## 🧠 **Why This Program Saves Tasks to a File**

Many beginner programs only store data **in memory**, which disappears after closing.

This program shows how to:

* store data permanently;
* read multiple lines from a file;
* write structured text back to a file.

These skills are **essential** for creating real applications.

---

## 🔧 **How to Compile**

### Windows (MinGW):

```
g++ todo.cpp -o todo.exe
```

### Linux / macOS:

```
g++ todo.cpp -o todo
```

---

## ▶️ **How to Run**

Windows:

```
todo.exe
```

Linux/macOS:

```
./todo
```

---

## 📘 **Example Session**

```
=== SIMPLE TODO ===
1. List tasks
2. Add task
3. Exit
Choose: 2
Enter task text: Buy milk
Task added: Buy milk

=== SIMPLE TODO ===
1. List tasks
2. Add task
3. Exit
Choose: 1
1. Buy milk
```

---

## 🗂 **tasks.txt — The Data File**

This file stores one task per line:

```
Buy milk
Finish homework
Call friend
```

You can even edit this file manually.

---

## 🧩 **How the Code Is Organized**

### The program contains four main parts:

1. **loadTasks()** — reads all tasks from the file
2. **saveTasks()** — writes tasks back to the file
3. **listTasks()** — prints all tasks to screen
4. **addTask()** — adds new text to the task list
5. **main()** — menu system and logic

Each function does one job.

---

