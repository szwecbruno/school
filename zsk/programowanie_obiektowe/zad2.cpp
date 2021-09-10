#include <iostream>

using namespace std;


	class Rectangle {
	public:
	float a ;
	float b ;
	float area();
	float circuit();
}; 

 float Rectangle::area(){
 	return a*b;
 }
 float Rectangle::circuit(){
 	return (2*a)+(2*b);
 }



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Rectangle re1;
	cout << "podaj a ";
	cin>>re1.a;
	cout << "podaj b ";
	cin>>re1.b;
	cout<<"pole to: "<<re1.area();
	cout<<"\nObwód to: "<<re1.circuit();
	
	
	
	return 0;
}
