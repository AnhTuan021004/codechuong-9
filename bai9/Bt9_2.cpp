//ho le anh tuan
#include<iostream>
using namespace std;
float UCLN (int a , int b ){ 
	int max = a ;
	if (max < b ) {
		max = b ;
	}
	for (int i = max ; i >= 1 ; i -- ){
		if (a % i == 0 && b % i == 0 )
		break ; 
	}
	return i; 
	
}
int main(){
	int a , b ,c , d ; 
	cout << "Nhap a : " ; cin >>  a ;
	cout << "Nhap b : " ; cin >> b ;
	cout << "Nhap c : " ; cin >> c ; 
	cout << "Nhap d : " ; cin >> d;
	int A = UCLL(UCLL(a,b),UCLL(c,d) ) ; 
	cout << "Uoc chung lon nhat cua 4 so la : " << A ; 
}
