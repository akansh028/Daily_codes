// Convert from decimal to hexadecimal

#include <bits/stdc++.h>
using namespace std;
 
string DecimalToHexa(int n)
{
    string ans = "";
    int x = 1;

    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x > 0){
            int last = n/x;
            n -= last*x;
            x /= 16;
            if(last <= 9){
                ans = ans + to_string(last);
            }
            else{
                char c = 'A' + last - 10;
                ans.push_back(c);
            }
        } 
    return ans ;
}
int main(){
    int n;
    cin >> n;

    cout << DecimalToHexa(n) << endl;

    return 0;

}
