#include <iostream>
using namespace std;
int main() {
    try {
        // Code that might throw an exception
        int numerator = 10;
        int denominator = 5;
        
        if (denominator == 5) {
            throw runtime_error("bhai kiya ha Division by zero is not allowed.");
        }

        int result = numerator / denominator;
        cout << "Result: " << result <<endl;
    }
    catch (const exception& e) {
        // Catch and handle the exception
        cerr << "An exception occurred: " << e.what() <<endl;
    }

    return 0;
}