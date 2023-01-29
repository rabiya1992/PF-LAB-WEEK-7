#include <iostream>
using namespace std;

int totalDigits(int number);


main()
{
    int number;
    int answer;
    cout << "Enter an integer: ";
    cin >> number;
   
    answer = totalDigits( number);
    cout << "Digits: " << answer;
    

}

int totalDigits(int number)
{ int counter = 0;
  

  while(number > 0)
  {
    number = number / 10;
    counter = counter + 1;

  }
 
  return counter;   

}