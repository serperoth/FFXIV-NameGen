#include <string>
#include <iostream>
//#include "namelists.h"
//#include "functions.h"

using namespace std;

int main(void){
	int race, subrace, gender;
	//Message to ask the user to input race, as a number from 1-5
	do{
		cin >> race; //Needs to make sure an int is indeed inputted
		if !(race > 0 && race < 6){
			cout << "Please input a value between 1 and 5." << endl;
		}
		while (race > 0 && race < 6);
	}
	switch (race){
		case 1:	//Hyur
			cout << "Please input 1 for Midlander, or 2 for Highlander: ";
			break;
		case 2: //Miqo'te
			cout << "Please input 1 for Sun Seekers, or 2 for Moon Keepers: ";
			break;
		case 3: //Elezen
			cout << "Please input 1 for Wildwood, or 2 for Duskwrights: ";
			break;
		case 4: //Roegadyn
			cout << "Please input 1 for Sea Wolves, or 2 for Hellsguard: ";
			break;
		case 5: //Lalafell
			cout << "Please input 1 for Plainsfolk, or 2 for Dunesfolk: "

	}
	do{
		cin >> subrace; //Needs to make sure an int is indeed inputted
		if !(subrace > 0 && subrace < 2){
			cout << "Please input a value between 1 and 2." << endl;
		}
		while (subrace > 0 && subrace < 2);
	}
	do{
		cin >> gender; //Needs to make sure an int is indeed inputted
		if !(gender > 0 && gender < 2){
			cout << "Please input a value between 1 and 2." << endl;
		}
		while (gender > 0 && gender < 2);
	}
	GenerateName(race, subrace, gender);
	return 0;
}

void GenerateName(int race, int subrace, int gender){
	String first_name, last_name;


}