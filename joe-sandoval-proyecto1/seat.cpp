#include "seat.h"

Seat::Seat() {

}

Seat::~Seat() {

}

void Seat::setID(int newID) {
	id = newID;
}

void Seat::setState(int newState) {
	state = newState;
}

int Seat::getID() {
	return id;
}

int Seat::getState() {
	return state; 
}

void Seat::setSaleIdCostumer(int newIdCostumer) {
	sale.setIdCostumer(newIdCostumer);
}
void Seat::setSaleCard(int newCard) {
	sale.setCardNumber(newCard);
}

Sale Seat::getSale() {
	return sale;
}