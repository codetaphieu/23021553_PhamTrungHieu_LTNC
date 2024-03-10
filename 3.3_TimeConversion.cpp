#include <iostream>
#include <fstream>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    string s0 = string(1, s[0]);
    string s1 = string(1, s[1]);
    string stwo = s0 + s1;
    int conv = stoi(stwo);
    string res;
    if((s[8] == 'A') && (s[1] == '2') && (s[0] == '1')) {
        s0 = '0'; s1 = '0';
        res = s0 + s1 + s.substr(2, 6);
    }
    else if(s[8] == 'P') {
        if(conv < 12){
            conv += 12;
            string s01 = to_string(conv);
            res = s01 + s.substr(2, 6);
        }
        else res = s.substr(0, 8);
    }
    else res = s.substr(0, 8);
    return res;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
