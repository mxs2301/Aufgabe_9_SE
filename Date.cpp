#include "Date.h"
#include<stdio.h>

Date::Date(int Day, int Month, int Year):
Day(Day),
Month(Month),
Year(Year)
{}

void Date::printDate(){

	printf("%d.%d.%d", Day, Month, Year);
}
