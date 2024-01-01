#include <iostream>
#include <math.h>
using namespace std;

// power
int Power(int a, int b)
{
    int i = 1, ans = 1;
    while (i <= b)
    {
        ans = ans * a;
        i++;
    }
    return ans;
}
// nCr
// Factorial
int Factorial(int n)
{
    int i = 1, ans = 1;
    while (i <= n)
    {
        ans = ans * i;
        i++;
    }
    return ans;
}
int nCr(int n, int c)
{
    int ans;
    // n!/(n-r)!*r!
    ans = Factorial(n) / (Factorial(n - c) * Factorial(c));

    return ans;
}
int Calculator(int a, int b, char c)
{

    switch (c)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;
    case '%':
        return a % b;
        break;
    case '<<':
        return a << b;
        break;
    case '>>':
        return a >> b;
        break;
    case '&':
        return a & b;
        break;
    case '|':
        return a | b;
        break;
    default:
        break;
    }
}
int main(void)
{
    int n, i, a;
    char c;
    cout << "enter a:" << endl;
    cin >> n;
    cout << "enter b:" << endl;
    cin >> i;
    cout << "enter opertor:" << endl;
    cin >> c;
    // a= Power(n,i);
    // a = nCr(n, i);
    // a = Calculator(n, i, c);
    cout << a << endl;
}