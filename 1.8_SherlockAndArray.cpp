#include <iostream>

using namespace std;
bool isSherlock(int arr[], int n);
int main(){
    int T; cin >> T;
    for(int q = 1; q <= T; q++){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string res = "NO";
        if(isSherlock(arr, n) == true){
            res = "YES";
        }
        cout << res << endl;
    }
    return 0;
}
bool isSherlock(int arr[], int n){
    if(n == 1){
        return true;
    }
    else if(n == 2) {
        if(arr[0] == 0 || arr[1] == 0){
            return true;
        }
        else return false;
    }
    else {
        int sumLeft = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        for(int i = 0; i < n; i++){
            if(sumLeft == sum - arr[i] - sumLeft){
                return true;
            }
            sumLeft += arr[i];
        }
    }
    return false;
}
