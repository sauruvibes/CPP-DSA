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


//Print the sum of odd digits of a number using while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    
    int digSum = 0;
    while(n>0){
        int lastDig = n%10;
        if(lastDig % 2!= 0){
            digSum += lastDig;
        }
        n = n/10;
    }
    cout<<digSum<<endl;
    return 0;
}

//Enter your number: 10829
//10

// Print the digits of a given number in reverse using while loop.
#include<iostream>
using namespace std;
int main(){
    int n = 10829;
    while(n>0){
        int lastDig = n%10;
        cout<<lastDig;
        n = n/10;
    }
    return 0;
}
//output:
//92801
