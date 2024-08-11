#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
#define SIZE 10

class Room {
	private:
		int id;
		int seatsNumber;
		double price;
		Seat roomSeats[SIZE][SIZE];
};

#endif // !ROOM_H
