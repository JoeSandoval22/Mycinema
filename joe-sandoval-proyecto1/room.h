#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
#define SIZE 10

class Room {
private:
	string roomNumber;
		
public:
	Room();
	~Room();
	void setRoomNumber(string newRoomNumber);

	string getRoomNumber();
	
};

#endif // !ROOM_H
