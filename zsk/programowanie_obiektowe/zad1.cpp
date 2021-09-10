#include <iostream>

using namespace std;


class Worker {
	public:
	// deklaracje zmiennych czlonkowskich
	string name ;
	string surname;
	int age;
	//definicja funkcji czlonkowskich (metody)
	void showSurname(){
		cout<<"nazwisko pracownika" <<surname;
	};
	//deklaracja (prototyp) metody
	void showAllData();
	
}; 

//definicja metody showalldate
void Worker::showAllData() {
	cout <<"imiê i nazwisko" << name << " " <<surname;
}






int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik1;
	pracownik1.name="krystian";
	pracownik1.surname="nowak";
	cout << pracownik1.name;
	pracownik1.showSurname();
	pracownik1.showAllData();
	
	
	return 0;
}
