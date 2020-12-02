// calculate the pythagorian triplet
// square of max value in a triplet is equal to the triplet of 
// square of other two values

#include <iostream>
#include <cmath>
using namespace std;
 
bool check(int x, int y, int z){
    
    int a = max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    if(check(x,y,z)){
        cout << "Pythagorian triplet" << endl;
    }
    else{
        cout << "Not a pythagorian triplet" << endl;
    }
    return 0;

}
