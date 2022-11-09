#include <iostream>
#include <string>
#include "Nag³ówek.h"
using namespace std;

Employee::Employee(string surname1, int age1, int exp1, int salary1) {
	surname = surname1;
	age = age1;
	exp = exp1;
	salary = salary1;
}
Employee::Employee() {
}
Employee::~Employee() {
}
void Employee::show() {
	cout << "nazwisko: " << surname << endl << "wiek: " << age << endl << "doswiadczenie: " << exp << endl << "placa: " << salary << endl;
}
string Employee::getSurname() {
	return surname;
}
int Employee::getAge() {
	return age;
}
int Employee::getExp() {
	return exp;
}
int Employee::ageEmployment() {
	int wiek;
	int age = getAge();
	wiek = 2022 - age;
	return wiek;
}
int Employee::getSalary() {
	return salary;
}


Developer::Developer(string surname1, int age1, int exp1, int salary1) :Employee(surname1, age1, exp1, salary1) {
}
Developer::Developer() :Employee() {
}
Developer::~Developer() {
}
float Developer::calculateBonus(int value) {
	float wynik;
	int salary = getSalary();
	int exp = getExp();
	wynik = value + 0.2 * value * (salary + exp);
	return wynik;
}

TeamLeader::TeamLeader(string surname1, int age1, int exp1, int salary1) :Employee(surname1, age1, exp1, salary1) {
}
TeamLeader::TeamLeader() :Employee() {
}
TeamLeader::~TeamLeader() {
}
float TeamLeader::calculateBonus(int value) {
	float wynik;
	int salary = getSalary();
	int exp = getExp();
	wynik = value * (1 + salary + exp);
	return wynik;
}
void TeamLeader::show() {
	cout << "nazwisko: " << getSurname() << endl << "wiek: " << getAge() << endl << "doswiadczenie: " << getExp() << endl << "placa: " << getSalary() << endl << "Jestem Team Leader z " << getExp() << " letnim doswiadczenieniem" << endl;
}