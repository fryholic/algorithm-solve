#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int A, B, C;
    cin >> A >> B >> C;

    int result = A * B * C;

    string re_result = to_string(result);

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while(result > 0){
        int result_temp = result / 10;
        result_temp *= 10;
        int d = result - result_temp;
        count[d]++;
        result /= 10;
    }

    for(int i = 0; i < 10; i++){
        cout << count[i] << '\n';
    }

    return 0;

    //210,000,000
}