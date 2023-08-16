#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int n,m;
    cin>>n;
    cin>>m;
    for(int row=0;row<n;row++){
        if((row==0) || (row==n-1)){
            for(int col=0;col<m;col++){
                cout<<"*";
            }
            cout<<endl;
        }
        else {
            cout<<'*';
            for(int col=0;col<m-2;col++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }
    return 0;
}