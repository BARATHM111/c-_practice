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
        for (int j=0; j<n-i; j++){
            cout<<"x"<<' ';
        }
        cout<<endl;
    }



}

int main(){

 
  Printpattern3();
   



}

