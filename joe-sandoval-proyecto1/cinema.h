#pragma once
#ifndef CINEMA_H
#define CINEMA_H

#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "seat.h"

#define SIZEROOM 4
#define SIZESPACE 50

class Cinema {
private:
	Movie cinemaMovies[100];
	Room cinemaRooms[4]; 
	Schedule cinemaSchedule[10];
	Booking cinemaBooking[50];
	Seat roomSeats[10][10];
	Seat maxBookingSeats[5];
public:
	Cinema(); 
	~Cinema();

	void addMovie(); 
	void showRooms(int);
	void showSchedules();
	void addBooking();

	
};
#endif // CINEMA_H