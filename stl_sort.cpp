#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int> &st)
{
    stack<int> temp;

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();

        while (!temp.empty() && temp.top() < curr)
        {
            st.push(temp.top());
            temp.pop();
        }

        temp.push(curr);
    }

    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
 
int main()
{
    stack<int> st;

    st.push(10);
    st.push(100);
    st.push(1001);
    st.push(1050);
    st.push(1);
    st.push(11);

    stack<int> copy = st;

    cout<<"SORTED STACK = ";

    sortStack(copy);
    while(!copy.empty())
    {
        cout<<copy.top()<<" ";
        copy.pop();
    }
    cout<<endl;

 
 
}