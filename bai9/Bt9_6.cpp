//ho le anh tuan
#include <iostream>
using namespace std;
int gt(int n){
	int s;
	s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
} 
long long tohop(int n,int k){
	return (gt(n)/(gt(k)*gt(n-k)));
}
int main(){
	int n;
	cout<<"Nhap n la: ";
	cin>>n;
	int k;
	cout<<"Nhap k la: ";
	cin>>k;
	cout<<"kq: "<<tohop(n,k); 
} 
