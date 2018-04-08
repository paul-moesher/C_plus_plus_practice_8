//-----------------------------------------------------------------------------------------------------
// CS2010											Lab 9							Date:3/23/18
// Paul Moesher																		Class time: 10:30
//-----------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void checkAgeTime(int &Age, int &Time)
{
	int t;

	if (Age > Time)

	{
		t = Age;
		Age = Time;
		Time = t;
	}
}

void convertTime(int &time, int &minutes, int &seconds)

{
	if (time > 60)
	{
		minutes = time / 60;
		seconds = time % 60;
	}
	else
	{
		minutes = 0;
		seconds = time;
	}
}

int qualify(int age, int time)

{
	if (age < 30 && time <= 300)
		return 1;
	if (age >= 30 && time <= 360)
		return 2;
	if (age > 50 && time <= 420)
		return 3;

	return 0;
}

void qualifersByAge(int qualifyCode, int &q1, int &q2, int &q3, int &nonQualify)
{
	if (qualifyCode == 1)
		q1 = q1 + 1;
	else if (qualifyCode == 2)
		q2 = q2 + 1;
	else if (qualifyCode == 3)
		q3 = q3 + 1;
	else
		nonQualify = nonQualify + 1;
}


int main()
{
	string name;
	int age, time;
	int minutes, seconds;
	int qualifyCode;
	int q1 = 0, q2 = 0, q3 = 0, nonQualify = 0, totalrunners;
	ifstream inFile;


	// Open file
	inFile.open("lab6.txt");
	if (!inFile)
	{
		cout << "Error can not open file"
			<< endl;
		exit(1);
	}

		while (!inFile.eof())
	{
		inFile >> name;
	
	inFile.close();
	system("pause");
	return 0;
}
