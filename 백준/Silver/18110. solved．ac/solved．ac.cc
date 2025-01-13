#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void merge(double* arr, int first, int mid, int last) {
    double* sorted = new double[last - first + 1];
    int i, j, k;
    i = first;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= last) {
        if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }

    if (i > mid) {
        while (j <= last) sorted[k++] = arr[j++];
    }
    else {
        while (i <= mid) sorted[k++] = arr[i++];
    }

    for (i = first, k = 0; i <= last; i++, k++) {
        arr[i] = sorted[k];
    }

    delete[] sorted;
}

void mergeSort(double* arr, int first, int last) {
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

    if (N == 0) {
        cout << 0;
        return 0;
    }

    double *arr = new double[N];

    for (int i = 0; i < N; i++) {
        double temp;
        cin >> temp;
        arr[i] = temp;
    }

    mergeSort(arr, 0, N - 1);

    int exclude = round((double)N * 0.15);

    double sum = 0.0;

    for (int i = exclude; i < N - exclude; i++) {
        sum += arr[i];
    }

    int mean = round(sum / (double)(N - 2 * exclude));

    cout << mean;

    delete[] arr;

    return 0;

}