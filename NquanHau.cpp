#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e6+3;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

int n,x[100];
int Xuoi[100] = {0};
int Nguoc[100] = {0};
int checked[100] = {0};
//học toán rr rồi tự code lại được, vui ghê 1:32PM 28/9/22
void Result(){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<' ';
    }
    cout<<endl;
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(!checked[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
            x[i] = j;
            Xuoi[i-j+n] = 1;
            Nguoc[i+j-1] = 1;
            checked[j] = 1;
            if(i==n)
                Result();
            else 
                Try(i+1);
            Xuoi[i-j+n] = 0;
            Nguoc[i+j-1] = 0;
            checked[j] = 0;
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
