#include<iostream>
using namespace std;
int main()
{
    int n,t2,t3,t4,d2=0,d3=0,d4=0,q,r;
    cin>>n>>t2>>t3>>t4;
    if(t2>=1)
    {
    r=n%2;
    q=n/2;
    if(q>t2)
    {
      q=q-t2+1;
      t2=t2-1;
      d2=t2;
      q=2*q+r;
    }
    else 
    {
    d2=q;
    q=0;
    }
    }
    else
    q=n;
    if(t3>=1&&q>0)
    {
      r=q%3;
      q=q/3;
      if(q>t3)
      {
      q=q-t3+1;
      t3=t3-1;
      d3=t3;
      q=3*q+r;
    }
    else{
        if(r==0)
        {
        d3=q;
        q=0;
        }
        else
        {
        d3=q-1;
        q=3+r;
        }

    }
}
if(t4>=1&&q>0&&n>3)
{
    r=q%4;
    q=q/4;
    if(q>t4)
    {
    q=q-t4;
    d4=t4;
    q=4*q+r;
    }
    else
    {
    d4=q;
    q=0;
}
}
if(q>=2&&n>1)
{
    if(t3>=1&&q>=3)
    {
        q=q-3;
        d3+=1;
    }
    if(t2>=1)
    {
     q=q-2;
    d2+=1;
    }
}
if(n==1)
q=1;
cout<<" no of deliveries to t2"<<d2<<endl;
cout<<" no of deliveries to t3"<<d3<<endl;
cout<<" no of deliveries to t4"<<d4<<endl;
cout<<"no of pizzas not delivered"<<q<<endl;
return 0;
}