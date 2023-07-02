#include<iostream>
#include<string>
using namespace std;

class stack
{
    string* arr;
    int size;
    int top;

public:

    stack(int size)
    {
        this->size = size;
        arr = new string[size];
        top = -1;
    }

    ~stack()
    {
        delete[] arr;
    }

    void push(string x)
    {
        if (top == size - 1)
        {
            cout << "The max size is " << size << ". " << x << " can't be added." << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    string pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return "";
        }

        string del = arr[top];
        top--;

        return del;
    }

    string gettop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return "";
        }

        return arr[top];
    }

    bool isempty()
    {
        return top == -1;
    }

    bool isfull()
    {
        return top == size - 1;
    }

    void print()
    {
        int vacant = size - top - 1;
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl << vacant << " positions are vacant." << endl;
    }
};


int main()
{
    int s;
    cout << "Size of stack? ";
    cin >> s;

    int ele;
    cout << "How many elements do you want to add? = ";
    cin >> ele;
    if (s < ele)
    {
        cout << "You can't add " << ele << " elements because the max size of the stack is " << s << endl;
        return -1;
    }

    string* arr;
    arr = new string[s];

    cout << "Enter " << ele << " elements in stack: ";
    for (int i = 0; i < ele; i++)
    {
        cin >> arr[i];
    }

    stack stk(s);

    for (int i = 0; i < ele; i++)
    {
        stk.push(arr[i]);
    }

    stk.print();
    cout << endl;
    cout << "The popped element is " << stk.pop() << " & " << stk.pop() << endl;

    stk.print();
    cout << endl << stk.gettop() << endl;
    cout << "Is stack empty? " << (stk.isempty() ? "yes" : "no") << endl;
    cout << "Is stack full? " << (stk.isfull() ? "yes" : "no") << endl;

    delete[] arr;

    return 0;
}
