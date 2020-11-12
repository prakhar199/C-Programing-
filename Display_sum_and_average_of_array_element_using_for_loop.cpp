#include <iostream>    //take input from user and can implement function
using namespace std;

main()
{
    double number[]={7,5,612,35,27};

    double sum=0;

    double average;

    int len=sizeof(number)/sizeof(double);  //length of the array

    for(int i=0; i<len;i++)
    {
        sum=sum+number[i];
    }

    average=sum/len;
    cout<<"Average is= "<<average;
}
