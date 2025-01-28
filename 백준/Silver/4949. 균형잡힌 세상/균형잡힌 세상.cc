#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    while (1) {
        char str[101];
        cin.getline(str, 101);

        char stack[101] = { '0' };
        int top = -1;


        if (str[0] == '.') {
            break;
            return 0;
        }

        int flag = -1;

        for (int i = 0; i < 101; i++) {
            if (str[i] == '.') break;
            if (str[i] == '(' || str[i] == '[') {
                stack[++top] = str[i];
                flag = 1;
            }
            if (str[i] == ')') {
                if (stack[top] == '(') {
                    top--;
                }
                else {
                    flag = 0;
                    break;
                }
            }
            if (str[i] == ']') {
                if (stack[top] == '[') {
                    top--;
                }
                else {
                    flag = 0;
                    break;
                }
            }
        }

        if (top == -1) {
            if (flag == 0) {
                cout << "no" << '\n';
            }
            else {
                cout << "yes" << '\n';
            }
        }
        else {
            if (flag == 0) {
                cout << "no" << '\n';
            }
            if (flag == 1) {
                cout << "no" << '\n';
            }
            if (flag == -1) {
                cout << "yes" << '\n';
            }
        }


    }


    return 0;

}