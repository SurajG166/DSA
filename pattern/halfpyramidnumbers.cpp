#include<iostream>
using namespace std;
int main(){
    int n,row;
    cout<<"enter the number";
    cin >> n;
    for(int row=0;row<n;row++){
        // int temp=row;
        for( int col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }

    return 0;
}