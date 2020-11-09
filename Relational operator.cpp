#include <iostream>
using namespace std;

main()
{
    int a,b;
    a=3;
    b=5;

    bool result;

    result=(a==b); //false

    cout << "3==5 "<<result<<endl;

    result= (a!=b);
    cout<<"3!=5 "<<result<<endl;

    result= (a>b);
    cout<<"3>5 "<<result<<endl;

    result= (a<b);
    cout<<"3<5 "<<result<<endl;

    result= (a>=b);
    cout<<"3>=5 "<<result<<endl;

    result= (a<=b);
    cout<<"3<=5 "<<result<<endl;


}
