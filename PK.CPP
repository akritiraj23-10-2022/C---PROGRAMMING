/*write the program basic
#include <iostream>
using namespace std;
int main()
{

    cout <<"c++ is better than c";
    return 0;*/
    /*write the add the c ++ programming
    #include <iostream>
    using namespace std;
    int main()
    {
        float num1,num2,sum,avg;
        cout << "enter the two number";
        cin >> num1;
        cin >> num2;
        sum =num1+ num2;
        avg = sum/2;
        cout <<  "sum =" << sum << "\n";
        cout << "avg =" << avg << "\n";
        return 0;

    }*/
     /*write the the size the bites intgear ,float,boolean char
#include <iostream>
using namespace std;
int main()
{

    int a;//declaration
    a=12;//initialisation

    cout<<"size of int"<<sizeof(a)<<endl;
    float b;
    cout<<"size of float"<<sizeof(b)<<endl;
    char c;
    cout<<"size of char"<<sizeof(c)<<endl;
    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;
    short int si;
    long int li;
    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;
    return 0;
}*/

/*write the program add to two amounts sum
#include <iostream>
using namespace std;
int main()
{

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<"sum\n";
    cout<<sum<<endl;

    return 0;
}

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
//else if condation
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
    else if(savings>2000)
    {
        cout<<"rashmi\n";
    }
    else
    {
        cout<<"Friend\n";
    }
return 0;
}

 //NESTED IF_ELSE
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
        if(savings>10000)
        {
            cout<<"Roadtrip with neha\n";
        }
        else{
         cout<<"shoping with neha\n";
        }
    }
    else if(savings>2000)
    {
        cout<<"rashmi\n";
    }
    else
    {
        cout<<"friend\n";
    }
    return 0;
}
//write the program  max and min numbers
#include <iostream>
using namespace std;
int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
//write the program  cheak to the odd and even
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"even\n"<<endl;
    }
    else
    {
        cout<<"Odd\n"<<endl;
    }

return 0;
}
// introduction to for  loops
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sum=0;
    for(int counter=1;counter<=n;counter++)
    {
    sum=sum+ counter;
    }
    cout<<sum<<endl;
    return 0;
}
//using to the while loop
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n>0)
   {
       cout<<n<<endl;
       cin>>n;
   }
   return 0;
}
// using to do while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    do
    {
     cout<<n<<endl;
     cin>>n;
    }
    while(n>0);
    return 0;
}
//using to break and continue statement
#include<iostream>
using namespace std;
int main()
{
    int pocketMoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(pocketMoney==0)
        {
            break;
        }
        cout<<"go to today!"<<endl;
        pocketMoney=pocketMoney-300;
    }
    return 0;
}
//print to the 1 to 100 print and divisible by 3 .
#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

// Cheak if a number a prime or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"prime"<<endl;
    }
    return 0;

}

// Write the programming print all prime numbers between a and b.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}


//switch case
//multiple language robot
#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character:";
    cin>>button;

    if(button=='a')
    {
        cout<<"hello"<<endl;
    }
    else if(button=='b')
    {
        cout<<"Namaste"<<endl;
    }
    else if (button=='c')
    {
        cout<<"salut"<<endl;
    }
    else if (button=='d')
    {
        cout<<"hola"<<endl;
    }
    else if(button=='e')
    {
        cout<<"Ciao"<<endl;
    }
    else
    {
        cout<<"I am still learning more"<<endl;
    }

switch(button)
{
case'a':
    cout<<"Hii"<<endl;
break;
case 'b':
cout<<"namaste"<<endl;
break;
case 'c':
cout<<"salut"<<endl;
break;
case 'd':
cout<<"hello"<<endl;
break;
case 'e':
cout<<"ciao"<<endl;
break;
default:
    cout<<"I am still learning more"<<endl;
    break;
}

    return 0;
}


//implement a simple calculator using switch
#include<iostream>
using namespace std;
int main()
{
   // int n1,n2;
    float n1,n2;
    cout<<"input 2 number:";
    cin>>n1>>n2;
    char op;
    cout<<"input an operator";
    cin>>op;
    switch(op)
    {
        case'+':
        cout<<n1+n2<<endl;
        break;

         case'-':
        cout<<n1-n2<<endl;
        break;

         case'*':
        cout<<n1*n2<<endl;
        break;

         case'/':
        cout<<n1/n2<<endl;
        break;

        default:
            cout<<"enter another operator"<<endl;
            break;
    }
    return 0;
}*/

//operater in a start
/*write the program pre increment
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    //1  //3
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}

//write the program post increment
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int j=2;
    int k;

    k=i+j + i++  + ++j + ++i + ++j;

    cout<<i<<" "<<j<<" "<<" "<<k<<endl;
     return 0;
}
//using to the post increment and post decrement
#include<iostream>
using namespace std;
int main()
{

    int i=0;
    i=i++ - --i + ++i - i--;
    cout<<i<<endl;
    return 0;

}
//using to three value and post decrement
#include<iostream>
using namespace std;
int main()
{
    int i=1,j=2,k=3;
         //1 //2 //3

    int m =i-- - j-- - k--;

        cout<<i<<endl;//0
        cout<<j<<endl;//1
        cout<<k<<endl;//2
        cout<<m<<endl; //-4

     return 0;
}
// using to the post decrement and post increment
#include<iostream>
using namespace std;
int main()
{

    int i=10,j=20,k;

       //10  //9   //19  //20  //9  //20 //10   //19
    k= i-- -i++ + --j - ++j + --i - j-- + ++i - j++;


    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20

    return 0;

}
//using to the   rectangle pattern
#include<iostream>
using namespace std;
int main()
{

    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cout<<"*";
            }
            cout<<endl;
    }
    return 0;
}
//write the pattern program hollow rectangle pattern
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}
 // write the program pattern inverted half pyramid
 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=n;i>-1;i--)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     return 0;
 }
 //write the program half pyramid after 180. rotation
 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         if(j<=n-i){
            cout<<" ";
         }
         else{
            cout<<"* ";
         }
        }
        cout<<endl;
        }
     return 0;
     }
     // write the program  pattern half pyramid using numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
    return 0;
}
// write the  pattern program floyd's trangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
// write the program in butterfly pattern
#include<iostream>
using namespace std;
int main()
{
	int sizze;
	cin>>sizze;
	//1
	for(int row = 1; row<= sizze; row++)
    {
        for(int star =1;star<=row;star++)
            cout<<"*";
        for (int space =1; space <=(sizze - row) *2; space++ )
            cout<< " ";
        for(int star =1; star <= row;star++)
            cout << "*";
        cout <<endl;
    }
    //2
    for(int row=sizze -1;row>=1;row--)
    {
        for(int star=1; star<=row; star++)
            cout <<"*";
        for(int space =1; space <= (sizze - row)*2; space++)
            cout <<" ";
        for(int star=1;star<=row;star++)
            cout <<"*";
        cout<<endl;
    }
    return 0;
}

//write the program  unique shape
#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||(i+j)==6||i==5||i==j)// change only this in above program
                cout<<"*";
            else
                cout<<" ";//Remember :- put two space inside double quotes
        }
        cout<<"\n";
    }
    return 0;
}*/



