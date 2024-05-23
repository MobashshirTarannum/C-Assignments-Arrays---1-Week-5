//Q5->WAP to find the smallest missing positive element in the sorted Array that contains onlypositive elements.

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
     bool flag=false; //flsae->no misinng
     int x=1;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<=0) continue;
        if(x!=arr[i]) {
            flag=true;
            cout<<"missing ";
            cout<<x;
            break;
        }
        else x++;
    }
    if(flag==false) cout<<"there is no missing element ";
    }


    