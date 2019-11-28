#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	ofstream fout;
	fout.open("FUN.txt", ios::out);
	if (fout)
	{
		cout << "File successfully created "<<endl;
		for (int j = 0; j <= 7; j++)
		{
			fout << arr[j] << "  ";
		}
		fout.close();
	}
	else
	{
		cout << "ERROR";
	}
	ifstream fin;
	fin.open("FUN.txt", ios::in);
	if (fin)
	{
		cout << "File accessed";
	}
	else
	{
		cout << "ERROR";
	}
}

