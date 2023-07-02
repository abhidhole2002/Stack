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
            cout<<"The max size is "<<size<<" now "<<x<<" can't be added "<<endl;
            return;
        }

        int* newele = new int(x);
        //*newele = x;
        top++;
        arr[top] = *newele;
        delete newele;
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
        int space = size - top - 1;
        for(int i = 0; i <= top; i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl<<space<<" is vacant "<<endl;
    }
};


int main()
{
    

    int s;
    cout<<"Size of stack ? ";
    cin>>s;

    int ele;
    cout<<"how may ele you want to add ?  = ";
    cin>>ele;
    if(s<ele)
    {
        cout<<"You cant add "<<ele<<" elemnt because max size of stack is "<<s<<endl;
        return -1 ;
    }
    

    int* arr;
    arr = new int[s];

    cout<<"Enter "<<ele<<" elements in stack  = ";
    for(int i=0;i<ele;i++)
    {
        cin>>arr[i];
    }

    stack stk(s);

    for(int i = 0;i<ele;i++)
    {
        stk.push(arr[i]);
    }

    stk.print();
    cout<<endl;
    cout<<"The popped element is "<<stk.pop()<<" & "<<stk.pop()<<endl;

    
    stk.print();
    cout<<endl<<stk.gettop()<<endl;
    cout<<"stack empty? "<<(stk.isempty() ? "yes":"no")<<endl;
    cout<<"stack full? "<<(stk.isfull() ? "yes":"no")<<endl;

    delete[] arr;
    
    return 0;
}
