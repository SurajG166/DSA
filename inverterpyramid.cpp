#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin >> n;
    for(int r=0;r<n;r++){
        for( c=0;c<r;c++){
            cout << " ";
        }
        for(c =0;c<n-r;c++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}