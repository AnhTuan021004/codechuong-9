//ho le anh tuan
#include <iostream>
using namespace std;
int tong(int n){
	if(n==1) return n;
	return n+tong(n-1);
}
int main(){
	int n;
	cout<<"nhap so n: ";
	cin>>n;
	cout<<"ket qua: "<<tong(n);
}
