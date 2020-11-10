//program to check whether an integer is positive or negative
//0 is consider as positive

#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter the number";  //printf
    cin>> number;  //scanf

    if( number >=0)
    {
        cout<<"You entered a positive number";
    }

    else{
        cout<<"You entered a negative number";
    }
}
