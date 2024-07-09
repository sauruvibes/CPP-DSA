//Print the sum of digits of a number using while loop n = 10829 : 
#include<iostream>
using namespace std;
int main(){
    int n = 10829;
    int digSum = 0;
    
    while(n>0){
        int lastDig = n%10;
        digSum += lastDig;
        n = n/10;
    }
    
    cout<<digSum<<endl;
    return 0;
}

//Output:
//20
