
// creating a center pyramid with numbers

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }    
    return 0;
}


/*
// creating a right tilted rhombus

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        for (int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

*/


/*
// creating a pyramid using 0 and 1 numbers

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if ((i+j)%2==0){
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }    
    return 0;
}

*/

/*

// creating a reverse pyramid with numbers

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }    
    return 0;
}

*/