#include <iostream>
#include <cmath>
using namespace std ;
int sny(int n){
	if (n<2) return false  ;
	for (int i = 2 ; i < n ; i++ )
		if ( n % i == 0 )    return false  ;
		return true  ;  
}
int main(){
	int n ;
	cout << "Nhap n : ";
	cin >> n ;
	cout << "Cac so nguyen to thuoc tu 1 den " << n << "  La :  \n ";
	int tmp = 0 ;
	while ( tmp < n ){
		tmp++;
		if ( snt(tmp) == true )
			cout << "Cac so nguyen to la : " << tmp << "\n";
	}
return 0 ; 
}

