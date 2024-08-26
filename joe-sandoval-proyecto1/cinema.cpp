#include "cinema.h"
#include <random>
using namespace std;

Cinema::Cinema() {

}

Cinema::~Cinema() {

}


void Cinema::addMovie() {
	int moviesNumber = 0;
	cout << "Ingrese el numero de pelis: " << endl;
	cin >> moviesNumber;

	if (moviesNumber < 1 || moviesNumber > 10) {
		return;
	}

	string movieName = "", movieCountry = "";
	int movieTime = 0, movieYear = 0, movieReviews = 0, length;
	for (length = 0; length < moviesNumber; length++) {
		if (!cinemaMovies[length].getWithData()) {
			cout << "Nombre de la pelicula: " << endl; cin >> movieName;
			cout << "Anio de la pelicula: " << endl; cin >> movieYear;
			cout << "Duracion de la pelicula: " << endl; cin >> movieTime;
			cout << "Resenia de la pelicula: " << endl; cin >> movieReviews;
			cout << "Pais de la pelicula: " << endl; cin >> movieCountry; 

			cinemaMovies[length].setName(movieName);
			cinemaMovies[length].setYear(movieYear);
			cinemaMovies[length].setTime(movieTime);
			cinemaMovies[length].setReviews(movieReviews);
			cinemaMovies[length].setCountry(movieCountry);
			cinemaMovies[length].setWithData(true);
		}
	}
}

void Cinema::showRooms(int length) {
	int seats[SIZE][SIZE], rows, columns;
	string rooms[4] = { "Sala 1","Sala 2","Sala 3","Sala 4" };
	int index;
	for (index = 0; index < length; index++) {
		cinemaRooms[index].setRoomNumber(rooms[index]);
	}

	std::random_device rd;
	mt19937 gen(rd());
	for (rows = 0; rows < SIZE; rows++) {
		for (columns = 0; columns < SIZE; columns++) {
			std::uniform_int_distribution <> distrib(0, 2);
			seats[rows][columns] = distrib(gen);
			roomSeats[rows][columns].setState(seats[rows][columns]);
			if (seats[rows][columns] == 0) {
				cout << " D ";
			}
			if (seats[rows][columns] == 1) {
				cout << " R ";
			}
			if (seats[rows][columns] == 2) {
				cout << " V ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "D para disponible" << endl;
	cout << "R para reservado" << endl;
	cout << "V para vendido" << endl;
	cout << "\n";
}

void Cinema::showSchedules() {

}

void Cinema::addBooking() {
	int rows, columns, index, length, seatsOfBooking = 0, roomOfBooking = 0;
	cout << "Digite en cual sala desea hacer reservación [1-4]: " << endl;
	cin >> roomOfBooking;
	cout << "Ingrese la cantidad de asientos que desea reservar [1-5]: " << endl;
	cin >> seatsOfBooking;
	if (roomOfBooking < 1 || roomOfBooking > 4) {
		return;
	}
	if (seatsOfBooking < 1 || seatsOfBooking > 5) {
		return;
	}

	showRooms(4);

	for (index = 0; index < seatsOfBooking; index++) {
		cout << "Ingrese la fila y la columna: " << endl;
		cin >> rows >> columns;
		if (rows < 0 || rows >= SIZE || columns < 0 || columns >= SIZE) {
			cout << "Error, posición de asiento invalida " << endl;
			return;
		}
    
	}
}
