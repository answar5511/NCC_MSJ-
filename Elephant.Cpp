#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int steps=x/5;
    if(x%5!=0){
        steps+=1;
    }
    cout<<steps;
    return 0;
}
