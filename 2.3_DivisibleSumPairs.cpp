#include <iostream>

using namespace std;

int cntDiv(int,const vector<int>&);

int main() {
    int n; cin >> n;
    int k; cin >> k;
    // int *a = new int[n];
    // for(int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = cntDiv(k, a);
    cout << cnt;
    // delete[] a;
    return 0;
}

int cntDiv(int k,const vector<int>& a) {
    int cnt = 0;
    int n = a.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if((a[i] + a[j]) % k == 0) {
                cnt ++;
            }
        }
    }
    return cnt;
}
