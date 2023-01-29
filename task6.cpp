#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    float money;
    int year; 

    float result;
    
    cout << "Enter the inherited money:  ";
    cin >> money;
    cout << "Enter the year:  ";
    cin >> year;

    result = calculatePrice (money, year);
    if (result > money)
    {
        result = result - money;
        cout << "He will need " << result << " dollars to survive" << endl;
    }
    else
    {
        result = money - result;
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left" << endl;
    }

    
}

float calculatePrice(float money, int year)
{
    float total = 0;
    int age = 18;

    for(int count = 1800; count <= year; count = count + 1)
    {
        if(count % 2 == 0)
        {
         total = total + 12000;
        }
        
        else
        {
            total = total + 12000 + (50 * age);
        }

        age = age + 1;
    }
    return total;
     


}
