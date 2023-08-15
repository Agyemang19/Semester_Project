#include <iostream>
#include <string>

using namespace std;

void introduction() {
    cout << "Welcome to the Text Adventure Game!" << endl;
    cout << "You find yourself in a mysterious room. There are two doors in front of you." << endl;
}

int main() {
    string playerName;
    char choice;
    
    introduction();
    
    cout << "Enter your name: ";
    cin >> playerName;
    
    cout << "Hello, " << playerName << "! You must choose a door to proceed." << endl;
    cout << "Do you want to enter door A or door B? (A/B): ";
    cin >> choice;
    
    switch (choice) {
        case 'A':
        case 'a':
            cout << "You entered door A. You find a treasure chest. Congratulations, you win!" << endl;
            break;
        
        case 'B':
        case 'b':
            cout << "You entered door B. It leads to a dark cave with a fierce dragon. You have been eaten. Game over!" << endl;
            break;
        
        default:
            cout << "Invalid choice. Game over!" << endl;
            break;
    }
    
    return 0;
}
