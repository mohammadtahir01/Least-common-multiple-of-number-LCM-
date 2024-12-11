#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    
    for(int i=1; i>0; ++i){
        if(i%num1==0 && i%num2==0){
            cout<<i;
            break;
        }
    }
    
    return 0;
}