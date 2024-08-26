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

void Seat::setPrice(float newPrice) {
	price = newPrice;
}

int Seat::getID() {
	return id;
}

int Seat::getState() {
	return state; 
}

float Seat::getPrice() {
	return price;
}