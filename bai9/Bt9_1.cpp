//ho le anh tuan
#include <iostream> 
using namespace std; 
int solonnhat(int a,int b,int c,int d){
	int max; 
    max = a;
    if(max < b) {
    max = b;
    }
    if(max < c) {
    max=c; 
    }
    if(max < d) {
    max=d; 
	} 
    cout << "So lon nhat trong 4 so la: " << max;
    return 0;
}
int main() 
{ 
    int a, b, c ,d;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    cout << "Nhap d = ";
    cin >> d;
    solonnhat(a,b,c,d); 
}
