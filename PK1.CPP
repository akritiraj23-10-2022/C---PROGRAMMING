//write the program butterfly patterns
#include <iostream>
using namespace std;
int main()
{
    int r,i,j;
    cout<<"enter the no of rows: ";
    cin>>r;
   for(int i=1;i<=r; j++)
   {
       for(j=1;j<=i;j++)
        cout<<"*";
       for(int j=1;j<=i;j++)
        cout <<"             ";
       for(j=1;j<=i;j++)
        cout<<"*";
       cout<<"\n";
   }
   for(i=r;i>=1;i--)
   {
       for(j=r;j>=1;j++)
        cout<<"*";
       for(j=1;j<=2*(r-i);j++)
        cout<< "           ";
       for(j=1;j<=i;j++)
        cout<<"*";
       cout<<"\n";
   }
   return 0;
    }
