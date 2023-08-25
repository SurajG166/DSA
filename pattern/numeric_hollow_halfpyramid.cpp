#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r=0;r<n;r++){
        for(int c=0;c<r+1;c++){
            if(c==0){
                cout<<c+1;
            }
            else if(r==n-1){
                cout<<c+1;
            }
            else if(r==c){
                cout<<c+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}