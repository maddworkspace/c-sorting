#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int main()
{
    int i,j,k,l;
    cout<<"Showing Selection Sort without an input"<<endl;
    cout<<"~~~~~~~~~Credit : Aditya Rahmat~~~~~~~~"<<endl;
    cout<<endl;

    int data[n] = {84, 7 , 52, 88, 35, 100, 99, 57, 212};
    cout<<"The existing data : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Sort by descending order : "<<endl;
    k=0;
    while(k<=n)
    {
        j=k;
        i=k+1;
        while(i<n)
        {
            if(data[i] > data[j])
                j=i;
                i++;
        }
        l = data[j];
        data[j]=data[k];
        data[k]=l;
        k++;
    }
    for(i=0; i<n; i++)
    {
        cout << data[i]<<" ";
    }
    cout<<endl;
}
