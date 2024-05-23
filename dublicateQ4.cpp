//Q4->Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"enter the size of array  ";
    cin>>n;
    int arr[n];
    cout<<"enter the element  :";
     for(int i=0; i<=n-1; i++){
    cin>>arr[i];
     }
     bool flag=false;
     for(int i =0; i<=n-1; i++){
        for(int j=i+1; j<=n-1; j++) {
           if( arr[i]==arr[j]) {
            flag=true;
             break;
        }
        }
           if(flag==true)  break;
     }

     if(flag==true) cout<<" contains dublicate";
     else cout<<"all elements are unique";
}