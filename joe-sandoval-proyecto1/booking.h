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
	int idCostumer;
	int cardNumber;
	

public:

	Booking();
	~Booking();
	
	void setTotalPrice(double newTotalPrice);
	void setBookingNumber(int newBookingNumber);

	double getTotalPrice();
	int getBookingNumber();

	void setIdCostumer(int newIdCostumer);
	void setCardNumber(int newCardNumber);

	int getIdCostumer();
	int getCardNumber();
};

#endif // !BOOKING_H
