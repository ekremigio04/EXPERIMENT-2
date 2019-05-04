#include <iostream>
#include <string>
using namespace std;
int main()
{
    string package;
    float hour;
    float price;
    cout << "Choose package: ";
    cin >> package;
   
    if ((package == "A") || (package == "B") || (package == "C"))
        
    {
        cout << "The number of hours: ";
        cin >> hour;
        
        if (package == "A")
        {
            if (hour > 10) {
                price = 995 + (hour - 10) * 20;
            } else {
                price = 995;
            }
        }
        
        else if (package == "B")
        {
            if (hour > 20) {
                price = 1495 + (hour - 20) * 10;
            } else {
                price = 1495;
            }
        }
        
        else
        {
            price = 1995;
        }
    }
    
    else {
        cout << "Invalid package!" << endl;
    }
    
    cout << "Price: Php " << price;
    
    
    cout << "\n";
    return 0;
}
