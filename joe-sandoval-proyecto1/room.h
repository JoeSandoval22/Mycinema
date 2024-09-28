#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
#define SIZE 10

class Room {
private:
	int roomNumber; 
	Seat seats[SIZE][SIZE];
	float price;
public:
	Room();
	~Room();
	
	void setStateFromSeat(int rowNumber, int columnNumber, int state);
	void setRoomNumber(int newRoomNumber);
	
	int getRoomNumber();
	int getStateFromSeat(int rowNumber, int columnNumber);
	
	void setSaleIdCostumer(int,int,int);
	void setSaleCardNumber(int, int, int);
	Seat getSeat(int, int);

	float getPrice();
	void setPrice(float newPrice);
};

#endif // !ROOM_H
