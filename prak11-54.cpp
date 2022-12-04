#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int main()
{
    int i,j,k;
    cout<<"Menampilkan Insertion Sort tanpa menggunakan input"<<endl;
    cout<<"~~~~~~~~~~~~~~Credit : Aditya Rahmat~~~~~~~~~~~~~~"<<endl;
    cout<<endl;

    int data[n] = {84, 7 , 52, 88, 35, 100, 99, 57, 212};
    cout<<"Data yang tersedia adalah : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Step by step pengurutan : "<<endl;
    for(j=0; j<n; j++)
    {
        i=j;
        k=data[i];
        while(i>=0 && data[i-1] > k)
        {
            data[i] = data[i-1];
            cout<<data[i]<<" ";
            i--;
        }
        cout<<endl;

        data[i]=k;
    
    }
    cout<<endl;
    cout<<"Di urutkan secara Ascending menjadi : "<<endl;
    for(i=0; i<n; i++)
    {
        cout << data[i]<<" ";
    }
    cout<<endl;
}