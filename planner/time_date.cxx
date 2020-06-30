#include "time_date.h"
#include <tuple>
/*
std::string Time_date::date(){
		
	std::stringstream ss;
	
	// https://stackoverflow.com/questions/50335606/show-day-month-and-year-with-stdchrono
	auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	
	ss << std::put_time(std::localtime(&now), "%Y-%m-%d");
	
	return ss.str();
}

std::string Time_date::TimeandDate(){
	std::stringstream ss;
	
	std::chrono::system_clock::time_point today = std::chrono::system_clock::now();
	
	std::time_t tt;

	tt = std::chrono::system_clock::to_time_t ( today );
  
	ss << ctime(&tt);
	
	return ss.str();
}
*/


void addtime(Time * time1, Time * time2){
	time2 -> hour += time1 -> hour;
	time2 -> min += time1 -> min;
	
	if (time2 -> min >= 60){
		time2 -> hour += 1;
		time2 -> min -= 60;
	}
}

std::tuple <int, int> parseTime2curr(std::string time){
	int hr, mn;
	// parse string
	std::string delimiter = ":";
	hr = std::stoi(time.substr(0, time.find(delimiter)));
	mn = std::stoi(time.substr(0, time.find(delimiter)));
	return std::make_tuple(hr, mn);
}



std::string TimeandDate(){
	std::stringstream ss;
	
	std::chrono::system_clock::time_point today = std::chrono::system_clock::now();
	
	std::time_t tt;

	tt = std::chrono::system_clock::to_time_t ( today );
  
	ss << ctime(&tt);
	
	return ss.str();
}
