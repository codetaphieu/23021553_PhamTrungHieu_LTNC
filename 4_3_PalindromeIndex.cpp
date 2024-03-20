#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}
int indexPalindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            if(isPalindrome(s.substr(0, i) + s.substr(i + 1))) {
                return i;
            }
            else if(isPalindrome(s.substr(0, n - i - 1) + s.substr(n - i))) {
                return n - i - 1;
            }
            return -1;
        }
    }
    return -1;
}
int main() {
    int q; cin >> q;
    cin.ignore();
    for(int k = 0; k < q; k++) {
        string s; getline(cin, s);
        int res = -1;
        if(!isPalindrome(s)) {
            res = indexPalindrome(s);
        }
        cout << res << endl;
    }
    return 0;
}

