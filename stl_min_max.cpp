#include<iostream>
#include<stack>
using namespace std;

void min_max(stack<int> ip)
{
    stack<int> temp = ip;
    int max = 0;

    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();

        if(curr > max)
        {
            max = curr;
        }
    }

    int min = max;

    while(!ip.empty())
    {
        int curr = ip.top();
        ip.pop();

        if(curr < min)
        {
            min = curr;
        }
    }

    cout<<"MAX = "<<max<<endl;
    cout<<"MIN = "<<min<<endl;
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
    st.push(12);
    st.push(13);
    st.push(14);

    stack<int> copy = st;

    cout<<"ORIGINAL STACK = ";
    while(!copy.empty())
    {
        cout<<copy.top()<<" ";
        copy.pop();
    }
    cout<<endl;

    min_max(st);

 
 
}