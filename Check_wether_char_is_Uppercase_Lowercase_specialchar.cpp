//check whether a give character is upper case,lower case,number or special case
#include <iostream>
using namespace std;

main()
{
    char ch;
    cin>>ch;

    if(ch>=65 && ch<=90)
        cout<<"UPPERCASE";

    else if(ch >=97 && ch<=122)
    {
        cout<<"LOWERCASE";
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"NUMBER";
    }
    else
        cout<<"SPECIALCASE";

}


//compare()  ,strcmp
//copy(), strcpy
//find().....sizeof(arr)/size(ch)...length() ...
//str1+str2
//#include <cstring>   -->  strcat, strcpy , strcmp....
