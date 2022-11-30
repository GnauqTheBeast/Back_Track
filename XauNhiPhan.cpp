#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e6+3;
#define FOR(i,a,b) for(int i=a;i<b;i++) 


int n, x[100];

void result(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<endl;
}

void Try(int i){
    for(int j=0;j<=1;j++){
        x[i] = j;
        if(i==n)
            result();
        else 
            Try(i+1);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<"Nhap xau nhi phan: "<<endl;
    cin>>n;
    Try(1);
}
