#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int top_index = -1;

int arr[10001];

void push(int n) {
    top_index++;
    arr[top_index] = n;
}

int pop() {
    if (top_index == -1) {
        return -1;
    }
    if (top_index != -1) {
        return arr[top_index--];
    }
}

int size() {
    return top_index + 1;
}

int empty() {
    if (top_index == -1) {
        return 1;
    }
    if (top_index != -1) {
        return 0;
    }
}

int top() {
    if (top_index == -1) {
        return -1;
    }
    if (top_index != -1) {
        return arr[top_index];
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    

    int N;
    cin >> N;

    string s;

    while (N--) {
        cin >> s;
        if (s == "push") {
            int temp;
            cin >> temp;
            push(temp);
        }
        if (s == "pop") {
            cout << pop() << '\n';
        }
        if (s == "size") {
            cout << size() << '\n';
        }
        if (s == "empty") {
            cout << empty() << '\n';
        }
        if (s == "top") {
            cout << top() << '\n';
        }
    }

    return 0;

}