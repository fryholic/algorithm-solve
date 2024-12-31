#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    string A;
    int score = 0;
    int high = 0;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A;
        
        if(A[0] == 'O'){
            score++;
            high++;
        }

        for(int j = 1; j < A.length(); j++){
            if(A[j-1] == 'O' && A[j] == 'O'){
                score = score + high + 1;
                high++;
            }
            else if(A[j-1] != 'O' && A[j] == 'O'){
                score++;
                high = 1;
            }
        }

        cout << score << '\n';

        score = 0;
        high = 0;

    }

    return 0;

}