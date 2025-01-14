#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

struct Data {
    int number;
    string name;
};

void merge(Data* arr, int first, int mid, int last) {
    Data* sorted = new Data[last - first + 1];
    int i, j, k;
    i = first;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= last) {
        if (arr[i].number <= arr[j].number) {
            sorted[k++] = arr[i++];
        }
        else {
            sorted[k++] = arr[j++];
        }
    }

    if (i > mid) {
        while (j <= last) {
            sorted[k++] = arr[j++];
        }
    }
    else {
        while (i <= mid) {
            sorted[k++] = arr[i++];
        }
    }

    for (i = first, k = 0; i <= last; i++, k++) {
        arr[i] = sorted[k];
    }

    delete[] sorted;
}

void mergeSort(Data* arr, int first, int last) {
    if (first < last) {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    Data* arr = new Data[N];

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        arr[i].number = temp;
        string temp_str;
        cin >> temp_str;
        arr[i].name = temp_str;
    }

    mergeSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << arr[i].number << ' ' << arr[i].name << '\n';
    }

    delete[] arr;

    return 0;

}