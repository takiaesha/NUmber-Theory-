///Show fibonacci number and summation till that number
///O(n)
#include<bits/stdc++.h>
#define mod 1e7
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n+3];
    a[0] = 0;
    a[1] = 1;


    for(int i=2; i<n; i++){
        a[i] = a[i-2]+a[i-1];
        //a[i] = a[i]%mod;
    }

    cout<<"Fibonacci numbers from 0 to "<<n<<" are:\n";
    int sum =0;
    for(int i=0; i<n; i++){
        cout<< a[i] <<"  ";
        sum += a[i];
    }
    cout<<"\n";

    cout<<"Summation is = "<< sum << endl;
    return 0;
}


