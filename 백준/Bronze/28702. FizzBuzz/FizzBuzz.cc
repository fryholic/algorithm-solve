#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void out(int n) {
    if (n % 3 == 0 && n % 5 != 0) {
        cout << "Fizz";
    }
    else if (n % 3 != 0 && n % 5 == 0) {
        cout << "Buzz";
    }
    else if (n % 3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz";
    }
    else {
        cout << n;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string A, B, C;
    cin >> A >> B >> C;

    if (A != "FizzBuzz" && A != "Fizz" && A != "Buzz") {
        out(stoi(A) + 3);
    }
    else if (B != "FizzBuzz" && B != "Fizz" && B != "Buzz") {
        out(stoi(B) + 2);
    }
    else {
        out(stoi(C) + 1);
    }





    return 0;

}