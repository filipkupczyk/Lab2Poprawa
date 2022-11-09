#include <iostream>
#include "Nagłówek.h"
using namespace std;

void whoWorksMoreThan5Years(Employee** tab, int size) {
	for (int i = 0; i < size; i++) {
		if (tab[i]->getExp() > 5)
			tab[i]->show();
	}
}

void howManyEarnLessThanBonus(Employee** tab, int size) {
	int srednia = 0;
	int pom = 0;
	for (int i = 0; i < size; i++) {
		pom = tab[i]->calculateBonus(i) + tab[i]->getSalary() + pom;
	}
	srednia = pom / size;
	for (int i = 0; i < size; i++) {
		if (tab[i]->calculateBonus(i) + tab[i]->getSalary() < srednia)
			tab[i]->show();
	}
	cout << "jeabnie " << srednia << endl;
}

int main() {
	int liczbaPracownikow = 2;
	Employee** dev = new Employee * [liczbaPracownikow];
	Employee** leader = new Employee * [liczbaPracownikow];
	int n = 2;
	for (int i = 0; i < liczbaPracownikow; i++) {
		dev[i] = new Developer("DEV" + to_string(i), 25 + i, 10 + i, 3000 + (i * 100));
		leader[i] = new TeamLeader("leader" + to_string(i), 30 + i, 4 + i, 6000 + (i * 100)); \
	}
	cout << "Zarabiajacy powyzej sredniej Team Leaderzy : ";
	cout << endl;
	howManyEarnLessThanBonus(leader, liczbaPracownikow);
	cout << endl;
	cout << "Zarabiajacy powyzej sredniej Developerzy: ";
	cout << endl;
	howManyEarnLessThanBonus(dev, liczbaPracownikow);
	cout << "Developerzy pracujacy wiecej niz 5 lat: " << endl;
	whoWorksMoreThan5Years(dev, liczbaPracownikow);
	cout << endl;
	cout << "TeamLeaderzy pracujacy wiecej niz 5 lat: " << endl;
	whoWorksMoreThan5Years(leader, liczbaPracownikow);
}
