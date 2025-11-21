#include <iostream>
using namespace std;

int main() {
    string answer;

    // Ask the question
    cout << "What is the capital of France? ";
    getline(cin, answer); // Allows multi-word input

    // Check the answer (case-sensitive)
    if (answer == "Paris") {
        cout << "Correct! Paris is the capital of France." << endl;
    } else {
        cout << "Wrong answer. The correct answer is Paris." << endl;
    }

    return 0;
}