// ho le anh tuan 
#include <iostream>
#include <cmath>
using namespace std;
int tich(int n){
	if(n==1) return 1;
	return n*n*tich(n-1); 
} 
int main(){
	int n;
	cin>>n;
	cout<<"kq: "<<tich(n); 
} 
