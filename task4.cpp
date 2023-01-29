#include <iostream>
using namespace std;

int digitSum(int number);

main()
{int number;
 int result;
 cout << "Enter a number: ";
 cin >> number;
 
 result = digitSum( number);
 cout << result;

}


int digitSum(int number)
{
  int sum = 0;
  int rem;
  int counter = 0;

  while(number > 0)
 {
  rem = number % 10;
  number = number / 10;
   
  sum = sum + rem;

}

return sum;

}