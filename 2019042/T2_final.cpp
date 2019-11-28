#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char name;
	int age;
	cout << "ENTER YOur name :";
	cin >> name;
	cout << "Enter age";
	cin >> age;
	ofstream fout;
	fout.open("fun", ios::out);
	if (fout)
	{
		fout << name;
		fout << age;

	}
	else
	{
		cout << "Error";
	}
	fout.close();

	ifstream fin;
	fin.open("FUN", ios::in);
		if (fin)
		{
			cout << " REadinf from file";
			fin >>  name >> age;
			cout << name << age;
			fin.close();
	}
		else
		{
			cout << "ERROR";
		}
		fin.close();
}

