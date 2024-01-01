#include <iostream>
using namespace std;

int main()
{
// //    Postive Neagtive or Zero
 int a;
 cout<<"Enter a number:";
 cin>>a;
 if(a>0){
    cout<<"Number is positive"<<endl ;  
 }
 else{
    if(a==0)
    {
        cout<<" This is Zero"<<endl;
    }
    else{
        cout<<"Number is negative"<<endl;
    }
 }

//  Upper Case and lower case
char ch;
cout<<"Enter a Character"<< endl;
cin>>ch;
if(ch >='A' && ch<='Z')
{
    cout<<"This is Upper case Character"<<endl;
}
else if(ch >='a' && ch<='z')
{
    cout<<"This is Lower case Character"<<endl;
}
else
{
    cout<<"This is not a Character"<<endl;
}

// Random Comaprison and assignment

int a=9;
if(a=10)
{
    cout<<"Ben";
}
else if(a==10){
    cout<<"You are Ben10"<<endl;

}
 cout<<a++<<endl;


}