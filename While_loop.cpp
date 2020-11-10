//program to find the sum of positive numbers
//if the user enters a negative number, the loop ends
//the negative number entered is not added to the sum

#include <iostream>
using namespace std;

main()
{
    int number;
    int sum=0;

    //take the input fro the user
    cout<<"Enter a number";
    cin>>number;

    while(number>=0)
    {
        sum+=number; //sum=sum+number;

        cout<<"Enter a number"<<endl;
        cin>>number;
    }

    cout<<"\nthe sum is "<<sum<<endl;

}
