#include<iostream>
using namespace std;

int sum(int , int );  // I have declared that a function called sum exists but the body is not formed yet

int main()
{
    int a,b;

    a=3;
    b=5;

    int c;
    cout<<a<<" "<<b<<endl; // this value are before I call the function "sum"

    c=      sum(3,5);
    // int sum(int a, int b)    // int a ---> a, int b -----> b

    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;      // these values of a,b are after I call the function "sum"

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}