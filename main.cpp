// Make a program that finds the minimum value among three integer values.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min;
    cin >> num1 >> num2 >> num3;

    // TODO: Find the smallest value among three values
    if (num1 < num2 && num1 < num3) {
        min = num1;
    } else if (num2 < num3 && num2 < num1) {
        min = num2;
    } else {
        min = num3;
    }

    // Use the following statements to print output
    cout << "The smallest number is " << min << endl;
}
