/*Write the program calculate profit and loss*/
#include<iostream>
using namespace std;
int main()
{
    float sp,cp,profit,loss;
    cout<<"Enter the cost price\n";
    cin>>cp;
    cout<<"Enter the selling prise\n";
    cin>>sp;
    if(cp>sp)
    {
        profit=sp-cp;
        cout<<"Profit of"<<profit<<"rupee";
    }
    else
    {
        loss=cp-sp;
        cout<<"Loss of"<<loss<<"rupee";
    }
    return 0;
}
