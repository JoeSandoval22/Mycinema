#include "schedule.h"

Schedule::Schedule() {

}

Schedule::Schedule(int startHour, int endHour, Movie movie, Room room) {
    this->startHour = startHour;
    this->endHour = endHour;
    this->movie = movie;
    this->room = room;
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