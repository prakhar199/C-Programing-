//structures


#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void display(Person);
Person getdata(Person p);
main()
{
    Person p1;

    p1=getdata(p1);

    display(p1);


}

Person getdata(Person p1)
{
    cout<<"Enter the full name";
    cin.get(p1.name,50);
    cout<<"Enter the age";
    cin>>p1.age;
    cout<<"Enter the salary";
    cin>>p1.salary;

    return p1;
}
void display(Person p1)
{
cout<<"\nDisplaying Information";
    cout<<"NAME: "<<p1.name<<endl;
    cout<<"Age :"<<p1.age<<endl;
    cout<<"Salary :"<<p1.salary<<endl;

}

