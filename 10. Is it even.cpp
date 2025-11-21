#include <iostream>// Required to use input and output (cin, cout)
#include <string>// Required to use the string data type
using namespace std;
// This function takes an integer and returns a message saying if it's even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        // If the number divided by 2 has no remainder, it's even
        return "The provided number is even";
    } else {
        // Otherwise, it's odd
        return "The provided number is odd";
    }
}
int main() {
    int userNumber;  // Variable to store the number entered by the user

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> userNumber;

    // Call the checkEven function and store the returned message
    string result = checkEven(userNumber);

    // Display the result message to the user
    cout << result << endl;

    return 0;  // End of the program
}