#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,t;
    cout<<"enter the star at the width of the diamond: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    t=(n%2==0)?n:n-1;
   if(n%2==0)
   {
      for(int i=1;i<=2*t;i++)
      {
        if(i<=t)
       {for(int j=1;j<=t-i;j++)
          {
              cout<<" ";
          
          }
          for(int k=1;k<=i;k++)
          {
              cout<<"* ";
          }
          cout<<endl;
        }
          else
       {
          for(int j=1;j<=i-t;j++)
          {
              cout<<" ";
          }
          for(int k=1;k<=2*t-i;k++)
          {
              cout<<"* ";
          }
          cout<<endl;
       }
     }
    }
    else
    {
        for(int i=1;i<=(2*(t+1));i++)
        { if(i<=(t+1))
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
          else
          {
            for(int j=1;j<=i-(t+1);j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=2*(t+1)-i;k++)
            {
                cout<<"* ";     
            }
            cout<<endl;
          }
        }
    }
  

   return 0;

}