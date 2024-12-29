#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> v;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.insert(v.begin() + i, temp);
    }

    int temp_max = -1000001;
    int temp_min = 1000001;

    for(int i = 0; i < N; i++){
        if(temp_max <= v[i]) temp_max = v[i];
    }

    for(int i = 0; i < N; i++){
        if(temp_min >= v[i]) temp_min = v[i];
    }

    cout << temp_min << " " << temp_max;
}