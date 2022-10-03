#include <iostream>

using namespace std;

int main() 
{
    int i,j;
    int r=4;
    int a=r-1;
    int z=a-1;
//    cout<<"ENTER SIZE OF ROWS: "<<endl;
//    cin>>r;
//    cout<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==a)
            {
                int b=j-1;
                int d=a*b;
                cout<<i+d; 
            }
            else if(j==z)
            {
                int e=a*j;
               int l=i+e;
                cout<<l-1;
            }
            else
            {
                int e=a*j;
                cout<<i+e;
                
            }
        }cout<<endl;
    }
   
    cout<<endl<<"*********Hello increment**********"<<endl;
    system("pause");

    return (0);
}
