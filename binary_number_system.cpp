//Convert from binary to decimal
#include<iostream>
using namespace std;
void binToDec(int binNum){
    int n=binNum;
    int decNum = 0;
    int pow = 1;
    while(n>0){
        int lastDig = n%10;
        decNum +=lastDig*pow;
        pow = pow*2;
        n=n/10;
    }
    cout<<decNum<<endl;
}

int main(){
    binToDec(1011);
    return 0;
}

//Output:
// 11

//Convert from Decimal to Binary
#include<iostream>
using namespace std;
void decToBin(int decNum){
    int n = decNum;
    int pow=1; //10^0,10^1,10^2..
    int binNum = 0;
    while(n>0){
        int rem = n%2;
        binNum += rem*pow;
        n=n/2;
        pow=pow*10;
    }
    cout<<binNum<<endl;
}
int main(){
    decToBin(4);
    return 0;  
}
