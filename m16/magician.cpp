#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        int m;
        cin >> m;
        cin.ignore();
        string s;
        cin >> s;

        if (m % 2 == 0)
        {
            for (int j = 0; j < m - 1; j += 2)
            {
                // R + B or B + R
                if ((s[j] == 'R' && s[j + 1] == 'B') || (s[j] == 'B' && s[j + 1] == 'R'))
                {
                    if (st.empty())
                    {
                        st.push('P');
                    }
                    else
                    {
                        if (st.top() == 'P')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('P');
                        }
                    }
                }

                // R + G or G + R
                if ((s[j] == 'R' && s[j + 1] == 'G') || (s[j] == 'G' && s[j + 1] == 'R'))
                {
                    if (st.empty())
                    {
                        st.push('Y');
                    }
                    else
                    {
                        if (st.top() == 'Y')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('Y');
                        }
                    }
                }

                // B + G or G + B
                if ((s[j] == 'B' && s[j + 1] == 'G') || (s[j] == 'G' && s[j + 1] == 'B'))
                {
                    if (st.empty())
                    {
                        st.push('C');
                    }
                    else
                    {
                        if (st.top() == 'C')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('C');
                        }
                    }
                }
            }
        }
        else
        {
            for (int j = 0; j < m - 1; j += 2)
            {
                // R + B or B + R
                if ((s[j] == 'R' && s[j + 1] == 'B') || (s[j] == 'B' && s[j + 1] == 'R'))
                {
                    if (st.empty())
                    {
                        st.push('P');
                    }
                    else
                    {
                        if (st.top() == 'P')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('P');
                        }
                    }
                }

                // R + G or G + R
                if ((s[j] == 'R' && s[j + 1] == 'G') || (s[j] == 'G' && s[j + 1] == 'R'))
                {
                    if (st.empty())
                    {
                        st.push('Y');
                    }
                    else
                    {
                        if (st.top() == 'Y')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('Y');
                        }
                    }
                }

                // B + G or G + B
                if ((s[j] == 'B' && s[j + 1] == 'G') || (s[j] == 'G' && s[j + 1] == 'B'))
                {
                    if (st.empty())
                    {
                        st.push('C');
                    }
                    else
                    {
                        if (st.top() == 'C')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('C');
                        }
                    }
                }
            }
            st.push(s[m-1]);
        }

        // reverse and print
        stack<char> st1;
        while (!st.empty())
        {
            st1.push(st.top());
            st.pop();
        }
        while(!st1.empty())
        {
            cout << st1.top();
            st1.pop();
        }
        cout << endl;
    }
    return 0;
}