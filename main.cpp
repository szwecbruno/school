#include <iostream>

using namespace std;

class Time {
	public:
	static string s_time;
	static string s_date;
	static void getData();	
};
string Time::s_time="11:03";
string Time::s_date="01.10.2021";

void Time::getData(){
	cout<<"data i godzina:" <<s_time<< " " <<s_date;
}

int main(int argc, char** argv) {
	Time::getData();
	
	return 0;
}
