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

//do-while loop
//Write a program where user can keep entering numbers till they enter a multiple of 10.
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"enter your number : ";
        cin>>n;
        
        if(n % 10 == 0){
            break;
        }
        cout<<n<<endl;
    }while(true);
    return 0;
}

//output: 
/*enter your number : 15
15
enter your number : 80
=== Code Execution Successful ===*/


//Check if the number is prime or not:
#include<iostream>
using namespace std;
int main(){
    int n = 7;
    bool isPrime = true;
    for(int i = 2; i<= n -1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }if(isPrime == true){
        cout<<"its a prime number"<<endl;
    }else{
        cout<<"its not a prime number"<<endl;
    }
    return 0;
}
//OUTPUT: 
//its a prime number
