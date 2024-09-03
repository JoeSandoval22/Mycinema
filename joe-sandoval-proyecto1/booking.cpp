#include "booking.h"

Booking::Booking() {

}

Booking::Booking(double totalPrice, int bookingNumber, Schedule schedule) {
	this->totalPrice = totalPrice;
	this->bookingNumber = bookingNumber;
	this->schedule = schedule;
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

Schedule Booking::getSchedule() {
	return schedule;
}