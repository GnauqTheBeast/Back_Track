#include <iostream>
using namespace std;

int n,x[100];
int sum = 0;

void Result(){
	 cout<<"= "<<x[1];
	 for(int i=2;i<=n;i++){
	 	if(x[i]!=0)
	 		cout<<" + "<<x[i]; 
	 }
	 cout<<endl;
}

void Try(int i){
	for(int j=x[i-1];j<=n-sum;j++){
		x[i] = j;
		sum+=j;
		if(sum==n) Result();
		else Try(i+1);
		sum -= j;
		x[i]=0;
	}  
}

int main(){
	x[0]=1;
	cin>>n;
	Try(1);
    return 0;
}