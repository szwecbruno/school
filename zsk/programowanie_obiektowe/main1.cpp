#include <iostream>

using namespace std;

class Konto {
//prywatne zmienne czlonkowskie
private:
    int balans;
    int debit;
// publiczne metody dzialajace na powyzszych zmiennych
public:
    int getBalans();
    int wyplac(int x);
    int withdraw(int x);

    void getData();
    Konto();
    Konto(int, int);


};
// konstruktor domyslny
Konto::Konto(){
    balans=0;
    debit= 12;
}
//konstruktor parametryczny
Konto::Konto(int pBalans, int pDebit){
balans=pBalans;
debit=pDebit;
}

// funkcja wyplac
int Konto::wyplac(int x){
    if(balans-x>0){
        balans=balans-x;
        cout<<"wyplaciles "<<x<<" zl"<<endl;
        return x;
    }
    else {
        cout<<"brak srodkow"<<endl;
    }

}
// funkcja wypisujaca balans
int Konto::getBalans(){
        cout<<"Posiadasz "<<balans<<" zl"<<endl;
}
// funkcja wypisujaca wszytskie dane
void Konto::getData(){
    cout<<"Balans to : "<<balans<< "zl"<<endl;
    cout<<"Debit to : "<<debit<< "zl"<<endl;
    }

int main()
{
    //utworzenie obiektu k1 i przypisanie mu wartosci
    Konto k1 = {1000,52};
    //wywolnie funkcji
    k1.getBalans();
    k1.wyplac(400);
    k1.getBalans();
    k1.getData();
    return 0;
}
