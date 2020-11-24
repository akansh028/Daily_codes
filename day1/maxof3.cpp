#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif    
    int a,b,c;
    cin >>a>>b>>c;

    if (a > b){
        if (a > c){
            cout << "A is the largest " << a << endl;
        } else {
            cout << "C is the largest "<< c << endl;
        }
    } else {
        if (b > c){
            cout << "B is the largest " << b << endl;
        } else {
            cout << "C is the largest " << c << endl;
        }
    }
    

    return 0;
}