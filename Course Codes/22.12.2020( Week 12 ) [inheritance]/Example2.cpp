//Dogukan Kaan Bozkurt

#include <iostream>
#include <string.h>
using namespace std;

//Base class
class Person
{
	public:
		string profession;
		int age;
		
		Person(): profession("unemployed"),age(16) { }
		void display()
		{
			cout << "My profession is: "<< profession << endl;
			cout << "My age is: " << age << endl;
			walk();
			talk();
		}
		void walk() {
			cout << "I can walk." << endl;
		}
		void talk() {
			cout << "I can talk." << endl;
		}
};

//MathTeacher class is derived from base class Person
class MathsTeacher : public Person
{
	public:
		void teachMaths() {
			cout << "I can teach Maths." << endl;
		}
};

class Footballer : public Person
{
	public:
		void playyFootball() {
			cout << "I can play Football." << endl;
		}
};

int main()
{
	MathsTeacher teacher;
	teacher.profession= "Teacher";
	teacher.age=23;
	teacher.display();
	teacher.teachMaths();
	
	Footballer footballer;
	footballer.profession= "Footballer";
	footballer.age=19;
	footballer.display();
	footballer.playyFootball();
	
	return 0;
	
}
