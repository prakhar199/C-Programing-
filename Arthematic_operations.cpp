#include <iostream>  //stdio.h
#include <cmath>   //math.h
using namespace std;

main()
{
    int a,b;
    //a=7;
    //b=2;
    cout << "Enter the variable for a:";//printf
    cin >> a;   //scanf
    cout <<"Enter the variable for b:"; //printf
    cin>>b;//scanf


    //printing the sum
    //cout <<"a+b=" << (a+b) << endl;
    //std::cout <<"a+b=" << s << endl;
    cout <<"a+b=" <<(a+b)<< endl;

    cout <<"a-b=" <<(a-b)<< endl;

    cout <<"a*b=" <<(a*b)<< endl;

    cout <<"a/b=" <<(a/b)<< endl;

    cout <<"a%b=" <<(a%b)<< endl;

    cout<<"a^b= "<<pow(a,b)<<endl;

    cout<<"sin(a)= "<<sin(a)<<endl;

}
