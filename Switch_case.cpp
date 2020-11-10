//program to build a simple calculator using  switch statement

#include <iostream>
using namespace std;

main()
{
    char oper;
    float num1,num2;
    cout<<"Enter an operator (+,-,*,/): ";
    cin>>oper;

    cout<< "Enter the two numbers: " <<endl;
    cin>>num1 >> num2;

    switch(oper)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

    //if operator is invalid
    default:
        cout<<"Error! the operator does not match";
        break;
    }
}

