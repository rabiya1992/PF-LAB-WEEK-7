#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1;
    int number2;
    int result1;
    int result2;

    cout << "Enter first number:  ";
    cin >> number1;
    cout << "Enter second number:  ";
    cin >> number2;

    result1 = calculateGCD(number1, number2);
    result2 = calculateLCM(result1, number1, number2);

    cout << "Greatest Common Divisor is:  " << result1 << endl;
    cout << "Highest Common Factor is:  " << result2 << endl;


}

int calculateGCD(int number1, int number2)
{
    int gcd;
    if(number1 == 0)
    {
        gcd = number2;
    }

    if(number2 == 0)
    {
        gcd = number1;
    }

    if(number1 == number2)
    {
        gcd = number1;
    }

    if(number1 > number2)
    {
        gcd = (number1 - number2);
    }

    if(number1 < number2)
    {
        gcd = (number2 - number1);
    }
    return gcd;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int LCM;
    LCM = (number1 * number2) / gcd;
    return LCM;
}