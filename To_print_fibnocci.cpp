#include<iostream>
using namespace std;
int fibnocci(int n)
{
    if(n<=1)
    {
        return (n);
    }
    else
    {
        return (fibnocci(n - 2) + fibnocci(n - 1));
    }
}
int main()
{
    int n,i=0;
    cout << "Enter no where you want to end the series..! ";
    cin >> n;
    cout << "Fibnocci series is :";
    while (i < n)
    {
        cout << fibnocci(i) << ",";
        i++;
    }
    return 0;
}