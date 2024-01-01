#include <iostream>
using namespace std;

int main()
{

    // // Print 1 To n
    int a, i = 1;
    cout << "Enter number:";
    cin >> a;

    while (i <= a)
    {
        cout << i << endl;
        i++;
    }

    //Sum of 1 To n
    int b,sum=0,j=1;
      cout << "Enter number:";
    cin >> b;
    while(j<=b)
    {
       sum = sum+j;
       j++; 
    }
    cout<<sum<<endl;

    //Prime or not 
    int i=2,d,h;
    cout<<"Enter a number:";
    cin>>d;
    while (i<d)
    {
        if(d%i ==0)
        {
            h=0;
            break;
        }
      
       i++;

    }
     if(h==0){
        cout<<"This is not a prime number!"<<endl;
       }
       else{
        cout<<"This is a prime number!"<<endl;
       }
    
}