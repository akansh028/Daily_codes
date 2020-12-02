// calculate the sum of n numbers

#include <iostream>
#include <cmath>
using namespace std;
 
int sumofn(int num){
    
    return (num * (num+1))/2;    
}

int main(){
    int n;
    cin >> n;

    int ans = sumofn(n);
    cout << ans << endl;

    return 0;

}
