#include<iostream>
using namespace std;

int main(){
int n, t;
cin>>n>>t;


 if(t==10 && n==1){
    cout<<-1;
   }


   else if(n==1){
    for(int i = 1; i<=9; i++){
        if(i%t == 0){
            cout<<i;
            break;
        }
    }
   }


   else{
    int a = 1;
    n = n-1;
    while(n--){
        a = a*10;
    }
   
    for(int i = 1; i<=10; i++){
        if((i+a)%t == 0){
            cout<<i+a;
            break;
            }
        }
       
    }
   

return 0;
}