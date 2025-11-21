#include <iostream>  // Allows input and output (cin, cout)
#include <string>    // Allows use of string data type
using namespace std; // Avoids writing std: before every cin/cout

int main() {
    const string correctPassword = "12345"; // The correct password (cannot be changed during the program)
    string userInput; // Variable to store the user's password attempt
    int attemptsLeft = 5; // User has 5 chances to guess the password

    // Prompt the user to enter the password
    cout <<"Enter the password to unlock the safe (You have 5 attempts)";

    // Loop continues as long as the user has attempts left
    while (attemptsLeft >0) {
        cin >> userInput; // Read the user's input

        // Check if the entered password is correct
        if (userInput ==correctPassword) {
            cout << "Welcome to the Secure Area" << endl;
            break; // Exit the loop if the password is correct
        } else {
            attemptsLeft--; // Reduce the number of attempts left

            // If there are still attempts left, show how many remain
            if (attemptsLeft > 0) {
                cout << "incorrect password. You have " << attemptsLeft << " attempt(s) remaining. Try again: ";
            } else {
                // If no attempts are left, show final warning
                cout << "5 failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }

    return 0; // End of program
}