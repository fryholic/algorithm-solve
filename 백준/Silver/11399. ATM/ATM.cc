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


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    int* people = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> people[i];
    }

    sort(people, people + N);

    int sum = 0;


    for (int i = 0; i < N; i++) {
        sum += people[i];
    }

    int temp_sum = sum;

    for (int i = N - 1; i >= 1; i--) {
        temp_sum -= people[i];
        sum += temp_sum;
    }

    cout << sum;

    return 0;

}