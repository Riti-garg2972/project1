#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   ifstream f;
   f.open("ex1.txt");
   string s;
   int n,t2,t3,t4,r,q;
   cin>>n>>t2>>t3>>t4;
   int d=0;
   if(n%2!=0&&t3>=1)
   {
       n=n-3;
       t3=t3-1;
       cout<<"delivery to 1 3 member teams"<<endl;
       d=1;
   }
   if(n>=4&&t4>=1)
   {
       n=n-4;
       t4=t4-1;
       cout<<"deliver to 1 team of 4 members"<<endl;
       d+=1;
   }
       r=n%2;
       q=n/2;
       if(q>=t2)
       {
           q=q-t2;
           q=2*q+r;
           if((4*t4)>=(q+2))
           {
               q=q+2;
               t2=t2-1;
           }
           d+=t2;
           cout<<" deliver to "<<t2<<" teams of 2 members"<<endl;
           q=q/4;
           r=r%4;
           if(q>=t4)
           {
             q=q-t4;
             d+=t4;
             cout<<"deliver to "<<t4<<" teams of 4 mebers"<<endl;
             q=4*q+r;
             q=q/3;
             r=q%3;
             if(q>=t3)  
             {
             cout<<"deliver to team of three members:"<<t3<<endl;
             d+=t3;
             }
             else
             {
             cout<<" deliver to "<<q<<" team of three members"<<endl;
             d+=q;
             }
           }
           else
           {
           cout<<"deliver to "<<q<<" 4 members team";
           d+=q;
           }   
       }
       else
       {
           cout<<"last delivery to "<<q<<" 2 member teams";
           d+=q;
       }
       cout<<"total deliveries"<<d;
   return 0;
}