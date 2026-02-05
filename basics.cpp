#include <bits/stdc++.h>
using namespace std;


void Printpattern1(){
    int n ;
    cin >> n;

    for (int i=0; i< n; i++){
        for (int j=0; j<n; j++){
            cout<<'x'<<" ";
        }

    
        cout<<endl;
    }
    
    
    


}
void Printpattern2(){
    int n ;
    cin >>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<"x"<<" ";

        }
        cout<<endl;

    }


}
void Printpattern3(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        // spaces 
        for (int j=1; j<=n-i-1; j++){
            cout<<' ';
        }
        // star
        for (int j=1; j<=2*i+1; j++){
            cout<<j<<' ';
        }
        // spaces 
        for (int j=1; j<=n-i-i; j++){
            cout<<' ';
        }
        cout<<endl;
    }



}

int main(){

 
  Printpattern3();
   



}

