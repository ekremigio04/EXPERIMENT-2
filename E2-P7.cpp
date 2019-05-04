#include <iostream>
#include <conio.h>

using namespace std;

int n, x;

int main()
{
    do
	{
        cout << "Enter a number: ";
        cin >> n;
        x=0;
        
        for(int ctr=0;ctr<=n;ctr++)
		{    
            if (n < 1){
                cout<<"Thank you!"<<endl;
                break;
            }
            else
			{
                x += ctr;
            }
        }
        if(n>0)
            cout<<"The sum of all whole numbers from 1 to "<< n <<" is "<< x <<endl;
    }
	while(n>0);
    
    return 0;
}
