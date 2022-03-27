#include<iostream>
using namespace std;
int factorial(int a)
{
    int result=1;
    if (a>1)
    {
        result=a*factorial(a-1);
    }
    return result;
}
// first iteration-a=3,b=1
// second iteration-a=3,b=2
//
int factorial(int a,int b)
{
    int result=0;
    if (b==a)
    {
    }
    else
    {
        result=a*(a-1);
        result=a*factorial(a,b+1);
        cout<<result<<endl;
    }
    return result;
}
int main()
{
    cout<<"Enter the number to determine the factorial by recursive function"<<endl;
    int x=0,y=1; // Here we have initialized two integer variables x and y.
    cin>>x;      // Here we are taking an input for variable x.
    cout<<factorial(x);
    return 0;
}
