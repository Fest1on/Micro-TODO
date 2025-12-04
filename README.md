# █▀█ █▀▀ █░█ ▀█▀ █▀█

# █▀▄ ██▄ █▀█ ░█░ █▄█

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

## 🧪 **Ideas for Expansion (Good for GitHub Issues)**

If you want to improve the project (or publish it on GitHub), here are great beginner-friendly enhancements:

### ✔️ Easy features:

* Add **delete task** by number
* Add **edit task**
* Add **mark task as done**
* Add **clear all tasks**
* Add **search task** by keyword

### ⭐ Slightly advanced:

* Save tasks in **JSON** format
* Add **colored console output**
* Create a **GUI version** with libraries like Qt or SFML
* Add **timestamps** when tasks are added

---

## 🌐 **GitHub Tips**

If you upload this project to GitHub, make sure to:

* add tags: `cpp`, `beginner`, `todo`, `cli`, `learning`;
* add description: *"Simple TODO Manager in C++ for beginners"*;
* create a few "good first issue" tasks;
* write a helpful "How to Contribute" section.

This will help your repository grow.

---

## 🏆 **Why This Project Can Become Popular**

* The code is **short** but **useful**.
* Many beginners search for simple C++ examples.
* It's easy to expand — ideal for collaborative contributions.
* Perfect for tutorials, YouTube videos, or student projects.

---

## 📄 **License (MIT)**

This project can be used, modified, and shared freely.

---

## 🙌 **Final Notes**

This README is intentionally **long, detailed, and beginner-friendly**.
It is suitable for a public GitHub repository, a school project, or a personal learning exercise.

If you'd like, I can:

* generate a **beautiful ASCII art logo**,
* create a **CONTRIBUTING.md**,
* create **issues** or **GitHub Actions** YAML,
* or rewrite this README for maximum GitHub popularity.

Just tell me!
