#include <iostream>

using namespace std;

int main()
{
    int n = 10, m = 10;
    char A[n][m];
    
    
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<m; ++j){
            A[i][j] = '*';
        }
    }
    A[6][2] = '@';
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<m; ++j){
            cout<< A[i][j];
        }
        cout << endl;
    }
    return 0;
}
