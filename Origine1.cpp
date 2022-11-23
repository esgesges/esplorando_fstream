#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string testo;
	getline(cin, testo)
	cout << testo << endl;
}



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class fstreamMethods
{
public:
	void fileWrite()
	{

		string w;
		ofstream f1;
		cout << "what do you want to write?" << endl;
		getline(cin, w);
		f1.open("prova.txt");
		f1 << w;
		f1.close();
	}
	void fileRead()
	{
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
	fstreamMethods giorgio;
	while (i == 0)
	{
		cout << "Scrivere[1]\nAprire[2]" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			giorgio.fileWrite();
			break;
		case 2:
			giorgio.fileRead();
		default:
			cout << "scegli tra 1 e 2" << endl;
			break;
		}

	}
}
