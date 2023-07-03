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
        if(top == size)
        {
            cout<<"FULL"<<endl;
            return;
        }

        int* data = new int();
        *data = x;
        top++;
        arr[top] = *data;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"NULL";
            return -1;
        }

        int del = arr[top];
        top--;
        return del;
    }

    void print()
    {
        if(top == -1)
        {
            cout<<"EMPTY";
            return;
        }
        for(int i = top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }

    int gettop()
    {
        return arr[top];
    }

   stack copy()
   {
        stack newstack(size);
        stack temp(size);

        int s = top;

        for(int i = top;i>=0;i--)
        {
            temp.push(arr[i]);
        }

        for(int i = 0;i<=s;i++)
        {
            int item = temp.pop();
            newstack.push(item);
        }
        return newstack;
   }

};
 
int main()
{
    int size;
    cout<<"Enter size of stack ";cin>>size;

    stack one(size);

    int* arr;
    arr = new int[size];

    cout<<"enter "<<size<<" element is stack ";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++)
    {
        one.push(arr[i]);
    }

    cout<<"ORIGINAL STACK = ";
    one.print();

    cout<<endl;

    stack newstack = one.copy();
    cout<<"COPY OF ORIGINAL STACK = ";
    newstack.print();
    cout<<endl;
    cout<<"TOP OF ORIGINAL STACK = "<<one.gettop()<<endl<<"TOP OF COPIED STACK = "<<newstack.gettop()<<endl;

    delete[] arr;
 
}