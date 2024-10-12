#include<iostream>
using namespace std;

int main(){
	int soluong,dongia,tongtien,giam;
	cout<<"nhap so ly";
	cin>>soluong;
	cout<<"nhap gia";
	cin>>dongia;
	tongtien = soluong * dongia;
	if(soluong <= 5){
		giam = 0;
	}else if(soluong <= 10){
		giam = 1;	
	}else{
		giam = (soluong - 10) *dongia/2;
	}
	cout << "Tong tien: " << tongtien << "\n";
    cout << "Giam gia: " << giam << "\n";
	return 0;

}
