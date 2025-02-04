#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    double* arr = new double[N];

    double sum = 0.0;

    map<int, int> freq_map;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
        freq_map[arr[i]]++;
    }

    sort(arr, arr + N);

    vector<pair<int, int>> freq_vec;
    for (auto& entry : freq_map) {
        freq_vec.emplace_back(entry.second, entry.first);
    }

    sort(freq_vec.begin(), freq_vec.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

    int mode = 0;
    if (!freq_vec.empty()) {
        int max_freq = freq_vec[0].first;
        vector<int> candidates;
        for (auto& p : freq_vec) {
            if (p.first == max_freq) {
                candidates.push_back(p.second);
            }
        }
        mode = (candidates.size() >= 2) ? candidates[1] : candidates[0];
    }

    int mean = round(sum / N);

    cout << mean << '\n';

    int median_idx = ceil((double)N / 2);

    int median = arr[median_idx - 1];

    cout << median << '\n';

    int range = abs(arr[N - 1] - arr[0]);

    cout << mode << '\n';

    cout << range << '\n';

    delete[] arr;


    return 0;

}