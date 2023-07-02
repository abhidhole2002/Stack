#include<iostream>
using namespace std;

class stack
{
    int* arr;
    int size;
    int top;

    public:

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~stack()
    {
        delete[] arr;
    }

    void push(int x)
    {
        if(top == size-1)
        {
            cout<<"The max size is "<<size<<" now "<<x<<" cant be added "<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"stack is empty ";
            return -1;
        }

        int del = arr[top];
        top--;
        

        delete &arr[top+1];
        return del;

    }

    int gettop()
    {
        if(top == -1)
        {
            cout<<"size is empty ";
            return -1;
        }

        return arr[top];
    }

    bool isempty()
    {
        return top == -1;
    }

    bool isfull()
    {
        return top == size-1;
    }

    void print()
    {
        int space = size -top -1;
        for(int i = 0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl<<space<<" is vaccant "<<endl;
    }
};


int main()
{
    int s;
    cout<<"enter size ";
    cin>>s;
    stack stk(s);
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(15);
    stk.print();
    cout<<endl;
    cout<<"The poped element is "<<stk.pop()<<" & "<<stk.pop()<<endl;
    
    stk.print();
    cout<<endl<<stk.gettop()<<endl;
    cout<<"stack empty ? "<<(stk.isempty() ? "yes":"no")<<endl;
    cout<<"stack full ? "<<(stk.isfull() ? "yes":"no")<<endl;
    
}