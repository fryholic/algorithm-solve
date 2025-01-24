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
        
    int N;

    cin >> N;

    int five_div = N / 5;
    int five_mod = N % 5;

    if (five_mod == 0) {
        cout << five_div;
        return 0;
    }
    else {
        if (five_div == 0) {
            if (five_mod % 3 != 0) {
                cout << -1;
                return 0;
            }
            else {
                cout << five_mod / 3;
                return 0;
            }
        }
    }

    int three_div = 0;

    while (five_div) {
        if (five_mod % 3 == 0) {
            three_div = five_mod / 3;
            break;
        }
        else {
            five_mod += 5;
            five_div--;
        }
    }

    if (five_mod % 3 == 0) {
        three_div = five_mod / 3;
    }

    if (five_div == 0 && three_div == 0) {
        cout << -1;
        return 0;
    }
    else {
        cout << five_div + three_div;
    }


    return 0;

}