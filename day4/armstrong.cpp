
// armstrog no is the no which is equal to the cube of their individual digits

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int sum=0, temp = n;

    while(n>0){
        int last = n%10;
        sum += pow(last,3);
        n = n/10;
    }

    if (sum == temp){
        cout << "Armstorng number" << endl;
    }
    else{
        cout << "Not an armstrong number" << endl;
    }

    return 0;
}
