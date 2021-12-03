#include <iostream>

using namespace std;

class Car {
	private:
		int price;
		int registration;
	public:
		string brand;
		string model;
		string color;
		int year;

		int getPrice();

		int getRegistration();

		void setPrice(int pPrice){
			price=pPrice;
		}

		void setRegistration(int pRegistration){
			registration= pRegistration;
		}

		void showData();

		Car();
		Car(string pBrand, string pModel, int pYear);
		Car(int pPrice, int pRegistration, string pBrand , string pModel, string pColor, int pYear);

		~Car(){
			cout<<"destruktor zosta³ wywo³any"<<endl;
		}
};

	Car::Car(string pBrand, string pModel, int pYear){
		brand= pBrand;
		model= pModel;
		year= pYear;
	}

	Car::Car(int pPrice, int pRegistration, string pBrand, string pModel, string pColor, int pYear){
		price= pPrice;
		registration= pRegistration;

		brand= pBrand;
		model= pModel;
				color= pColor;
		year= pYear;

	}
	Car::Car(){
		cout<<"konstruktor domyslny"<<endl;
	}

	void Car::showData(){
		cout<<"cena :"<<price<<endl;
		cout<<"rejestracja :"<<registration<<endl;
		cout<<"marka :"<<brand<<endl;
		cout<<"model :"<<model<<endl;
		cout<<"color :"<<color<<endl;
		cout<<"year :"<<year<<endl;

	}


int main()
{

	Car fiat = Car (2000, 10296, "fiat", "multipla", "szary", 1998 );
	fiat.showData();
	Car *car;
    car =&fiat;
    car->setPrice(267);
	fiat.showData();

	// Przeci¹¿enie kontruktora to gdy wystepuje wiecej niz jeden konstruktor o tej samej nazwie lecz rozniej liczbie argumentow lub z
     //  roznymi typami argumentow, wtedy kompilator automatycznie wybiera konstruktor ktorego uzyje wybierajac go na podstawie
     //   ilosci argumentow oraz ich typow.

     //   Przyklady:
     //   Car(float pPrice, string pRegistration, string pBrand, string pModel, string pColor, unsigned short int pYear);
     //   Car(string pBrand, string pModel, unsigned short int pYear);
    //    Car();




    return 0;
}
