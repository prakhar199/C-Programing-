//program is to add two number using function    //TO DO: TAKE INPUT FROM THE USER

#include <iostream>

using namespace std;

//declare the function

int add(int a, int b)
{
    int s=a+b;
    return s;  //return (a+b)

}

main()
{
    int sum;

    sum=add(100,70);

    cout<<"Sum of given variables is = "<<sum<<endl;

}
