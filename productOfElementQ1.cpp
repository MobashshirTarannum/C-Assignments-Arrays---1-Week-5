//Q1->Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of array :";
cin>>n;
int arr[n];
cout<<"enter the element :";
for(int i=0; i<=n-1; i++){
cin>>arr[i];

}
int product =1;
for(int i=0; i<=n-1; i++){
product*=arr[i];
}
cout<<"product of array is :"<<product;
}