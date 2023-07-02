#include<iostream>
using namespace std;

class stack
{
    int* arr;
    int size;
    int top1;
    int top2;

    public:

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    ~stack()
    {
        delete[] arr;
    }

    void push1(int x)
    {
        if(top1+1 == top2)
        {
            cout<<"stack 1 overflow ";
            return;
        }

        top1++;
        int* new_ele = new int(x);
        arr[top1] = *new_ele;

        delete new_ele;
    }

    void push2(int x)
    {
        if(top2-1 == top1)
        {
            cout<<"stack 2 overflow ";
            return;
        }

        top2--;
        int* new_ele = new int(x);
        arr[top2] = *new_ele;

        delete new_ele;
    }


    void pop1()
    {
        if (top1 == -1)
        {
            cout << "stack 1 is empty" << endl;
            return;
        }
        int del = arr[top1];
        top1--;
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "stack 2 is empty" << endl;
            return;
        }

        int del = arr[top2];
        top2++;
    }


    void print1()
    {
        if(top1 == -1)
        {
            cout<<"stack 1 is empty "<<endl;
            return;
        }

        for(int i = 0;i<=top1;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }


    void print2()
    {
        if(top2 == size)
        {
            cout<<"stack 2 is empty "<<endl;
            return;
        }

        for(int i = size-1;i>=top2;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

   void space()
    {
        int s = size - (top1 + 1) - (size - top2);
        cout << "total empty space  = " << s;
    }

    void gettop1()
    {
        if(top1 == -1)
        {
            cout<<"stack 1 is empty ";
            return;
        }

        cout<<arr[top1]<<endl;
    }

    void gettop2()
    {
        if(top2 == size)
        {
            cout<<"stack 2 is empty ";
            return;
        }

        cout<<arr[top2]<<endl;
    }

};

 
int main()
{
    int stack_size;
    cout<<"Enter size of stack = ";cin>>stack_size;

    int arr[stack_size];


    int s1,s2;
    cout<<"make sure that tolal element in stack 1 and stack1 should less or equal to ) "<<stack_size;
    cout<<endl<<"How many eleement you wnat to entr in stack 1 ? ";
    cin>>s1;
    cout<<endl<<"How many eleement you wnat to entr in stack 2 ? ";
    cin>>s2;
    

    if(stack_size < s1+s2)
    {
        cout<<"You cant add "<<s1+s2<<" elemnt because max size of stack is "<<stack_size<<endl;
        return -1 ;
    }
    
    stack one(stack_size);


    cout<<"enter "<<s1<<" element in stack 1 ";
    for(int i = 0;i<s1;i++)
    {
        cin>>arr[i];
    }

     cout<<"enter "<<s2<<" element in stack 2 ";
    for(int i = s1;i<s1+s2;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<s1;i++)
    {
        one.push1(arr[i]);
    }

    one.pop1();
    cout<<endl;

    one.print1();
    cout<<endl;


    for(int j = s1;j<s2+s1;j++)
    {
        one.push2(arr[j]);
    }

    one.pop2();

    one.print2();
    cout<<endl;

    cout<<"TOP OF STACK 1 = ";
    one.gettop1();
    cout<<endl<<"TOP OF STACK 2 = ";
    one.gettop2();

    one.space();

}
