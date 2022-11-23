
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class fstreamMethods
{
public:
	void fileWrite(){
		string w;
		fstream f1;
		
		f1.open("prova.txt", ios::out);
		cout << "what do you want to write?" << endl;
		getline(cin, w);
		f1 >> w;

		f1.close();
	}
	
	void fileRead(){
		string s;
		ifstream f2;

		f2.open("prova.txt");

		while (getline(f2, s)) { cout << s << endl; }

		f2.close();
	}
	
};

int main()
{
	int choice, i = 0;
	
	while (true){
		
		fstreamMethods giorgio;
		cout << "Scrivere[1]\nAprire[2]" << endl;
		cin >> choice;
		switch (choice){
		case 1:
			giorgio.fileWrite();
			cout << "1" << endl;
			break;
		case 2:
			giorgio.fileRead();
			cout << "2" << endl;
			break;
		default:
			cout << "scegli tra 1 e 2" << endl;
			break;
		}

	}
}
