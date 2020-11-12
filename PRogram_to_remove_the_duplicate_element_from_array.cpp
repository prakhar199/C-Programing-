#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the "<<n<<"element to be stored in an array"<<endl;
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
    //removeduplicate(n,arr);



    int c=0,pos;
    for(int i=0; i<n;i++)
    {
       //q=arr[i];
       for(int j=i;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
            c++;
            pos=j;
           }
            //1233456
       }
          if(c==2)
            arr[pos]=0;
            c=0;
    }

    //display(n,arr[n]);
    cout<<"The array with no duplicate element is= "<<endl;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0)
        {
            cout<<arr[i+1];
            i++;
        }
        else
            {
            cout<<arr[i];
        }

    }

}

/*int removeduplicate(int n, int arr[])
{
    int q,c=0,pos;
    for(int i=0; i<n;i++)
    {
       q=arr[i];
       for(int j=0;j<n;j++)
       {
           if(q==arr[j])
            c++;
            if(c==2)
                pos=j;

       }
       arr[pos]=0;
       pos=0;
    }

    display(int n,arr[n]);

}*/


/*void display(int n,int arr[n])
{
    cout<<"The array with no duplicate element is= "<<endl;
    for(int i=0; i<n;i++)
    {
     cout<<arr[i];
    }
}*/
