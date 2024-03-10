#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    reverse(arr, arr + N);
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
