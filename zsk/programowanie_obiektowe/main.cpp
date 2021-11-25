#include <iostream>

using namespace std;
// stworzenie klasy
class Car{
public:
   //inicjalizacja zmiennych
    string brand;
    string model;
    string color;
    int price;
    int year;
    //inicjalizacja metody
    void showData();
    //konstruktor domyslny
    Car(){
        cout<<"konstruktor domyœlny"<<endl;
    };
    //kontruktory parametryczne
    Car(string, string, int);
    Car(string, string, string, int, int);
    //destruktor
    ~Car(){
        cout<<"destruktor"<<endl;
    }
};
// inicjalizacja konstruktorow poza klasa
Car::Car(string pBrand, string pModel, int pYear){
    brand=pBrand;
    model=pModel;
    year=pYear;
}
Car::Car(string pBrand, string pModel, string pColor, int pYear, int pPrice){
    brand=pBrand;
    model=pModel;
    year=pYear;
    color=pColor;
    price=pPrice;

}
//inicjalizacja metody
void Car::showData(){
cout<<"brand = "<<brand<<endl;
cout<<"model = "<<model<<endl;
cout<<"year = "<<year<<endl;
cout<<"color = "<<color<<endl;
cout<<"price = "<<price<<endl;
}
//funkcja creatobject
void createObjectCar(){
	Car car2 = {"bmw", "r8", "szary", 1324, 60000};
	car2.showData();
}


int main()
{
    //przypisanie wartosci obiektowi
    Car car1= {"fiat", "multipla", "szary", 1998, 20000};
    //wywolanie funkcji
    car1.showData();
    //uzycie wsakznika
    Car *car;
    car =&car1;
    car->price=2;
    car->showData();
    // wywolanie funkcji create object
    createObjectWorker();

    return 0;
}
