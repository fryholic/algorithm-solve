#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int K, N;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
        
    cin >> K >> N;

    long long int max = 0;
    
    long long int* arr = new long long int[K];

    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    long long int min = 1;
    long long int mid = (max - min) / 2;
    long long int ans = 0;

    while (min <= max) {
        mid = (max + min) / 2;
        int count = 0;
        for (int i = 0; i < K; i++) {
            count += arr[i] / mid;
        }

        if (count >= N) {
            min = mid + 1;
            ans = mid;
        }
        else {
            max = mid - 1;
        }
    }

    cout << ans;

    delete[] arr;

    return 0;

}