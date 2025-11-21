#include <iostream>  // For input and output
#include <string>    // For using the string type

int main() {
    // Step 1: Declare and initialize the array of names
    std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Step 2: Calculate the number of elements in the array
    int size = sizeof(names) / sizeof(names[0]);

    // Step 3: Set the name we want to search for
    std::string searchName = "Sam";

    // Step 4: Create a flag to track if the name is found
    bool found = false;

    // Step 5: Loop through the array to search for the name
    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            std::cout << "name found: " << searchName << " is at index " << i << "." << std::endl;
            found = true;
            break;  // Stop searching once found
        }
    }

    // Step 6: If not found, print a message
    if (!found) {
        std::cout << "name not found in the list." << std::endl;
    }

    return 0;  // End of program
}