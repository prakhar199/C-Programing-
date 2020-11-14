//Program to create a class to read and add two distances

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inch;
    //int suminch;
    //int sumfeet;

    //int addistance()
    //{
      //  sumfeet=sumfeet+feet;
        //suminch=suminch_suminch;
    //}
};

main()
{
    Distance d1;
    Distance d2;
    Distance temp;
    cout<<"Enter the feet for distance1"<<endl;
    cin>>d1.feet;
    cout<<"Enter the inch for distance1"<<endl;
    cin>>d1.inch;

    cout<<"Enter the feet for distance2"<<endl;
    cin>>d2.feet;
    cout<<"Enter the inch for distance2"<<endl;
    cin>>d2.inch;

    temp.feet=d1.feet+d2.feet;
    temp.inch=d1.inch+d2.inch;

    while(temp.inch >=12)
    {
       ++temp.feet;                                //13inch....1feet=12 inches....13inch...1inch + 12 inch .....1inch +1feet
       temp.inch=temp.inch-12;
    }

    cout<<"Sum of the distance is "<<temp.feet<<" feet " <<temp.inch<<" inch "<<endl;

}
