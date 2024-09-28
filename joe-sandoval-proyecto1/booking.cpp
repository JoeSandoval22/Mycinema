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

void Booking::setIdCostumerFromSale(int newIdCostumer) {
	sale.setIdCostumer(newIdCostumer);
}

double Booking::getTotalPrice() {
	return totalPrice;
}

int Booking::getBookingNumber() {
	return bookingNumber;
}

int Booking::getIdCosumerFromSale()
{
	return sale.getIdCostumer();
}

