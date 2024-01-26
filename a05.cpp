#include<bits/stdc++.h>
using  namespace std;
#define lli long long int
int main(){
 lli n;
 cin>>n;
 lli tt=1;
 for(lli i=2;i*i<=n;i++){
    lli val = i;
    lli deno = i;
    lli f=0;
    while(n%i==0){
      val = val*i;
      n/=i;
      f=1;
    }
   // cout<<n<<" "<<((val-1)/(deno-1))<<endl;
    if(f)
      tt = tt * ((val-1)/(deno-1));
  }
  if(n>1)
    tt = tt*((n*n -1)/(n-1));
cout<<tt<<endl;

return 0;
}
