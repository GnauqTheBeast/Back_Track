#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e6+3;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

int n,k,x[100];

void Result(){
    for(int i=1;i<=k;i++){
        cout<<x[i]<<' ';
    }
    cout<<endl;
}

void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i] = j;
        if(i==k)
            Result();
        else 
            Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    x[0] = 0;
    cout<<"Nhap n va k: "<<endl;
    cin>>n>>k;
    Try(1);
}
