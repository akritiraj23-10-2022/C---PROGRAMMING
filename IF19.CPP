/*WRITE THE PROGRAMMING USE OF NEW AND DELETE OPERATORS*/
#include<iostream>
using namespace std;
int main()
{

    int *array;
    int size;
    cout<<"Enter the  size of  the integer array:";
    cin>>size;
    cout<<"Creating an array of size "<<size<<"..";
    array = new int[size];
    cout<<"\n Dynamic allocation of  memory  for array arr is successful.";
    delete array;
    return 0;
}
