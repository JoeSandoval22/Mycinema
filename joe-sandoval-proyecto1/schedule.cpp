#include "schedule.h"

Schedule::Schedule() {

}
Schedule::~Schedule() {

}

void Schedule::setDate(int newDate) {
    date = newDate;
}

void Schedule::setStartHour(int newStarthour) {
    startHour = newStarthour;
}

void Schedule::setEndHour(int newEndhour) {
    endHour = newEndhour;
}

int Schedule::getDate() {
    return date;
}

int Schedule::getStartHour() {
    return startHour;
}

int Schedule::getEndHour() {
    return endHour;
}