#pragma once
#ifndef BOOKING_H
#define BOOKING_H	

#include "schedule.h"
#include "seat.h"
#define MAXSIZE 5

class Booking {
private:
	Schedule schedule;
	Seat bookSeats[MAXSIZE];
	double totalPrice;
	int bookingNumber;

public:
};

#endif // !BOOKING_H
