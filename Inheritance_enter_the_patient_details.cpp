/*c++ Program for Enter Patient details using Inheritance */
#include <iostream>
using namespace std;
const int len=80;

class doctor
{
private:
    char name[len];
    char degree[len];
public:
    void getedu()
    {
        cout<<"Enter the doctor's name: ";
        cin>>name;
        cout<< "Enter Doctorate Degree: ";
        cin>>degree;
    }
    void showedu()
    {
        cout<<"\n Doctor Name: "<<name;
        cout<<"\n Enter the doctorate degree: "<<degree;

    }
};

class patient:public doctor
{
private:
    char name[len];
    char number[len];

public:
    void getdata_patient()
    {
        cout<<"\n Enter Patient Name: ";
        cin>>name;
        cout<<"\n Enter Bed Name: ";
        cin>>number;
    }

    void showdata_patient()
    {
        cout<<"\n Patient Name :"<<name;
        cout<<"\n Bed Number :"<<number;
    }
};

class department:public patient
{
private:
    char ward[len];
public:
    void getdata_department()
    {
        cout<<"\nEnter Ward Name: ";
        cin>>ward;
    }
    void showdata_department()
    {
        cout<<"\n Ward Name: "<<ward;
        //cout<<"\n bed number:"<<number;
    }
};

class amount:public department
{
private:
    int dues;

public:
    void getdata_amount()
    {
        cout<<"\nEnter the dues: ";
        cin>>dues;

    }
    void showdata_amount()
    {
        cout<<"\n Patient Dues: "<<dues;
    }

}    ;

main()
{
    amount a1;
    cout<<"Enter the data ";
    a1.getdata_patient();
    a1.getdata_department();
    a1.getdata_amount();
    cout<<"\n DATA:\n";
    a1.showdata_patient();
    a1.showdata_department();
    a1.showdata_amount();
}
