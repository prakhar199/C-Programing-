#include <iostream>
using namespace std;

main()
{
    int number;

    cout<<"Enter the number" ;
    cin>>number;

    if(number>0)
    {
        cout<<"You entered a positive number :"<<number<<endl;
    }

    else if(number <0)
    {
        cout<<"You entered a negative number :"<<number<<endl;
    }

    else if(number==0)
    {
        cout<<"You have entered zero";
    }
}
