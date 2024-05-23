//Q3->Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
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
   
   int min=INT_MAX;
   for(int i=0 ; i<=n-1; i++){
    if(min>arr[i])  min=arr[i];
   }
   cout<<"minimum value is :"<<min;
}