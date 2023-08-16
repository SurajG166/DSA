// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int r,c,n;
    cin>> n;
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            if(r==0||c==0||c==n-r-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}