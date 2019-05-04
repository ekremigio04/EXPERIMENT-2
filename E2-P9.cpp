#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
    
    
    int x, y;
    cout << " How many rows: ";
    cin >> x;
    cout << " How many columns: ";
    cin >> y;
    
    for (int i=1; i <= x; i++)
    {
        
        for (int n=1; n <= y; n++)
                 {
            cout << "*";
                 }
        
        cout << "\n";
        
    }
    
    

    return 0;
    
}
