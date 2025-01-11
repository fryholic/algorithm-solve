#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    

    int K;
    cin >> K;

    int* arr = new int[K];

    fill_n(arr, K, 0);

    int top = -1;

    for (int i = 0; i < K; i++) {
        int temp;
        cin >> temp;
        if (i > 0 && temp == 0) {
            arr[top--] = 0;
        }
        else {
            arr[++top] = temp;
        }        
    }

    int sum = 0;

    for (int i = 0; i < K; i++) {
        sum += arr[i];
    }


    delete[] arr;

    cout << sum;

    return 0;

}