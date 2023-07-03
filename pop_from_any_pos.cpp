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

    void push(int x)
    {
        if(top == size-1)
        {
            cout<<"full";
            return;
        }

        arr[++top] = x;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"empty"<<endl;
            return -1;
        }

        top--;
        size--;
        return (arr[top+1]);
    }

    int pop1(int pos)
    {
        if(pos<0 || pos>top)
        {
            cout<<"INVALID "<<endl;
            return -1;
        }

        int poped = arr[pos];
        for(int i = pos;i<top;i++)
        {
            arr[i] = arr[i+1];
        }

        top--;
        size--;
        return poped;

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

    int getsize()
    {
        return size;
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

    cout<<endl<<one.pop()<<endl;
    cout<<endl<<one.pop1(0)<<endl;
  
    cout<<"STACK = ";
    one.print();
    cout<<endl<<"NOW UPDATED SIZE = "<<one.getsize()<<endl;
 


}