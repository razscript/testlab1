// Authors: Ryan Stevens and (Lab Partner)
// Purpose: Prove that you can compile with makefile and use cin and cout

#include "myfunctions.h"

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, world! My age is " << age << endl;

    return 0;
}