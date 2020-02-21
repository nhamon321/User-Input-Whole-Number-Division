// Grade Book #20
// Program that gets two whole numbers from the user
// and finds and displays the resulting quotient when
// the first number is divided by the second and the
// resulting quotient when the second number is
// divided by the first

#include <iostream>
using namespace std;

int main()
{

int num1, num2, result_1, result_2;

// Assign variables to num1, num2, result_1, and result_2

    cout << "Enter a whole number:";
    cin >> num1;
    cout << "Enter another whole number:";
    cin >> num2;
    result_1 = num1 / num2;
    result_2 = num2 / num1;
    cout << num2 << " / " << num1 << " is " << result_2 << endl;
    cout << num1 << " / " << num2 << " is " << result_1;

    return 0;
}
