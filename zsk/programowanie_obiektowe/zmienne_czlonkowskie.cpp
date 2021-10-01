#include <iostream>

using namespace std;
class School {
	public:
	static string s_school;
	static string s_jobPosition;
	string name;
	string surname;
	
	void getData();
	void setNameSurname(string name, string surname, string s_school);
	static string s_getschool();
	static void s_setSchool(string pSchool){
		s_school=pSchool;
	}
	
	
	
};
string School::s_getschool(){
	return s_school;
}

string School::s_school="ZSK";
string School::s_jobPosition="student";
void School::getData(){
	cout<<"imie i nazwisko :" <<name<< " " <<surname;
}
void School::setNameSurname(string pName, string pSurname, string s_school){
	name=pName;
	surname=pSurname;
	School::s_school=s_school;
}



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	School kowalski;
	kowalski.name="kacper";
	kowalski.surname="kowalski";
	kowalski.getData();
	
	cout<<"\nSchool:"<<kowalski.s_getschool();
	School::s_setSchool("CDV");
	kowalski.getData();
	
	



	return 0;
}
