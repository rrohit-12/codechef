#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=100;i=i+8)
        {
            for(int j=i;j<=i+7;j++)
            {
                if( n==j)
                {
                    cout<<j+3<<"LB"<<endl;
                }
                else if( n==j+1)
                {
                    cout<<j+4<<"MB"<<endl;
                }
                else if( n==j+2)
                {
                    cout<<j+5<<"UB"<<endl;
                }
                 else  if( n==j+3)
                {
                    cout<<j<<"LB"<<endl;
                }
                else if( n==j+4)
                {
                    cout<<j+1<<"MB"<<endl;
                }
                else if( n==j+5)
                {
                    cout<<j+2<<"UB"<<endl;
                }
                else if( t==j+6)
                {
                    cout<<j+7<<"SU"<<endl;
                }
                 else if( n==j+7)
                {
                    cout<<j+6<<"SL"<<endl;
                }
            }
        }
        
    }
    return 0;
}
