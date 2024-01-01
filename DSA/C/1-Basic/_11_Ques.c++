#include <iostream>
using namespace std;

// Q1 add and product of digts of a number
void ADD_Product(int n)
{
    int a, c = 0, d = 1;
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        c = a + c;
        d = a * d;
    }
    cout << c << endl;
    cout << d << endl;
}

// Q2 Number of 1 bits in a number
void Number_of_1bit(int n)
{
    int c = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            c++;
        }
        n = n >> 1;
    }
    cout << c << endl;
}

// Q3 Reverse the number
void ReverseNumber(int n)
{
    int a, c = 0, d = 1;
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        c = c * 10 + a;
    }
    cout << c << endl;
}

// Q4 Compliment of base10
void Compliment10(int n)
{
    int m = 0, i;

    int r = n;
    while (r != 0)
    {
        m = m << 1;
        m = m | 1;

        r = r >> 1;
    }

    i = ~n & m;

    printf("%d", i);
}

int main()
{
    int a;
    cout << "Enter number:";
    cin >> a;
    // ADD_Product(a);
    // Number_of_1bit(a);
    // ReverseNumber(a);
    // Compliment10(a);
}