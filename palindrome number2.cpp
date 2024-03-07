#include <iostream>
#include <string> // Include the <string> header for using string-related functions
using namespace std;

int main() {
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    const bool isPalindrome = (to_string(number) == string(to_string(number).rbegin(), to_string(number).rend()));
    if (!isPalindrome) { // Simplify the condition check
        cout << "It is not a palindrome\n";
    } else {
        cout << "It is a palindrome number\n";
    }

    return 0;
}
