#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int r=0;r<n;r++){
        for(int col=0;col<n-r-1;col++){
            cout <<" ";
        }
        //cout<<endl;
        int start=1;
        for(int col=0;col<2*r+1;col++){
            if(r==0||r==n-1){
                if(col%2==0){
                cout<<start ;
                start=start+1;
            }
            else{
                cout<<" ";
            }
            }
            else{
                if(col==0){
                    cout<<1;
                }
                else if(col==2*r){
                    cout<<r+1;
                }
                else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    }
}