#include <iostream>
using namespace std;
// SquarePattern
void fullMatrixStar(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// NumberPatternRowWise
void NumberPatternRowWise(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// NumberPatternColumnWise
void NumberPatterncolumnWise(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// NumberPattern1tonnWise
void NumberPattern1tonnWise(int n)
{
    int i = 1, var = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {

            cout << var << " ";
            var = var + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
// ReverseNumberPattern1tonnWise
void ReverseNumberPattern1tonnWise(int n)
{
    int i = 1, var = n * n;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {

            cout << var << " ";
            var = var - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
// UpperRightTriangleStarPattern
void UpperRightTriangleStarPattern(int n)
{
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {

            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// UpperRightTriangleNumberRowWisePattern
void UpperRightTriangleNumberRowWisePattern(int n)
{
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {

            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// UpperRightTriangleNumberRowWisePattern
void UpperRightTriangleNumber1tonnPattern(int n)
{
    int i = 1, var = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {

            cout << var << " ";
            var = var + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
// UpperRightTriangleNumberRowWisePattern
void UpperRightTriangleReverseNumerRowWisePattern(int n)
{
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {

            cout << i - j + 1 << " ";

            j++;
        }
        cout << endl;
        i++;
    }
}
// CharacterMatrixRowWise
void CharacterMatrixRowWise(int n)
{
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {

            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch = ch + 1;
        i++;
    }
}
// CharacterMatrixColumnWise
void CharacterMatrixColumnWise(int n)
{
    int i = 1;

    while (i <= n)
    {

        int j = 1;
        char ch = 'A';
        while (j <= n)
        {

            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;

        i++;
    }
}
// CharacterMatrixRandom
void CharacterMatrixRandom(int n)
{
    int i = 1;

    while (i <= n)
    {

        int j = 1;
        char ch = 'A';
        ch = ch + i - 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }

        cout << endl;

        i++;
    }
}
// UpperRightTriangleCharacterRowWise
void UpperRightTriangleCharacterRowWise(int n)
{
    int i = 1;
    char ch = 'A';

    while (i <= n)
    {

        int j = 1;

        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        cout << endl;
        i++;
    }
}
// UpperRightTriangleCharacterAtoZ
void UpperRightTriangleCharacterAtoZ(int n)
{
    int i = 1;
    char ch = 'A';

    while (i <= n)
    {

        int j = 1;

        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }

        cout << endl;
        i++;
    }
}
// UpperRightTriangleCharacterRowWiseIncreasing
void UpperRightTriangleCharacterRowWiseIncreasing(int n)
{
    int i = 1;

    while (i <= n)
    {

        int j = 1;
        char ch = 'A' + i - 1;

        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
// UpperRightTriangleCharacterRowWiseDecreasing
void UpperRightTriangleCharacterRowWiseDecreasing(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;

        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
// UpperLeftTriangleStarPattern
void UpperLeftTriangleStarPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
// LowerLeftTriangleStarPattern
void LowerLeftTriangleStarPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= i)
        {
            cout << " ";
            k++;
        }
        int j = 0;
        while (j <= n - i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
// LowerRightTriangleStarPattern
void LowerRightTriangleStarPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i + 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
}
// UpperLeftTriangleNumberPattern
void UpperLeftTriangleNumberPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        int j = 1, var = i;
        while (j <= i)
        {
            cout << var;
            var = var + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
// TriangleNumberPattern
void TriangleNumberPattern(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int l = 1;
        int var = i;
        while (l <= i)
        {
            if (i == 1)
            {
                cout << "";
                l++;
            }
            else
            {
                cout << var;
                var = var - 1;
                l++;
            }
        }

        cout << endl;
        i++;
    }
}
// HomeWork
void Homework(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i + 1)
        {
            cout << k;
            k++;
        }
        int j = 2;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        int l = 1;
        while (l < i)
        {

            cout << "*";
            l++;
        }
        int m = 1,var=n+1-i;
        while (m <= n - i+1)
        {
            cout << var;
            var = var-1;
            m++;
        }

        cout << endl;
        i++;
    }
}

int main()
{

    int n;
    cout << "Enter The number:";
    cin >> n;
    // fullMatrixStar(n);
    // NumberPatternRowWise(n);
    // NumberPatterncolumnWise(n);
    // NumberPattern1tonnWise(n);
    // ReverseNumberPattern1tonnWise(n);
    // UpperRightTriangleStarPatterLeft
    // UpperRightTriangleNumberRowWisePattern(n);
    // UpperRightTriangleNumber1tonnPattern(n);
    // UpperRightTriangleReverseNumerRowWisePattern(n);
    // CharacterMatrixRowWise(n);
    // CharacterMatrixColumnWise(n);
    // CharacterMatrixAtoZWise(n);
    // CharacterMatrixRandom(n);
    // UpperRightTriangleCharacterRowWise(n);
    // UpperRightTriangleCharacterAtoZ(n);
    // UpperRightTriangleCharacterRowWiseIncreasing(n);
    // UpperRightTriangleCharacterRowWiseDecreasing(n);
    // UpperLeftTriangleStarPattern(n);
    // LowerLeftTriangleStarPattern(n);
    // LowerRightTriangleStarPattern(n);
    // UpperLeftTriangleNumberPattern(n);
    // TriangleNumberPattern(n);
    // Homework(n);
}