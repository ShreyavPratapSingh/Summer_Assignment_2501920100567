#include<iostream>
using namespace std;

int main()
{
    
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

    int row , column;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>column;
    cout<<row<<" "<<column;
    cout<<endl;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}