#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int* rating = new int[N];
    fill_n(rating, N, 1);

    int** array = new int*[N];
    for (int i = 0; i < N; i++) {
        array[i] = new int[2];
    }

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        array[i][0] = temp;
        cin >> temp;
        array[i][1] = temp;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (array[i][0] > array[j][0] && array[i][1] > array[j][1]) {
                rating[j]++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (i != N - 1) {
            cout << rating[i] << ' ';
        }
        if (i == N - 1) {
            cout << rating[i];
        }
    }

    delete[] rating;

    for (int i = 0; i < N; i++) {
        delete array[i];
    }
    delete[] array;

    return 0;

}