#include <iostream>
using namespace std;

void PrintNumber(int n)
{
    int i = 1;
    for (i; i <= n; i++)
    {
        cout << i << endl;
    }
}

void PrintFibonaciNumber(int n)
{
    int i = 1, a = 0, b = 1, sum;
    cout << a << endl;
    cout << b << endl;

    for (i; i <= n; i++)
    {

        sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }
}

void PrintPrimeNumber(int n)
{
    int i = 2, h;
    for (i; i < n; i++)
    {

        if (n % i == 0)
        {
            h = 0;

            break;
        }
    }
    if (h == 0)
    {
        cout << "this is not a prime number" << endl;
    }
    else{
      cout << "this is a prime number" << endl;
    }
}
int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;
    //    PrintNumber(a);
    // PrintFibonaciNumber(a);
    // PrintPrimeNumber(a);
}