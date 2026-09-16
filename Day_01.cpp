#include <iostream>
using namespace std;
void p(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << n - j;
        }
        cout << endl;
    }
}

void p2(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void p3(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
void p4(int n)
{
    int i, j = 1;
    int num = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
// *
// **
// ***
// ****
// *****

void p5(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;

    }
}
int main()
{
    // p(6);
    // p2(6);
    // p3(4);
    // p4(5);
    p5(5);
    cout << "Hello, World!" << endl;
    return 0;
}