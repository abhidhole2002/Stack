#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    int size;
    cout<<"Enter size of stack = ";
    cin>>size;

    int a[size];

    cout<<"Enter "<<size<<" elements in stack = ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<size;i++)
    {
        st.push(a[i]);
    }
    
    int pop;
    cout<<"How may times you want to pop ? ";
    cin>>pop;
    for(int i=0;i<pop;i++)
    {
        cout<<st.top()<<" is popped "<<endl;
        st.pop();
        size--;
    }
    
    stack<int> temp;
    temp = st;

    while(!temp.empty())
    { 
        int ele = temp.top();
        cout<<ele<<" ";
        temp.pop();
    }
    
    cout<<endl<<"SIZE = "<<size<<endl;
    cout<<"TOP = "<<st.top()<<endl;
    cout<<"is stack empty ?"<<(st.empty()?"yes" : "No")<<endl;

} 