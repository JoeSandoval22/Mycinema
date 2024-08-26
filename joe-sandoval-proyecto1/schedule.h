#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include "movie.h"
#include "room.h"
using namespace std;

class Schedule {
private:
	int date;
	int startHour;
	int endHour;
	Movie movie;
	Room room;
public:
	Schedule();
	~Schedule();

	void setDate(int newDate);
	void setStartHour(int newStarHour);
	void setEndHour(int newEndHour);

	int getDate();
	int getStartHour();
	int getEndHour();
};

#endif // !SCHEDULE_H
