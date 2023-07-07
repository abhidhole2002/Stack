#include<iostream>
#include<stack>
using namespace std;

void add_at_bottom(stack<int> &ip,int num)
{
    stack<int> temp;

    while(!ip.empty())
    {
        temp.push(ip.top());
        ip.pop();
    }

    if(ip.empty())
    {
        ip.push(num);
    }

    while(!temp.empty())
    {
        ip.push(temp.top());
        temp.pop();
    }
}
 
int main()
{
    stack<int> st;

    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
 
    stack<int> copy = st;

    add_at_bottom(st,1000);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
 
}