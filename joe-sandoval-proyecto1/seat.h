#pragma once
#ifndef SEAT_H
#define SEAT_H
#include "sale.h"
 // !SEAT_H

#include <iostream>
using namespace std;

class Seat {
private:
	int id;
	int state;
	Sale sale;
public:
	Seat();
	~Seat();

	void setID(int newID); 
	void setState(int newState);

	int getID();
	int getState();

	void setSaleIdCostumer(int);
	void setSaleCard(int);
	Sale getSale();
};

#endif