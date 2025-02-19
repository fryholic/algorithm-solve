#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    
    int carry = 0;
    string result;
    int max_len = max(num1.size(), num2.size());
    for (int i = 0; i < max_len; i++) {
        int digit1 = (i < num1.size()) ? (num1[i] - '0') : 0;
        int digit2 = (i < num2.size()) ? (num2[i] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    if (carry > 0) {
        result.push_back(carry + '0');
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<string> precomputeFib() {
    vector<string> fib(491);
    fib[1] = "1";
    fib[2] = "1";
    for (int i = 3; i <= 490; i++) {
        fib[i] = addStrings(fib[i-1], fib[i-2]);
    }
    return fib;
}

int main() {
    vector<string> fib = precomputeFib();
    
    int x;
    while (cin >> x && x != -1) {
        cout << "Hour " << x << ": " << fib[x] << " cow(s) affected" << endl;
    }
    
    return 0;
}