#pragma once
#ifndef BOOKING_H
#define BOOKING_H	

#include "seat.h"
#include "sale.h"

#define MAXSIZE 5

class Booking {
private:
	
	double totalPrice;
	int bookingNumber;
	Sale sale;

public:

	Booking();
	~Booking();
	
	void setTotalPrice(double newTotalPrice); // no se usa
	void setBookingNumber(int newBookingNumber); // en uso
	void setIdCostumerFromSale(int); // es uso
					 
	double getTotalPrice(); // no se usa
	int getBookingNumber(); //es uso
	int getIdCosumerFromSale(); // en uso
	
};

#endif // !BOOKING_H
