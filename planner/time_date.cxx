#include "time_date.h"

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


std::string TimeandDate(){
	std::stringstream ss;
	
	std::chrono::system_clock::time_point today = std::chrono::system_clock::now();
	
	std::time_t tt;

	tt = std::chrono::system_clock::to_time_t ( today );
  
	ss << ctime(&tt);
	
	return ss.str();
}
