// print all the fibonacci numbers

#include <iostream>
#include <cmath>
using namespace std;

void fib(int num){

    int t1=0;
    int t2=1;
    int next;

    for (int i=1; i<=num; i++){
        cout << t1 << " ";
        next = t1+t2;
        t1=t2;
        t2=next;
    }
}

int main(){
    int n;
    cin >> n;

    fib(n);
    return 0;
}