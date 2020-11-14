//Program to demonstrate the use of default constructor

#include  <iostream>
using namespace std;

//declare a class

class Wall
{
private:
    double length;

public :
    Wall()
    {
    length=5.5;
    cout<<"Creating a Wall."<<endl;
    cout<<"Length="<<length<<endl;

    }
};


main()
{
    Wall wall1;
}
