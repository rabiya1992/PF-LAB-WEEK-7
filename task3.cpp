#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);


main()
{
    int number;
    int digit;
    int answer;
   
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Enter a digit: ";
    cin >> digit;
    
    answer = frequencyChecker(number, digit);
    cout << "Number of digits: " << answer;

}

int frequencyChecker(int number, int digit)
{ 
  int counter = 0;  

  while(number > 0)
  { int rem;
   
    
     rem = number % 10;
    
     
     if(rem == digit )
     {
       counter = counter + 1; 
     }

     number = number / 10;
  }
 
  return counter;   

} 
