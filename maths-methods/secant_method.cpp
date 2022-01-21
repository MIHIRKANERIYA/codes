#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return (x*x*x - x*x + 2);
}

void secant(double x0,double x1)
{
    double x;
    x=x1-((x1-x0)*func(x1)/(func(x1)-func(x0)));

    while(func(x)==0)
    {
        secant(x0,x1);
        x0=x1;
        x1=x;
    }
    cout<<"the root is:"<<x<<endl;
}

int main()
{
    double a,b;
    cout<<"Enter the values"<<endl;
    cin>>a>>b;
    secant(a,b);
    return 0;
}