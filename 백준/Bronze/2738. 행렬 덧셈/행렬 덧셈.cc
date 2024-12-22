#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a[100][100]; int b[100][100]; int c[100][100];


    int N, M;
    cin >> N >> M;
    
    
    for(int j = 0; j < N; j++){
        for(int k = 0; k < M; k++){
                int A;
                cin >> A;
                a[j][k] = A;
            }
        }
    
    for(int j = 0; j < N; j++){
        for(int k = 0; k < M; k++){
                int A;
                cin >> A;
                b[j][k] = A;
            }
        }
    
   

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){

            cout << c[i][j] << ' ';
  
        }
        cout << '\n';
    }

    return 0;
}