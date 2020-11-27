

// creating a half  pyramid using numbers

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }    
    return 0;
}


/*
// creating a pyramid after 180 degree rotation

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j <= n-i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }    
    return 0;
}

*/

/*
// creating a inverted pyramid

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }    
    return 0;
}

*/

/*
// creating a hollow rectangle

#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;

    for (int i=1; i<=rows; i++){
        for (int j=1; j<=cols; j++){
            if (i==1 || i==rows || j==1 || j==cols){
                cout << '*';
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }    
    return 0;
}
*/

/* 
// creating a rectangle 

#include <iostream>
using namespace std;

int main(){
    int rows, cols;

    cin >> rows >> cols;
    for(int i=1; i <= rows; i++){
        for (int j=1; j <=cols; j++){
            cout << '*';
        }
        cout << endl;
    }   
    return 0;
}

*/