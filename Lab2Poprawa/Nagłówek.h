#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>
using namespace std;
class Employee {
private:
	string surname;
	int age;
	int exp;
	int salary;
public:
	Employee(string surname1, int age1, int exp1, int salary1);
	Employee();
	virtual ~Employee();
	virtual void show();
	virtual float calculateBonus(int value) = 0;
	int ageEmployment();
	string getSurname();
	int getAge();
	int getExp();
	int getSalary();
};

class Developer : public Employee {
public:
	Developer(string surname1, int age1, int exp1, int salary1);
	Developer();
	virtual ~Developer();
	virtual float calculateBonus(int value) override;
};

class TeamLeader : public Employee {
public:
	TeamLeader(string surname1, int age1, int exp1, int salary1);
	TeamLeader();
	virtual ~TeamLeader();
	virtual float calculateBonus(int value) override;
	virtual void show() override;
};
#endif
