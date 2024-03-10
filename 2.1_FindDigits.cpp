#include <iostream>
#include <vector>

using namespace std;
int findDigits(int n);
int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int res = findDigits(n);
        cout << res << endl;
    }
    return 0;
}
int findDigits(int n) {
    int len = 0;
    int p = n, m = n;
    while(m != 0) {
        m /= 10;
        len ++;
    }
    vector<int> arr(len);
    for(int i = len - 1; i >= 0; i--){
        arr[i] = p % 10;
        p /= 10;
    }
    int cnt = 0;
    for(int i = 0; i < len; i++) {
        if(arr[i] == 0){
            continue;
        }
        else if(n % arr[i] == 0) {
            cnt ++;
        }
    }
    return cnt;
}
