#pragma once
#ifndef SEAT_H
#define SEAT_H
 // !SEAT_H

#include <iostream>
using namespace std;

class Seat {
private:
	int id;
	string state;
public:
	Seat();

	void setID(int newID);
	void setState(string newState);

	int getID();
	string getState();
};

#endif