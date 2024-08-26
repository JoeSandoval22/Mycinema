#include "booking.h"

Booking::Booking() {

}

Booking::~Booking() {

}


void Booking::setTotalPrice(double newTotalPrice) {
	totalPrice = newTotalPrice;
}

void Booking::setBookingNumber(int newBookingNumber) {
	bookingNumber = newBookingNumber;
}

double Booking::getTotalPrice() {
	return totalPrice;
}

int Booking::getBookingNumber() {
	return bookingNumber;
}

void Booking::setIdCostumer(int newIdCostumer) {
	idCostumer = newIdCostumer;
}

void Booking::setCardNumber(int newCardNumber) {
	cardNumber = newCardNumber;
}

int Booking::getIdCostumer() {
	return idCostumer;
}

int Booking::getCardNumber() {
	return cardNumber;
}