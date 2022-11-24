
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

class fstreamMethods
{
public:
	void fileWrite(){
		
		string w;
		fstream f1;
		
		f1.open("prova.txt", ios::out );//| ios::app
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\twhat do you want to write?" << endl;
		Sleep(5000);
		system("cls");
		getline(cin, w);
		f1 << w;

		f1.close();
	}
	
	void fileRead(){
		string s;
		ifstream f2;

		f2.open("prova.txt");

		while (!(f2.eof())) { 
			f2 >> s;
			cout << s << endl; 
			
		}
		cin.ignore();
		f2.close();
	}
		
};

int main()
{
	int choice, i = 0;
	string ww;
	system("color b0");

	while (true){
		system("cls");
		fstreamMethods giorgio;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrite[1]\n\t\t\t\tRead[2]" << endl;
		getline(cin, ww);
		choice = stoi(ww);
		switch (choice){
		case 1:
			system("cls");
			giorgio.fileWrite();
		break;
		case 2:
			system("cls");
			giorgio.fileRead();
		break;

		default:
			system("cls");
			cout << "scegli tra 1 e 2" << endl;
		break;
		}

	}
}
