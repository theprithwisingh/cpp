#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a, int low, int mid, int high){
   vector<int>b;

   int i = low;
   int j = mid+1;

   while(i<=mid and j<=high){
     if (a[i]>a[j]) b.push_back(a[i++]);
     else b.push_back(a[j++]);
   }
   while(i<=mid)b.push_back(a[i++]);
   while(j<=high)b.push_back(a[j++]);

   for (int i = low; i <=high; i++)a[i]=b[i-low];
}

void mergesort(vector<int>&a, int low ,int high){
    if(low==high) return;
    
    int mid  = (low+high)/2;
    
    mergesort(a, low , mid);
    mergesort(a, mid+1 , high);
    
    merge(a,low, mid, high);
}
int main(){
    int n;
    cin>>n;

    vector<int>a(n);

    for (int i = 0; i < n; i++)cin>>a[i];
    mergesort(a,0,n-1);

    for (auto x:a)cout<<x<<" ";
}