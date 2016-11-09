/////////////
//Anna Tran
//CS 172 Sec 1
//13.2
/////////////

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	//Prompt user to enter in filename
	//"Babynameranking2010.txt"
	ifstream fin;
	string filename;
	cout << "Enter the filename" << endl;
	cin >> filename;
	fin.open(filename);
	//Check if file opened 
	if (fin.fail())
	{
		cout << "Can't open file" << endl;
		return 0;
	}
	//Count characters in file
	int count=0;
	while (!fin.eof())
	{
		fin.get();
		count++;
	}
	fin.close();
	cout << "The number of characters for this file is : " << count << endl;
}