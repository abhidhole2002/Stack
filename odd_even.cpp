#include<iostream>
#include<stack>
using namespace std;
 
#include <iostream>
#include <stack>

void odd_even(std::stack<int>& original)
{
    stack<int> even;
    stack<int> odd;

    while (!original.empty())
    {
        int num = original.top();
        original.pop();

        if (num % 2 == 0)
            even.push(num);
        else
            odd.push(num);
    }

    cout<<"Even stack = " ;
    while (!even.empty())
    {
        cout << even.top() << " ";
        even.pop();
    }

    cout<<endl;

    cout<<"Odd stack = " ;
    while (!odd.empty())
    {
        cout<<odd.top() << " ";
        odd.pop();
    }
}

int main()
{
    stack<int> one;

    one.push(10);
    one.push(11);
    one.push(12);
    one.push(13);
    one.push(14);
    one.push(15);

    stack<int> two = one;

    cout<<"MAIN STACK = ";
    while(!one.empty())
    {
        cout<<one.top()<<" ";
        one.pop();
    }

    cout<<endl;

    odd_even(two);

}
