#include "movie.h"
#include <iostream>

Movie::Movie() {

}

Movie::Movie(string name, int year, int time, string country, int reviews) {
	this->name = name;
	this->year = year;
	this->time = time;
	this->country = country;
	this->reviews = reviews;
}

void Movie::setName(string newName) {
	name = newName;
}

void Movie::setYear(int newYear) {
	year = newYear;
}

void Movie::setTime(int newtime) {
	time = newtime;
}

void Movie::setCountry(string newCountry) {
	country = newCountry;
}

void Movie::setReviews(int newReviews) {
	reviews = newReviews;
}

void Movie::setWithData(bool newWithData) {
	withData = newWithData;
}

string Movie::getName() {
	return name;
}

int Movie::getYear() {
	return year;
}

int Movie::getTime() {
	return time;
}

string Movie::getCountry() {
	return country;
}

int Movie::getReviews() {
	return reviews;
}

bool Movie::getWithData() {
	return withData;
}
