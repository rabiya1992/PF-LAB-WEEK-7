#include <iostream>
using namespace std;



main()
{
    int sum = 0;
    
    for(int count = 1; count <= 10; count = count + 1)
    {
        if(count % 2 == 0)
        {
            sum = sum + count;
            cout << sum;
        }
         
    }

}