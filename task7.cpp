#include <iostream>
using namespace std;

void calculateMoney(int age, float machinePrice, float toysPrice);

main()
{
    int age;
    float machinePrice;
    float toysPrice;

    cout << "Lilly's age is: ";
    cin >> age;
    cout << "Price of machine: ";
    cin >> machinePrice;
    cout << "Emter price of toys: ";
    cin >> toysPrice;

    calculateMoney(age, machinePrice, toysPrice);

}



void calculateMoney(int age, float machinePrice, float toysPrice)
{
    float toysCount = 0;
    float savedMoney = 0;
    float birthdayMoney = 10.0;
    float sum = 0;
    int even = 1;

    for(int count = 1; count <= age; count = count + 1)
    {
        if(count % 2 == 0)
    {
        savedMoney = (savedMoney + even * (birthdayMoney));
        savedMoney = savedMoney - 1;
        even = even + 1;
    }

     else
    {
        toysCount = toysCount + 1;
    }

    }

  savedMoney = savedMoney + (toysCount * toysPrice);

  if(savedMoney >= machinePrice)
 {
    float left;
    left = savedMoney - machinePrice;
    cout << "Yes! " << left << endl;
 }
  
  if(savedMoney < machinePrice)
{
    float left;
    left = machinePrice - savedMoney;
    cout << "No! " << left << endl; 
 }

}
