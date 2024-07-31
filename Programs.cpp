//C++ Programs
#include<iostream>
using namespace std;
int main(){
    int N=15;
    for(int i=2;i<=N;i++){
        int curr=i; //current number to check for
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(curr%j==0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout<<curr<<" ";
        }
    }
    cout<<endl;
    return 0;
    
}

OUTPUT:
2 3 5 7 11 13 


//NESTED LOOPS
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

OUTPUT:
1 1 1 1 
2 2 2 2 
3 3 3 3 
4 4 4 4


//PRINT STAR PATTERN:
#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
} 
OUTPUT: 
* 
* * 
* * * 
* * * *



//PRINT INVERTED STAR PATTERN:
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
OUTPUT: 
* * * * 
* * * 
* * 
*


//HALF PYRAMID PATTERN
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
OUTPUT:
1
12
123
1234

PRINT CHARACTER PYRAMID PATTERN:
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch= 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
OUTPUT:
A 
B C 
D E F 
G H I J 

//FLOYD's TRIANGLE PATTERN:
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
Output :
1 
2 3 
4 5 6 
7 8 9 10 



//Output : 
4
* 
* * 
* * * 
* * * * 
* * * * * 
program :
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}


