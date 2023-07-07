#include<iostream>
#include<stack>
using namespace std;

int find_delete_mid(stack<int> &ip)
{
    stack<int> temp;
    int size = ip.size();
    int mid = size/2;

    for(int i = 0;i<mid;i++)
    {
        temp.push(ip.top());
        ip.pop();
    }

    int data = ip.top();
    ip.pop();

    while(!temp.empty())
    {
        ip.push(temp.top());
        temp.pop();
    }

    return data;
}
 
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    
    stack<int> copy = st;

    cout<<"MID = "<<find_delete_mid(st)<<endl;

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
 
}