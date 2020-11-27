// no dvisible by both 2 and 3 or divisible by only one 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n%2==0 && n%3==0){
        cout << "Divisible by 2 and 3 both" << endl;
    } else if(n%2==0){
        cout << "Divisible by 2" << endl;
    } else if(n%3==0){
        cout << "Divisible by 3" << endl;
    } 
    else {
        cout << "Dibisible by none" << endl;
    }

    return 0;
}