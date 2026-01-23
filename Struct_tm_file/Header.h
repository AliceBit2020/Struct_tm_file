#pragma once

#include <iostream>

using namespace std;


struct DateArr
{
	tm** arr = nullptr;
	rsize_t size = 0;
};
void InitDate(tm& date,int y, int m, int d);
void PrintDate(const tm& date);
void PrintDate(const DateArr& arrDate);

void InsertByIndex(DateArr& arrDate, tm* newDate, int index);
void AddLast(DateArr& arrDate, tm* newDate);
void DellByIndex(DateArr& arrDate, tm* newDate, int index);
int FindFirst(DateArr& arrDate, tm* date);
bool CompareDate(tm* date1, tm* date2);
void Sort(DateArr& arrDate);

void SaveToFile(const char* filePath, const DateArr&);
void ReadFromFile(const char* filePath,  DateArr&);