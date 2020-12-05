// Convert from octal to decimal

#include <iostream>
using namespace std;
 
int OctalToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while(n>0){
        int last = n%10;
        ans += x * last;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    cout << OctalToDecimal(n) << endl;

    return 0;

}
