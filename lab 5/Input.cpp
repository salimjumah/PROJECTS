#include <iostream>
using namespace std;

int main() {
    int input; //input from console
    cout << "Enter a number between that is 5 and 10: ";
    
    while (!(cin >> input) || input < 5 || input > 10) //initiating a while loop
     {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please enter the right number between 5 and 10: ";
    }

    cout << "Your input value " << input << " has been accepted." << endl; //output
    return 0;
}
