# Task 1: File Management Tool

This C++ application provides a simple command-line interface to perform basic file operations: writing, reading, and appending to a text file.

## Code Description

The program `task1.cpp` is a self-contained C++ file. It uses standard libraries `<iostream>`, `<fstream>`, and `<string>` for input/output and file handling.

- **`showMenu()`**: Displays the main menu of options to the user.
- **`writeFile()`**: Opens a file in write mode (overwriting any existing content) and saves user input to it.
- **`readFile()`**: Opens a file in read mode and displays its content on the console.
- **`appendFile()`**: Opens a file in append mode and adds user input to the end of the file.
- **`main()`**: The main function that drives the program. It prompts the user for a filename and then enters a loop to display the menu and execute the chosen file operation.

## How to Compile and Run

1.  **Compile the code:**
    Open a terminal and use the g++ compiler to create an executable file.

    ```bash
    g++ task1.cpp -o file_manager
    ```

2.  **Run the application:**
    Execute the compiled program from the terminal.

    ```bash
    ./file_manager
    ```

3.  **Using the Tool:**
    - The program will first ask you for a filename (e.g., `my_notes.txt`).
    - A menu will then be displayed with options to write, read, append, or exit.
    - When writing or appending, type your text. Enter `EOF` on a new line to stop writing.
