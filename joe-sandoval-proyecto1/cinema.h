#pragma once
#ifndef CINEMA_H
#define CINEMA_H

#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "seat.h"
#include "sale.h"

class Cinema {
private:
	Movie cinemaMovies[5];
	Room cinemaRooms[4]; 
	Schedule cinemaSchedule[10];

public:
	Cinema(); 
	~Cinema();

	void addPrices();
	void addMovie(); 
	void showAvaibleMovies();
	void addSchedule();
	void showSchedule(int);
	void showRooms(int);
	void showStateSeats();
	void showSeats(int);
	void addBooking();
	void makeSale();
};
#endif // CINEMA_H