#pragma once
#ifndef SALE_H
#define SALE_H
#include "booking.h"


class Sale {
private:
	Booking booking;
	int idCostumer;
	int cardNumber;
public:
	Sale();
	Sale(int idCostumer, int cardNumber, Booking booking);
	~Sale();

	void setIdCostumer(int newIdCostumer);
	void setCardNumber(int newCardNumber);

	int getIdCostumer();
	int getCardNumber();

};
#endif // !SALE_H
