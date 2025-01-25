#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        stack<string> st;

        for (int i = pre_exp.length() - 1; i >= 0; i--)
        {

            if (isalnum(pre_exp[i]))
            {
                st.push(string(1, pre_exp[i]));
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();

                string new_exp = "(" + op1 + pre_exp[i] + op2 + ")";

                st.push(new_exp);
            }
        }

        return st.top();
    }
};

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        cout << "~" << "\n";
    }

    return 0;
}
