#include <iostream>

using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n, string s) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            s = "#";
            if(j < n - i - 1){
                s = " ";
            }
            cout << s;
        }
        cout << endl;
    }
}

int main()
{
    int n; cin >> n;
    string s = "#";
    staircase(n, s);

    return 0;
}
