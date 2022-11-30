#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e6+3;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

int n,x[100];
int used[100] = {0};

void Result(){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<' ';
    }
    cout<<endl;
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i==n)
                Result();
            else 
                Try(i+1);
            used[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<"Nhap n : "<<endl;
    cin>>n;
    Try(1);
}
