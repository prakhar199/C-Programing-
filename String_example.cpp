#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    char str[100];
    cout<<"Enter the string:";
    //cin.get(str,100);
    gets(str);

    cout<<"You entered: " <<str<<endl;
    //printf("%s",str);
}
