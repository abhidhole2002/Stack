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

    void removeMiddle()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return;
        }

        int mid = top / 2;
        int removed = arr[mid];
        for (int i = mid; i < top; i++)
        {
            arr[i] = arr[i + 1];
        }
        top--;
        cout<<"MIIDLE OF STACK = "<<removed<<endl;
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

    cout<<"STACK = ";
    one.print();
    cout<<endl;

    one.removeMiddle();
    cout<<endl<<"AFTER REMOVING MIDDLE = ";
    one.print();

    cout<<endl<<"TOP OF STACK = "<<one.gettop()<<endl;
    //cout<<endl<<"MIDDLE OF STACK IS "<<one.middle()<<endl;


    delete[] arr;
 
}