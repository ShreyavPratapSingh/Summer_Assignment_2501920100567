#include<iostream>
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      
      int n;
      cout<<"Enter the number of stars in the first row of the inverted pyramid: ";
      cin>>n;
      cout<<n;
      cout<<endl;

      for(int i=n;i>=1;i--)
      {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
      }
      return 0;

}