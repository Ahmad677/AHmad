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
		cout << "File successfully created " << endl;
		for (int j = 0; j <= 7; j++)
		{

			fout << arr[j] << "  ";
		}
	}
	else
	{
		cout << "ERROR";
	}
	fout.close();
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
	fin.close();
	
	ofstream app;
	app.open("FUN.txt", ios::app);
		if (app)
		{
			int sum = 0;
			cout << "SUM APPENDED SUCCESSFULLY " << endl;
			for (int i = 0; i <= 5; i++)
			{
				sum = sum + arr[i];
			}
			app << sum;
			app.close();
			cout << " Sum is " << sum << endl;
		}
		else
		{
			cout << "error";
		}
}
