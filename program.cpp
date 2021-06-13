#include <iostream>

using namespace std;

int main()
{
    int min = 0;
    int max = 10;
    int counter1 = min;
    char symbol = '+' ;
    
    cout << "Pattern A: "  << endl;
    while(counter1 < max)
    {
        while(min <= counter1)
        {
            cout << symbol;
            min++;
        }
        min = 0;
        cout << endl;
        counter1++;
    }
    cout << "Pattern B: "  << endl;
    while(min < max)
    {
        while(max > min)
        {
            cout<< symbol;
            max--;
        }
        max = 10;
        min++;
        cout << endl;
    }
    
    return 0;
}
