using namespace std;
#include <iostream>
#include <string>
#include <stack>

int main()
{
    stack<int> st;
    string str = "(())))(";
    int i = 1;
    int count = 1;
    bool flag = false;
    st.push(str[0]);
    while (!st.empty())
    {
        if (str[i] == '(')
        {
            count++;
            st.push(str[i]);
            i++;
        }
        else if (str[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
                count++;
                i++;
            }
            else
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }
    return 0;
}