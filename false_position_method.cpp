#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return (x*x*x - x*x + 2);
}

void FC(double a,double b)
{
    double x;
    if(func(a)*func(b)>=0)
    {
        cout<<"The initial values are not correct"<<endl;
    }
    else if(func(a)*func(b)<0)
    {
        x=((a*func(b))-(b*func(a)))/(func(b)-func(a));
    }



    if(func(x)*func(a)<0)
    {
        FC(a,x);
    }
    else if(func(x)*func(b)<0)
    {
        FC(x,b);
    }

    while ((func(x)==0))
    {
        cout<<"root is:"<<x;
        return;
    }   
}
int main()
{
    double x,y;
    cout<<"Enter the values"<<endl;
    cin>>x>>y;
    FC(x,y);
    return 0;
}