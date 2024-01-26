#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll n,m;
cin>>m>>n;
vector<ll>a;
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll max_a=a[0];
for(ll i=0;i<n;i++){
    if(max_a<a[i] and m>=a[i]){
        max_a=a[i];
        if(m-max_a==0){
            cout<<max_a<<endl;
            return 0;
        }
    }
}
cout<<max_a<<endl;
ll max_a2=a[0];
for(ll i=0;i<n;i++){
    if(max_a2<a[i] and max_a>a[i] and a[i]+max_a<=m){
        max_a2=a[i];
//        if(max_a-max_a2==0){
//            cout<<max_a<<endl;
//            return 0;
//        }
    }
}
cout<<max_a+max_a2<<endl;
}
