#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include "movie.h"
#include "room.h"
using namespace std;

class Schedule {
private:
	
	int startHour;
	int endHour;
	Movie movie;
	Room room;
public:
	Schedule();
	Schedule(int startHour, int endHour, Movie movie, Room room);
	~Schedule();

	void setStartHour(int newStarHour);
	void setEndHour(int newEndHour);

	int getStartHour();
	int getEndHour();
	Movie getMovie();
	Room getRoom();
};

#endif // !SCHEDULE_H
