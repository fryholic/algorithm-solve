#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int carry = 0;
    size_t max_length = max(a.size(), b.size());

    for (size_t i = 0; i < max_length; ++i) {
        int sum = carry;
        if (i < a.size()) sum += a[i];
        if (i < b.size()) sum += b[i];
        result.push_back(sum % 10);
        carry = sum / 10;
    }

    
    if (carry > 0) {
        result.push_back(carry);
    }

    return result;
}


void print_bigint(const vector<int>& num) {
    if (num.empty()) {
        cout << 0;
        return;
    }

    
    for (auto it = num.rbegin(); it != num.rend(); ++it) {
        cout << *it;
    }
}

int main() {
    int n;
    cin >> n;

   
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    } else if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    
    vector<int> f0 = {0}; // F(0)
    vector<int> f1 = {1}; // F(1)
    vector<int> fn;       // F(n)

    
    for (int i = 2; i <= n; ++i) {
        fn = add(f0, f1);
        f0 = f1; // F(i-2) = F(i-1)
        f1 = fn; // F(i-1) = F(i)
    }

    print_bigint(fn);
    cout << endl;

    return 0;
}