// To cheak number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int number,reverse=0,temp,temp1;
    cout << "Enter a number:";
    cin >> number;
    temp1 = number;
    while (temp1 > 0)
    {
        temp = temp1 % 10;
        reverse = (reverse * 10) + temp;
        temp1 = temp1 / 10;
    }
    if(number==reverse)
    {
        cout << "Reverse of number is:" << reverse <<endl;
        cout << number << " is a palindrome number";
    }
    else
    {
        cout << number << "is not palindrome number";
    }
    return 0;
}