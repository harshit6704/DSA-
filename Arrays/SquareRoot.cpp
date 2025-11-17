#include<bits/stdc++.h>
using namespace std;
int sqrRoot(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
for(;s<=e;){
if((mid*mid)==n) return mid;
else if ((mid*mid)<n){ ans=mid;
s=mid+1;}
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
return ans;
}
double precision(int n,int ans,int precision){
    double factor=1;
    double fans=ans;
for(int i=0;i<precision;i++){

    factor=factor/10;
    for(double j=ans;j*j<n;j=j+factor){
    fans=j;
    }
}
return fans;
}
int main(){
    int n;
    cin>>n;
    int ans=sqrRoot(n);
    cout<<precision (n,ans,3);

}