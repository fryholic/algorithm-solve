#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>

using namespace std;

deque<int> parseArray(const string& arr, int n)
{
    deque<int> result;
    string num;
    for (char c : arr)
    {
        if(isdigit(c))
        {
            num.push_back(c);
        }
        else if(c == ',')
        {
            if(!num.empty())
            {
                result.push_back(stoi(num));
                num.clear();
            }
        }
    }

    if(!num.empty())
    {
        result.push_back(stoi(num));
        num.clear();
    }
    return result;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;

    cin >> T;

    while(T--)
    {
        string p;
        cin >> p;

        int n;
        cin >> n;

        string arr;
        cin >> arr;

        deque<int> array = parseArray(arr, n);

        bool isReversed = false;
        bool error = false;

        for(char cmd : p)
        {
            if(cmd == 'R')
            {
                isReversed = !isReversed;
            }
            else // D 일 때
            {
                if(array.empty())
                {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                else
                {
                    if(isReversed)
                    {
                        array.pop_back();
                    }
                    else
                    {
                        array.pop_front();
                    }
                }
            }
        }
        if(!error)
        {
            if(!array.empty())
            {
                if(isReversed)
                {
                    reverse(array.begin(), array.end());
                }
                cout << "[";
                for(int i = 0; i < array.size(); i++)
                {
                    if(i != array.size() - 1)
                    {
                        cout << array[i] << ',';
                    }
                    else
                    {
                        cout << array[i];
                    }
                }
                cout << "]" << '\n';
            }
            else
            {
                cout << "[]" << '\n';
            }
        }
       
    }

    return 0;
}