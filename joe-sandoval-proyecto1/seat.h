#pragma once
#ifndef SEAT_H
#define SEAT_H
 // !SEAT_H

#include <iostream>
using namespace std;

class Seat {
private:
	int id;
	int state;
	float price;
public:
	Seat();
	~Seat();

	void setID(int newID); 
	void setState(int newState);
	void setPrice(float newPrice);

	int getID();
	int getState();
	float getPrice();
};

#endif