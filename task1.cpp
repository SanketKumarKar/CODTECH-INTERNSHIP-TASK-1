#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// Function to display the menu
void showMenu() {
    cout << "\n--- File Management Tool ---\n";
    cout << "1. Write to file (overwrite)\n";
    cout << "2. Read from file\n";
    cout << "3. Append to file\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

// Function to write to a file
void writeFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }

    cout << "Enter text to write to the file. Type 'EOF' on a new line to finish.\n";
    string line;
    while (getline(cin, line) && line != "EOF") {
        outFile << line << endl;
    }
    cout << "Data written to file successfully." << endl;
}

// Function to read from a file
void readFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open file for reading." << endl;
        return;
    }

    cout << "\n--- File Content ---\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    cout << "--- End of File ---\n";
}

// Function to append to a file
void appendFile(const string& filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file for appending." << endl;
        return;
    }

    cout << "Enter text to append to the file. Type 'EOF' on a new line to finish.\n";
    string line;
    while (getline(cin, line) && line != "EOF") {
        outFile << line << endl;
    }
    cout << "Data appended to file successfully." << endl;
}

int main() {
    string filename;
    cout << "Enter the filename to work with (e.g., sample.txt): ";
    getline(cin, filename);

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume newline

        switch (choice) {
            case 1:
                writeFile(filename);
                break;
            case 2:
                readFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
