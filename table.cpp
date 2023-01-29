#include <iostream>
using namespace std;

void table(int number);

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    table(number);
}

void table(int number)
{
    for (int counter = 1; counter <= 10; counter = counter + 1)
    {
        cout << number << " * " << counter << " = " << number * counter << endl;
    }
}