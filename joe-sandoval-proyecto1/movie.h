#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
using namespace std;


class Movie {
private:
	string name;
	int year;
	int time;
	string country;
	int reviews;
	bool withData = false;
public:

	Movie();
	Movie(string name, int year, int time, string country, int reviews);
	
	void setName(string newName);
	void setYear(int newYear);
	void setTime(int newTime);
	void setCountry(string newCountry);
	void setReviews(int newReviews);
	void setWithData(bool newWithData);

	string getName();
	int getYear();
	int getTime();
	string getCountry();
	int getReviews();
	bool getWithData();
};

#endif // !MOVIE_H