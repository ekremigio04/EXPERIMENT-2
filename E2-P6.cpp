#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
    int a;
    int b;
    int x = 0;
    int y = 1;
    int next;
    
    
    
    cout << "How many numbers??" << endl;
    cin >> a;
    
    cout <<  "Fibonacci Numbers: " << endl;
    
    for ( b = 0 ; b < a ; b++ )
    {
        if ( b <= 1 )
            next = b;
        else
        {
            next = x + y;
            x = y;
            y = next;
        }
        cout << next << ",";
    }
    
    cout << "\n";
    return 0;
}
