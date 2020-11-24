
#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   

    int n, sum=0;
    cin >> n;

    for (int counter=1; counter<=n; counter++){
        sum = sum + counter;
    }
    cout << sum << endl;
}