#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    //int n ; cin>>n;
    int a[100001];
     // create boolean array
    bool prime[11+1];
    memset(prime, true ,sizeof(prime));
    
    for(int p=2;p*p<=100001;p++)
    {
        //  if prime[p] --> false  --> it is not prime
        if(prime[p]==true)
        {
            for(int i=p*p;i<=11;i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    
    // print prime numbers
    for(int j=2;j<=11;j++)
    {
        if(prime[j]==true)
            cout<<j<<endl;
    }
}
