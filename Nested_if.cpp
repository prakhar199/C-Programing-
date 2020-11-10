//program to find if an integer is even or odd or neither lets say if it is zero.
//nested loop will be used

#include <iostream>
using namespace std;

main()
{
    int num;

    cout<<"Enter the integer";
    cin>>num;

    if(num!=0)
    {
        if((num%2)==0)
        {
            cout<<"The number is even. "<<endl;
        }
        else{
            cout<<"the number is odd. "<<endl;
        }
    }
    else{
        cout<<"The number is 0 and it is neither even nor odd"<<endl;
    }
}
