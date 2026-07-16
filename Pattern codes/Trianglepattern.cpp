#include<iostream>
using namespace std;

int main()
{ 
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

int n,t;
cout<<"Enter the star at the base of the triangle: ";
cin>>n;
cout<<n;
cout<<endl;
 t=(n%2==0)?n:n-1;
 if(n%2==0)
 {
     for(int i=1;i<=t;i++)
     {
         for(int j=1;j<=t-i;j++)
         {
             cout<<" ";
         }
         for(int k=1;k<=i;k++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }
 }
 else
 {
     for(int i=1;i<=t+1;i++)
     {
         for(int j=1;j<=t+1-i;j++)
         {
             cout<<" ";
         }
         for(int k=1;k<=i;k++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }
 }
    return 0;



}