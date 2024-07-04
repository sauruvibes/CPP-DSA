//Output & Input Array
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {7,5,2,1,3};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i<n; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//Output : 
//7 5 2 1 3 


//Find largest of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,9,12};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest= "<<max<<endl;
    return 0;
}
