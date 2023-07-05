#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &input)
{
    stack<int> temp = input;
    while(!temp.empty())
    {    
        int ele = temp.top();
        cout<<ele<<" ";
        temp.pop();
    }
}

void reverse(stack<int> &input)
{
    stack<int> temp;

    while(!input.empty())
    {
        int ele = input.top();
        temp.push(ele);
        input.pop();
    }

    input = temp;
}


int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    st.pop();
    st.pop();

    int size = st.size();
    
    stack<int> temp;
    temp = st;

    while(!temp.empty())
    {
        
        int ele = temp.top();
        cout<<ele<<" ";

        temp.pop();
    }

    cout<<endl;

    print(st);
    
    cout<<endl<<"SIZE = "<<size<<endl;
    cout<<"TOP = "<<st.top()<<endl;

    reverse(st);
    
    cout<<endl;

    print(st);

    cout<<endl<<"TOP = "<<st.top()<<endl;

} 