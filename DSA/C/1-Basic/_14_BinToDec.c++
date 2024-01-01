#include<iostream>
#include<math.h>
using namespace std;


void BinToDec(int n)
{
    int ans=0,i=0;
    while(n!=0)
    {
        int digit = n%10;
        ans = ans+pow(2,i)*digit;
        n= n/10;
        i++;
    }

    cout<<ans<<endl;
}
int main(void)
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    BinToDec(n);

  
}