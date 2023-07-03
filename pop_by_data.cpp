#include<iostream>
using namespace std;

class stack
{
    int* arr;
    int size;
    int top = -1;

    public:

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if(top == size -1)
        {
            cout<<"full"<<endl;
            return ;
        }

        top++;
        arr[top] = x;
    }

    void pop_data(int data)
    {
        if(top == -1)
        {
            cout<<"empty"<<endl;
            return;
        }

        int index = -1;

        for(int i = top;i>=0;i--)
        {
            if(arr[i] == data)
            {
                index = i;
                break;
            }    
        }

        int poped = arr[index];

        for(int i = index;i<top;i++)
        {
            arr[i] = arr[i+1];
        }

        top--;
        
        size--;
        cout<<"POPED DATA = "<<poped<<endl;
    }

    void print()
    {
        if(top == -1)
        {
            cout<<"empty"<<endl;
            return;
        }

        for(int i = top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int gettop()
    {
        return arr[top];
    }

    int getsize()
    {
        return size;
    }

};
 
int main()
{
    stack one(5);

    for(int i=1;i<=5;i++)
    {
        one.push(i);
    }

    one.print();

    int data;
    cout<<"ENTER DATA TO DELETE = ";
    cin>>data;

    one.pop_data(data);
    one.print();
    cout<<"TOP = "<<one.gettop()<<endl;
    cout<<"SIZE = "<<one.getsize()<<endl;
}