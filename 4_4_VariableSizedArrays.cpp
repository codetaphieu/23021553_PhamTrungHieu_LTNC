#include <iostream>

using namespace std;

int* importArray(int n, int *a) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a;
}

int printRes(int **a, int n, int k) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            res = a[i][j];
        }
    }
    return res;
}

int main() {
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        int arr[n][k];
        for(int a =
    }
    
    return 0;
}
