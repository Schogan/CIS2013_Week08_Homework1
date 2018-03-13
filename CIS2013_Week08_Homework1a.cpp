#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
	string line;
	char cont = 'y';
	ifstream in_a;
	string level_select;
	bool level_selection = true;
	
	
	while (level_selection){
		cout << "Please select a level from the list:" << endl;
		cout << "Level1.dat" << endl;
		cout << "Level2.dat" << endl;
		cout << endl;
		cin >> level_select;
	
	
		in_a.open(level_select);
	
		if(in_a.fail()){
			cout << "Something really awful happened here with your selection!" << endl;
			cout << "Choose another level!"<< endl;
		}
		else
			level_selection = false;
	}
		
		if (in_a.is_open()){
		
			while (getline(in_a,line)) {
				cout << line << endl;
			}
			in_a.close();
		}
	
	return 0;
}