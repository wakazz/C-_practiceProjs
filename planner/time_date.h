// time_date.h

#ifndef TIME_DATE_H
#define TIME_DATE_H

#include <string>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <ctime>  

/*
class Time_date
{
	int dayGrab, monthGrab, yearGrab;
	
	public:
		std::string date();
		std::string currtime();
		
};
*/

struct Time{
	int hour, min; 
};

void addtime(Time *, Time *);

std::tuple <int, int> parseTime2curr(std::string time);

std::string TimeandDate();


#endif
