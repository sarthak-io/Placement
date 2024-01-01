#include<iostream>
#include<math.h>
using namespace std;

void PrintSame(int n)
{
    int a,i=0,ans=0;
    while(n!=0)
    {
        a= n%10;
        n= n/10;
        ans= ans+(pow(10,i)*a);
        i++;
        
    }
    cout<<ans<<endl;
}
void PrintReverse(int n)
{
    int a,i=0,ans=0;
    while(n!=0)
    {
        a= n%10;
        n= n/10;
        ans= ans*10+a;
        i++;
        
    }
    cout<<ans<<endl;
}
int main(void)
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    PrintSame(n);
    // PrintReverse(n);
}