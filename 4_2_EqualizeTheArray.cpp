#include <iostream>
#include <algorithm>

using namespace std;

int minDeletion(int n, int *arr) {
    int pos = 0; int max = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            if(i - pos > max){
                max = i - pos;
            }
            pos = i;
        }
        if((i == n - 1) && (arr[i] == arr[i - 1])) {
            if(i - pos + 1> max){
                max = i - pos + 1;
            }
        }
    }
    return n - max;
}
int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
//    cout << arr;
    int res = minDeletion(n, arr);
    cout << res << endl;
    return 0;
}
