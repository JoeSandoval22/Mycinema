#pragma once
#ifndef BOOKING_H
#define BOOKING_H	

#include "schedule.h"
#include "seat.h"

#define MAXSIZE 5

class Booking {
private:
	Schedule schedule;
	double totalPrice;
	int bookingNumber;
public:

	Booking();
	Booking(double totalPrice, int bookingNumber, Schedule schedule);
	~Booking();
	
	void setTotalPrice(double newTotalPrice);
	void setBookingNumber(int newBookingNumber);

	double getTotalPrice();
	int getBookingNumber();

	Schedule getSchedule();
};

#endif // !BOOKING_H
