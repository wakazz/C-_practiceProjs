/*
 * Project Planner
 * 	Input:
 * 		Time slot  [e.g. 9am - 5pm]
 * 		Tasks to do [N times -> task title, priority [1-3 - 1==highest], time [hrs]
 * 
 * 	Output:
 * 		print out time slot and task to do in thirty minute chunks on a line-by-line basis
 */
    
#include <iostream>
#include <string>
#include <tuple>

#include "time_date.h"
#include "planner_core.h"



using namespace std;

int main()
{
	string tdinfo = TimeandDate();
	Time currTime;
	Time nextTime;
	string stringTime;
	
	cout << "Project Planner:\n Today's INFO: " << tdinfo  << endl;
	
	cout << "Please input a time period in 24hr: test -> 09:00\n";
	cin >> stringTime;
	
	tie(currTime.hour, currTime.min) = parseTime2curr(stringTime);
	
	
	
	
	// Loop per stage/task
	nextTime.hour = 2;
	nextTime.min = 30;
	
	addtime(&nextTime, &currTime);
	
	cout << currTime.hour << endl;
	
	
	/* Input Section
			* Time period -> 9:5pm
			* Tasks: title, priority, length
			* 
			* Defaults: 
			* 	Break periods = 10 mins;
			* 	Longest work period = 1 hr 30 mins;
			* 
	*/
	
	
	// Output Section
	// Need to print blank template of planner
	
	
	
	
	
	
	return 0;
}



