// Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;
void findGr()
{
	int counter = 0;
	string choice;
	cout << "Question 1" << endl;
	cout << endl;
	cout << "Tom (is,are,be,am) English" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "is") {
		counter++;
	}
	cout << "Question 2" << endl;
	cout << endl;
	cout << " I didn't (watched/watching/watch/not watched) TV last night" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "watch") {
		counter++;
	}
	cout << "Question 3" << endl;
	cout << endl;
	cout << " (Are/Is/Do/Have) there a restaurant near here?" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "Is") {
		counter++;
	}
	cout << "Question 4" << endl;
	cout << endl;
	cout << " Hurry up or we'll(lose/miss/fail/catch) our train" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "miss") {
		counter++;
	}
	cout << "Question 5" << endl;
	cout << endl;
	cout << "My mother(said/told/told to)me to buy some tea." << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "told") {
		counter++;
	}
	cout << "Question 6" << endl;
	cout << endl;
	cout << " I don't know many people(who/they/which) still smoke nowadays." << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "who") {
		counter++;
	}
	cout << endl;
	cout << "Question 7" << endl;
	cout << endl;
	cout << "I've never (going/go/went/been) in England" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "been") {
		counter++;
	}
	cout << "Question 8" << endl;
	cout << endl;
	cout << "You should(to ask/ask/asked/asking)for directions if you're lost." << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "ask") {
		counter++;
	}
	cout << "Question 9" << endl;
	cout << endl;
	cout << " I think I've got a cold, I can't stop(sneeze/sneezing/the sneeze/to sneeze)" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "sneezing") {
		counter++;
	}
	cout << "Question 10" << endl;
	cout << endl;
	cout << "You(must/must/must)give us 6" << endl;
	cout << " Your answer:";
	cin >> choice;
	if (choice == "must") {
		counter++;
	}
}

int main()
{
	findGr();
}

