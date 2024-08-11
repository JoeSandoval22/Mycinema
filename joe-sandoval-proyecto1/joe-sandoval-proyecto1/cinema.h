#pragma once
#ifndef CINEMA_H
#define CINEMA_H

#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "sale.h"

#define SIZEROOM 4
#define SIZESPACE 50

class Cinema {
private:
	Movie cinemaMovies[10];
	Room cinemaRooms[4];     
	Schedule cinemaSchedule[10];  
	Booking cinemaBooking[50];
	Sale sales[50]; 
public:
	Cinema(); 

	void addMovie(); 

};
#endif // CINEMA_H