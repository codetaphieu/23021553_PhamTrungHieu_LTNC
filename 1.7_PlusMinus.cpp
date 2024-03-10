#include <iostream>
#include <iomanip>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr[], int n, double pos = 0, double neg = 0, double zero = 0){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0 ){
            pos ++;
        }
        else if(arr[i] < 0){
            neg ++;
        }
        else zero ++;
    }
    cout << fixed << setprecision(6) << pos / n << endl << neg / n << endl << zero / n;
}
int main(){
    int n; cin >> n;
    int arr[n];
    plusMinus(arr, n);
    return 0;
}
