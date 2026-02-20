#include <iostream>
#include "Header.h"

using namespace std;


struct  Person
{

	tm birthDay;
};


int main()
{
	//Person p1;
	//p1.birthDay.tm_year = 2000;

	//tm date1;  //stack
	//
	//date1.tm_year = 2025 - 1900;
	//date1.tm_mon = 0;
	//date1.tm_mday = 21;

	//tm date2;
	//date1.tm_year = 2026 - 1900;
	//date1.tm_mon = 0;
	//date1.tm_mday = 13;


	//tm date3;
	//date1.tm_year = 2024 - 1900;
	//date1.tm_mon = 1;
	//date1.tm_mday = 1;

	tm d1, d2, d3;
	InitDate(d1,2025, 1, 21);

	InitDate(d2, 2026, 2, 13);
	InitDate(d3, 2025, 12, 20);

	DateArr dateArr;

	AddLast(dateArr, new tm  (d1)); 
	AddLast(dateArr, new tm(d2));
	AddLast(dateArr, new tm(d3));
	////////////////////////////////////////////////////////////////////////
	//PrintDate(dateArr);
	//Sort(dateArr);
	//cout << "After sort: " << endl;
	//PrintDate(dateArr);
	/////////////////////////////////////////////////////////////////////
	SaveToFile("date.dat", dateArr);

	DateArr dateArrFromFile;

	ReadFromFile("date.dat", dateArrFromFile);
	cout << "Read rom file: " << endl;
	PrintDate(dateArrFromFile);




}

/////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!--
//// ДЗ   реалізувати фукції видалення і пошуку
///  запустити проект через cmd  передати в параметри назву файлу ("date.dat")  в файлі стартовий масив дат. 