#include <bits/stdc++.h>
using namespace std;

void Printpattern1()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << 'x' << " ";
        }

        cout << endl;
    }
}
void Printpattern2()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "x" << " ";
        }
        cout << endl;
    }
}
void Printpattern3()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << 'x';
        }
        // spaces
        for (int j = 0; j < n - i - i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void Printpattern4()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << 'x';
        }
        // spaces
        for (int j = 0; j < n - i - i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << 'x';
        }
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void Printpattern5(int n)
{

    for (int i = 0; i < (2 * n - 1); i++)
    {
        int stars;
        if (i >= n)
            stars = 2 * n - i-1;
        else
            stars = i + 1;

        for (int j = 1; j <= stars; j++)
        {
            cout << 'x';
        }

        cout << endl;
    }
}
int main()
{
    int n =5;
    

    Printpattern5(n);
}
