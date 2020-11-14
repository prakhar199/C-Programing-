//Program to illustrate the working of objects and class in C++ Programming

#include <iostream>
using namespace std;

//create class

class Room
{
public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
    return length*breadth;
    }

     double calculateVolume()
    {
    return length*breadth*height;
    }
};


main()
{
    //create object of Class Room
    Room r1;

    //assign the values to the data members;

    r1.length=42.5;
    r1.breadth=30.8;
    r1.height=19.2;

    //calculate and display the area and volume of the room r1

    cout<<"Area of Room= "<<r1.calculateArea()<<endl;
    cout<<"Volume of Room= "<<r1.calculateVolume()<<endl;


}

