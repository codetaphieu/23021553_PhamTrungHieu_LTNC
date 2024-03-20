#include <iostream>

using namespace std;
void cipher(int n, string s, int k) {
    for(int i = 0; i < n; i++) {
        if(isalpha(s[i])) {
            if(islower(s[i])) {
                s[i] = char(int((s[i]) + k - 97) % 26 + 97);
            }
            else
                s[i] = char(int((s[i]) + k - 65) % 26 + 65);
        }
    }
    cout << s;
}
int main() {
    int n; cin >> n;
    cin.ignore();
    string s; getline(cin, s);
    int k; cin >> k;
    cipher(n, s, k);
    return 0;
}
