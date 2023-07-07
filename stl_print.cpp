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

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    stack<int> copy = st;

    print(st);

} 