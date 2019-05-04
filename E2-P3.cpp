#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()

{
    
    int  v, x, y;
    float z;
    
    cout << "What is X?" << endl;
    cin >> x;
    
    cout << "What is Y?" << endl;
    cin >> y;
    
    
    z = 2.5;
    
    switch(x)
    {
        case 1:
            if (x == 1 && 1 < y < 5)
            {
                v = x * y * z;
                cout << "V is" << setw(10) << setprecision(2) << v;
            }
            break;
            
        case 2: (x == 1 && y >= 5);
        {
            v = x + (y / z);
            cout << "V is" << setw(10) << setprecision(2) << v;
        }
            break;
            
        case 3: (x == 2 && y <= 5);
        {
            v = ((x - y) / z);
            cout << "V is" << setw(10) << setprecision(2) << v;
        }
            break;
            
        case 4: (x == 2 && y > 5);
        {
            v = x - (sqrt(y + z));
            cout << "V is" << setw(10) << setprecision(2) << v;
        }
            break;
        default:
        {
            v = x + y + z;
            cout << "V is " << setw(10) << setprecision(2) << v;
        }
            break;
            
    }
    
    cout << "\n";
    

    return 0;
    
}
