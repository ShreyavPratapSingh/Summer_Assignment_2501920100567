#include<iostream>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
   #endif

    int n,t;
    cout<<"Enter the number of stars in the first row of the inverted triangle: ";
    cin>>n;
    cout<<n;
    cout<<endl;
    t=(n%2==0)?n:n-1;
    for(int i=t;i>=1;i--)
    {
        for(int k=1;k<=t-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}