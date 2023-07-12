#include<iostream>
#include<stack>
using namespace std;

void add_at_ant_pos(stack<int> &ip,int position,int data)
{
    stack<int> temp;

    if(position>ip.size()+1)
    {
        cout<<"INVALID position "<<endl;
        return;
    }

    for(int i=0;i<position-1;i++)
    {
        temp.push(ip.top());
        ip.pop();
    }

    ip.push(data);

    while(!temp.empty())
    {
        ip.push(temp.top());
        temp.pop();
    }
}
 
int main()
{

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    add_at_ant_pos(st,6,1000);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
 
}