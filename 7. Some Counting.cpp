#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() {
    // 1. Count up from 0 to 50 in increments of 1
    cout << "Counting up from 0 to 50:" << endl;
    for (int i = 0; i <= 50; i++) { // Start at 0, stop at 50, increase by 1
        cout << i << " "; // Print the current value of i
    }
    cout << endl << endl; // Print two new lines for spacing

    // 2. Count down from 50 to 0 in decrements of 1
    cout << "Counting down from 50 to 0:" << endl;
    for (int i = 50; i >= 0; i--) { // Start at 50, stop at 0, decrease by 1
        cout << i << " ";
    }
    cout << endl << endl;

    // 3. Count up from 30 to 50 in increments of 1
    cout << "Counting up from 30 to 50:" << endl;
    for (int i = 30; i <= 50; i++) { // Start at 30, stop at 50, increase by 1
        cout << i << " ";
    }
    cout << endl << endl;

    // 4. Count down from 50 to 10 in decrements of 2
    cout << "Counting down from 50 to 10 (step -2):" << endl;
    for (int i = 50; i >= 10; i -= 2) { // Start at 50, stop at 10, decrease by 2
        cout << i << " ";
    }
    cout << endl << endl;

    // 5. Count up from 100 to 200 in increments of 5
    cout << "Counting up from 100 to 200 (step +5):" << endl;
    for (int i = 100; i <= 200; i += 5) { // Start at 100, stop at 200, increase by 5
        cout << i << " ";
    }
    cout << endl;

    return 0; // End of the program
}