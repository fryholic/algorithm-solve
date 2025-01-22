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

    int* arr = new int[2 * N];

    for (int i = 1; i <= N; i++) {
        arr[i - 1] = i;
    }

    int first = 0;
    int last = N - 1;

    int temp = 0;

    while (first != last) {
        if (first % 2 == 0) {
            first++;
        }
        else {
            temp = arr[first];
            first++;
            arr[++last] = temp;
        }
    }

    cout << arr[first];

    delete[] arr;

    return 0;

}