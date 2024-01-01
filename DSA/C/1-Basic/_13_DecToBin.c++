#include<iostream>
#include<math.h>
using namespace std;


void DecToBin(int n)
{
    int ans=0,i=0;
    while(n!=0)
    {
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n= n>>1;
        i++;
    }

    cout<<ans<<endl;
}
int main(void)
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    DecToBin(n);

  
}