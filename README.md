# Pipex
# 🚀 Pipex

Welcome to **Pipex**, a project from **42 School** that replicates the behavior of Unix pipelines using file descriptors and process management. 🛠️

## 📌 Overview

**Pipex** is a program that mimics the shell command:

```sh
< file1 cmd1 | cmd2 > file2
```

It executes two commands with input redirection from a file and output redirection to another file, utilizing pipes to communicate between them.

## 📂 Project Structure

```
📦 pipex
├── 📜 Makefile
├── 📜 pipex.h
├── 📜 pipex.c
├── 📜 utils.c
├── 📜 errors.c
├── 📜 bonus/
└── 📜 README.md
```

## 🛠️ Compilation

Compile the program using:

```sh
make
```

For the **bonus version**:

```sh
make bonus
```

## 🚀 Usage

Run the program with:

```sh
./pipex file1 "cmd1" "cmd2" file2
```

Example:

```sh
./pipex input.txt "grep hello" "wc -l" output.txt
```

This executes:

```sh
< input.txt grep hello | wc -l > output.txt
```

## ✅ Bonus Features

🎯 Supports multiple commands (`./pipex_bonus file1 cmd1 cmd2 ... cmdN file2`).\
🎯 Supports `here_doc` mode for handling heredocs (`./pipex_bonus here_doc LIMITER cmd1 cmd2 file`).

## 🛠️ Error Handling

🚨 Checks for valid arguments.\
🚨 Handles command execution failures.\
🚨 Manages file and pipe errors.

## 🏆 Learning Outcomes

🔹 Process handling with `fork()`, `execve()`, and `waitpid()`.\
🔹 File descriptors and redirections.\
🔹 Pipe communication.

## 📜 License

This project is part of the **42 School** curriculum and follows its guidelines. 📚

## 💡 Author

👤 **Your Name**\
📧 Contact: [your.email@example.com](mailto\:your.email@example.com)

