#include <iostream>
#include <algorithm>

using namespace std;

//C1 sort lại rồi so sánh B với A tìm phần tử khác

//void resortArr(int *a, int n) {
//    sort(a, a + n);
//}
//
//int mysNum(int * a, int *b, int n) {
//    int i = 0;
//    while(i < n) {
//        if(a[i] == b[i]) i++;
//        else return b[i];
//    }
//    return b[n];
//}
//
//int main() {
//    int n; cin >> n;
//    int a[n], b[n + 1];
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for(int i = 0; i < n + 1; i++) {
//        cin >> b[i];
//    }
//    resortArr(a, n);
//    resortArr(b, n + 1);
//    int mysNumber = mysNum(a, b, n);
//    cout << mysNumber;
//    return 0;
//}


//C2    lấy sum_b - sum_a = result
int main() {
    int n; cin >> n;
    int a[n], b[n + 1];
    int sum_a = 0; int sum_b = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for(int i = 0; i < n + 1; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
    cout << sum_b - sum_a;
    return 0;
}
