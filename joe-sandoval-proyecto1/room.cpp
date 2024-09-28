#include "room.h"
#include "seat.h"


Room::Room() {
	
}

Room::~Room() {

}

void Room::setStateFromSeat(int rowNumber, int columnNumber, int state) { 
	seats[rowNumber][columnNumber].setState(state);
}

void Room::setRoomNumber(int newRoomNumber) {
	roomNumber = newRoomNumber;
}


int Room::getRoomNumber() {
	return roomNumber;
}

int Room::getStateFromSeat(int rowNumber, int columnNumber)
{
	return seats[rowNumber][columnNumber].getState(); 
}

void Room::setSaleIdCostumer(int rowNumber, int columnNumber,int newID) {
	seats[rowNumber][columnNumber].setSaleIdCostumer(newID);
}
void Room::setSaleCardNumber(int rowNumber, int columnNumber, int newCard) {
	seats[rowNumber][columnNumber].setSaleCard(newCard);
}
Seat Room::getSeat(int rowNumber, int columnNumber) {
	return seats[rowNumber][columnNumber];
}
float Room::getPrice() {
	return price;
}

void Room::setPrice(float newPrice) {
	price = newPrice;
}