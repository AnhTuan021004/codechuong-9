//ho le anh tuan
#include <iostream>
#include <conio.h>
using namespace std;
int uoc(int a,int b){
	if(a==b) return a;
	if(a>b) return uoc(a-b,b);
	return uoc(a,b-a);
}
int main (){
    int a,b,c,tg;
    cout<<"\n Nhap a : ";   
    cin>>a;
    cout<<"\n Nhap b : ";   
    cin>>b;
    cout<<"\n Nhap c : ";   
    cin>>c;
    tg = uoc(a,b);
    cout<<"\n Uoc chung cua 3 so la : "<<uoc(tg,c);
    getch ();
}
