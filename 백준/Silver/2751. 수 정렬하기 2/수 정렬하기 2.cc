#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int arr_size;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int index) {
    int smallest = index;
    int left = 2 * index;
    int right = 2 * index + 1;
    
    if (left <= arr_size && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right <= arr_size && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != index) {
        swap(arr[index], arr[smallest]);
        heapify(arr, smallest);
    }
}

void insert(int arr[], int value) {
    
    arr[++arr_size] = value;
    int index = arr_size;

    while (index > 1 && arr[index / 2] > arr[index]) {
        swap(arr[index], arr[index / 2]);
        index /= 2;
    }
}

int pop(int arr[]) {
    int temp = arr[1];

    arr[1] = arr[arr_size--];
    heapify(arr, 1);

    return temp;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    

    int N;
    cin >> N;

    int* arr = new int[N + 1];

    arr_size = 0;

    //fill_n(arr, N + 1, -1000001);

    for (int i = 1; i <= N; i++) {
        int temp;
        cin >> temp;                       
        insert(arr, temp);
    }

    int last = -1000001;

    for (int i = 1; i <= N; i++) {
        int temp = pop(arr);
        if (temp == last) {
            continue;
        }
        else {
            cout << temp << '\n';
            last = temp;
        }

    }



    delete[] arr;

    return 0;

}