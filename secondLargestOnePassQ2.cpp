//Q2->Find the second largest element in the given Array in one pass.
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
  // int max=arr[0];
   int mx=INT_MIN;
   int smx=INT_MIN;
   for(int i=0 ; i<=n-1; i++){
    if(mx<arr[i]){
      smx=mx;
       mx=arr[i];
   }
   else{
      smx=max(smx,arr[i]);
   }
   }
   if(smx==INT_MIN)  cout<<"no second largest";
   else cout<<"second maxiumm value is :"<<smx;
   return 0;
}