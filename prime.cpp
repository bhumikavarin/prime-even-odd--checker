#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int d =2;
    while(d<a){
        if(a%d==0){
           if(a%2==0){
            cout<<"even";
            return 0;
           }
           else{
            cout<<"odd";
            return 0;
           }
           
        }
        else{
            d=d+1;
        }
        
    
    }
    cout<<"prime";
    return 0;       
}
