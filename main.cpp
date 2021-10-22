#include <iostream>

using namespace std;

class Car {
	public:
	uint id;
	string brand;
	string model;
	void getData();#include <iostream>

using namespace std;

class Car {
	
	int id;
	string brand;
	string model;
	void getData();
	Car ();
	
	Car(int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"id: "<<id<<endl;
	cout<<"brand: "<<brand<<endl;
	cout<<"model: "<<model<<endl;
}

Car::Car(){
	id=0;
	brand="Marka domyslna";
	model="model domyslny";
	cout<<"konstruktor domyslny"<<endl;
}
	Car(unsigned int pId, string pmodel, string pBrand){
	id=pId;
	model=pModel;
	brand=pBrand;
	cout<<"konstruktor parametryczny"<<endl;
}

int main(int argc, char** argv) {
	Car k1{1, "ferrari", "f460"};
	kl.getData();
	Car k2= Car(10, "bmw");
	k2.getData();
	return 0;
}
	Car ();
	
	Car(int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"id: "<<id<<endl;
	cout<<"brand: "<<brand<<endl;
	cout<<"model: "<<model<<endl;
}

Car::Car(){
	id=0;
	brand="Marka domyslna";
	model="model domyslny";
	cout<<"konstruktor domyslny"<<endl;
}
Car::Car(int pId, string pModel, string pBrand){
	id=pId;
	model=pModel;
	brand=pBrand;
	cout<<"konstruktor parametryczny"<<endl;
}

int main(int argc, char** argv) {
	Car k1= car{, "ferrari", "f460"};
	k1.getData();
	Car k2= Car(10, "bmw", "x6");
	k2.getData();
	return 0;
}
