//ho le anh tuan
#include<iostream>
using namespace std;
int shh(int n){
	int sum=0;
	//shh la so co tong cac chu so ko bao gom chinh no 
	for(int i=1;i<n;++i){
		if(n%i==0) sum+=i; 
	} 
	if(sum==n){
	cout<<"so hoan hao la: "<<sum; 
	}else{
	cout<<sum<<"ko phai la so hoan hao ";
	}
} 
int main(){
	int n;
	cout<<"Moi nhap n: ";
	cin>>n;
	shh(n);
}
