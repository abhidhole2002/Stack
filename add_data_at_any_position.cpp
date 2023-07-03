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


    void push_at_any_pos(int pos,int x)
    {
        size++;
        if(pos<0)
        {
            cout<<"INVALID"<<endl;
            return;
        }

        if(top == size-1)
        {
            cout<<"FULL"<<endl;
            return;
        }

        for(int i = top;i>=pos;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        top++;
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
    one.push_at_any_pos(5,100);

    cout<<"STACK = ";
    one.print();
    cout<<endl<<"NOW UPDATED SIZE = "<<one.getsize()<<endl;
 
 
}