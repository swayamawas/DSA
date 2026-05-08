```cpp id="jlwm2c"
// ======================================
// Topic: Character Array Basics
// Concept: Input/Output in Char Arrays
// Time Complexity: O(n)
// ======================================

#include<iostream>
using namespace std;

int main() {

    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name;

    return 0;
}

/*
NOTE:
cin stops reading input after SPACE.

Example:
Input:
Swayam Awasthi

Output:
Swayam

To take full string with spaces,
use getline().
*/
```
