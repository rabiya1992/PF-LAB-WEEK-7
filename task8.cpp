#include <iostream>
using namespace std;

void percentage(float number, float noOfLines);

main()
{   float number;
    float noOfLines;

    cout << "Enter number of lines of count: ";
    cin >> noOfLines;


    percentage(number, noOfLines);

}

void percentage(float number, float noOfLines)
{
 float percent1 = 0;
 float percent2 = 0;
 float percent3 = 0;
 float percent4 = 0;
 float percent5 = 0;

 float totalP1;
 float totalP2;
 float totalP3;
 float totalP4;
 float totalP5;

 for(float counter = 0; counter < noOfLines; counter = counter + 1)
 {
    cout <<  "Enter number : ";
    cin >> number;

    if(number < 200)
    {
        percent1 = percent1 + 1;
    }

    else if(number >= 200 && number <= 399)
    {
        percent2 = percent2 + 1;
    }

    else if(number >= 400 && number <= 599)
    {
        percent3 = percent3 + 1;
    }
    
    else if(number >= 600 && number <= 799)
    {
        percent4 = percent4 + 1;
    }

    else if(number > 800)
    {
        percent5 = percent5 + 1;
    }
 }  

 totalP1 = ((percent1 * 100.00) / noOfLines);
 cout << totalP1 << "%" << endl;

 totalP2 = ((percent2 * 100.00) / noOfLines);
 cout << totalP2 << "%" << endl;

 totalP3 = ((percent3 * 100.00) / noOfLines);
 cout << totalP3 << "%" << endl;

 totalP4 = ((percent4 * 100.00) / noOfLines);
 cout << totalP4 << "%" << endl;

 totalP5 = ((percent5 * 100.00) / noOfLines);
 cout << totalP5 << "%" << endl;

}