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
		cout << "The retrieved array is : ";
		for (int j = 0; j <= 7; j++)
		{
			fout << arr[j] << "  ";
		}
		cout << "File accessed";
	}
	else
	{
		cout << "ERROR";
	}
	ifstream fin;
	fout.open("FUN.txt", ios::out)
	{
		for (i = 0; i < 7; i++)
		{
			cout << arr[i];
		}
	}
	ofstream app;
	app.open ("FUN.txt", ios::app)
		if (app)
		{
			cout << "SUM APPENDED SUCCESSFULLY " << endl;
			for (int i = 0; i <= 5; i++)
			{
				sum = sum + arr[i];
			}
			app << sum;
			cout 
			app.close();
			cout << " Sum is " << endl;
		}
		else
		{
			cout << "error";
		}
}

