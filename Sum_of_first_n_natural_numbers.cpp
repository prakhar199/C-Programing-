//program to find the sum of first n natural numbers
//positive numbers such as 1,2,3....n are known as natural numbers

#include <iostream>
using namespace std;

main()
{
    int num,sum;
    sum=0;

    cout<<"Enter the positive number";
    cin>>num;

    for(int i=1;i<=num;++i)
    {
        sum=sum+i;

    }

    cout<<"Sum="<<sum<<endl;
}
