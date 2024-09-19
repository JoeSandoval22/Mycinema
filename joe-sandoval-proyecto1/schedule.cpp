#include "schedule.h"
#include "movie.h"
#include "room.h"
Schedule::Schedule() {

}

Schedule::Schedule(int startHour, int endHour, Movie newMovie, Room newRoom) {
    this->startHour = startHour;
    this->endHour = endHour;
    this->movie = newMovie;
    this->room = newRoom;
}

Schedule::~Schedule() {

}

void Schedule::setStartHour(int newStarthour) {
    startHour = newStarthour;
}

void Schedule::setEndHour(int newEndhour) {
    endHour = newEndhour;
}

int Schedule::getStartHour() {
    return startHour;
}

int Schedule::getEndHour() {
    return endHour;
}

Movie Schedule::getMovie() {
    return movie;
}

Room Schedule::getRoom() {
    return room;
}