#include <iostream>
using namespace std;

main()
{
    bool result;

    result =(3!=5) && (3<5); ////true
    cout <<"(3!=5) && (3<5) is: "<<result<<endl;

    result= (3==5) && (3<5);  //false
    cout<<"(3==5) && (3<5) is: "<<result<<endl;

    result= (3==5) && (3>5);  //false
    cout<<"(3==5) && (3>5) is: "<<result<<endl;

    result= (3!=5) || (3<5);// true
    cout<<"(3==5) || (3<5) is: "<<result<<endl;

    result  = (3!=5) || (3>5); //true
    cout<<"(3!=5) || (3>5) is: "<<result<<endl;

    result = (3==5) || (3>5); //false
    cout<<"(3==5) || (3>5) is: "<<result<<endl;

}
