#include<iostream>
using namespace std;
class Stack{
    int top;
    int arr[5];
    public:
    Stack(){
        top = -1;
        int i;
        for (i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
        
            return false;
        
    }
    bool isfull(){
        if(top==4)
            return true;
        else
            return false;
    }
    int push(int val){
        if(top==4)
            cout << "Stack overflow";
        else
        {
            top++;
            arr[top] = val;

        }
        return 0;
    }
    int pop(){
        if(isEmpty())
        {   cout << "Stack is underflow";
            return 0;
        }

        else
        {  
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int count(){
        return (top + 1);
    }
    int peek(int pos){
        return arr[pos];
    }
    int change(int pos,int val){
        arr[pos] = val;
        cout << "Value is change at " << pos << endl;
        return 0;
    }
    int Display(){
        int i;
        if (top == -1)
            cout << "Stack is Empty";
        else
        {
            cout << "All the value in stack are" << endl;
            for (i = 0; i < 5; i++)
            {   
                cout << arr[i] << ","<<endl;
            }
        }
        return 0;
        }
};
int main(){
    Stack o1;
    int position, value, option;
    do
    {
        cout << "What operation you want to perform ? Enter option and Enter 0 to exit " << endl;
        cout << "1.Push" << endl;
        cout << "2.pop" << endl;
        cout << "3.isempty" << endl;
        cout << "4.isfull" << endl;
        cout << "5.count" << endl;
        cout << "6.peek" << endl;
        cout << "7.change" << endl;
        cout << "8.display" << endl;
        cin >> option;
    switch (option)
    {case 1:
        cin >> value;
        o1.push(value);
        break;
    case 2:
        value=o1.pop();
        cout << value << " is pop out from stack";
        break;
    case 8:
        o1.Display();
        break;

    default:
        break;
    }

    } while (option != 0);
   
}