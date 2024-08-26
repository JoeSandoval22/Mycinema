#include "room.h"
#include "seat.h"


Room::Room() {
	
}

Room::~Room() {

}

void Room::setRoomNumber(string newRoomNumber) {
	roomNumber = newRoomNumber;
}

string Room::getRoomNumber() {
	return roomNumber;
}
