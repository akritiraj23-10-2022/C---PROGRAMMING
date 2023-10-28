//IF ELSE Statement
#include<iostream>
using namespace std;
int main()
{
    #ifdef ONLINE_JUDGE//NOT PART OF A CODE,USED TO BEAUTIFUL INTPUT OUTPUT
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int savings;
    cin>>savings;
    if(savings>5000)
    {
        cout<<"neha\n";
    }
    else
    {
        cout<<"rashmi\n";
    }
    return 0;
}
