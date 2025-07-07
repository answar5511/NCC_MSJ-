#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
 
    int result1, result2, result3, result4, result5, result6;
    
    
    result1 = a + b + c;
    result2 = a * b * c;
    result3 = a + (b * c);
    result4 = (a + b) * c;
    result5 = a * (b + c);
    result6 = (a * b) + c;
    
    int bigger= max(result1, max(result2, max(result3, max(result4, max(result5,(result6))))));
    cout<<bigger;
}
