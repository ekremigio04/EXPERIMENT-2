#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    
    float gallon, balance, bill;
    
    cout << "How many gallons were consumed" << endl;
    cin >> gallon;
    
    cout << "How much is the unpaid balance" << endl;
    cin >> balance;
    
    bill = (35 + (1.10 * gallon));
    {
        if (balance > 0)
        {
            cout << " Your bill is PHP " << (bill + 20);
    }
    else if (balance ==0)
        
    {
        cout << " Your bill is PHP " << bill;
    }
    
    else
    {
        cout << " Invalid " << endl;
    }
    
}

    cout << "\n";
return 0;
}
