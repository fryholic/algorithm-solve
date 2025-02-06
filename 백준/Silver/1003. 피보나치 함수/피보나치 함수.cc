#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;

void fib_call(int arr[][2], int index) {
    
    if (index > 1) {
        if (arr[index - 1][0] < 0 || arr[index - 1][1] < 0) {
            fib_call(arr, index - 1);
            for (int i = 0; i < 2; i++) {
                arr[index][i] = (arr[index - 1][i] + arr[index - 2][i]);
            }
        }
        else {
            for (int i = 0; i < 2; i++) {
                arr[index][i] = (arr[index - 1][i] + arr[index - 2][i]);
            }
        }
    }    

}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;

    int arr[41][2];

    arr[0][0] = 1; arr[0][1] = 0;
    arr[1][0] = 0; arr[1][1] = 1;

    for (int i = 2; i < 41; i++) {
        for (int j = 0; j < 2; j++) {
            arr[i][j] = -1;
        }
    }

    while (T--) {
        int temp;
        cin >> temp;
        fib_call(arr, temp);
        cout << arr[temp][0] << ' ' << arr[temp][1] << '\n';
    }

    return 0;

}