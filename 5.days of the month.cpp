#include <iostream>  // Allows input and output (cin, cout)
using namespace std; // Avoids writing std:: before every cin/cout

int main() {
    int month; // Variable to store the user's input for the month number

    // Ask the user to enter a number representing a month (1 to 12)
    cout << "Enter a month number (1-12): ";
    cin >> month; // Read the user's input

    // Use a switch statement to determine how many days the month has
    switch (month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days." << endl;
            break; // Exit the switch after matching case

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days." << endl;
            break;

        // February (special case)
        case 2:  // February
            cout << "This month has 28 or 29 days (depending on leap year)." << endl;
            break;

        // If the user enters a number outside 1–12
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }

    return 0; // End of the program
}