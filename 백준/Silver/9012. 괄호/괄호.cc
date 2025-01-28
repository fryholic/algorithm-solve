#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstring>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;

    cin >> N;

    

    while(N--) {
        char str[51];
        cin >> str;

        char stack[51];
        int top = -1;

        int len = strlen(str);
        bool flag = true;

        for (int j = 0; j < len; j++) {
            if (str[j] == '(') {
                stack[++top] = str[j];
            }
            if (str[j] == ')') {
                if (top == -1 || stack[top] != '(') {
                    cout << "NO" << '\n';
                    flag = false;
                    break;
                }
                if (stack[top] == '(') {
                    top--;
                }
            }
        }

        if (flag) {
            if (top == -1) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }

    // )(()()))()((((()))(((())(())(())()(())(()()())(())((()))(()))))))(((()))()(((()())


    return 0;

}