#include "cinema.h"
#include "movie.h"
#include <random>
using namespace std;

Cinema::Cinema() {
	void addMovie();
	void showRooms(int);
	void addSchedule(int);
	int length = 4;
	Room room1;
	//Room rooms[4] = { room1,room1,room1,room1 };
	int index;
	for (index = 0; index < length; index++) {
		cinemaRooms[index].setRoomNumber("Sala " + index + 1);
	} 
}

Cinema::~Cinema() {

}

//por arreglar
void Cinema::addMovie() {
	int moviesNumber = 0;
	cout << "Ingrese la cantidad de peliculas: " << endl;
	cin >> moviesNumber;

	if (moviesNumber < 1 || moviesNumber > 5) {
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

void Cinema::showAvaibleMovies() {
	int length = 10;
	int index;
	for (index = 0; index < length; index++) {
		cout << "Pelicula: " << cinemaMovies[index].getName();
		cout << "Anio: " << cinemaMovies[index].getYear();
		cout << "Duracion: " << cinemaMovies[index].getTime();
		cout << "Resenia: " << cinemaMovies[index].getReviews();
		cout << "Pais: " << cinemaMovies[index].getCountry();
		cinemaMovies[index].getWithData();
	}
}

void Cinema::showRooms(int length) {
	int index;
	for (index = 0; index < length; index++) {
		cout<< "Sala " << cinemaRooms[index].getRoomNumber() << endl;
	}
}
//por arreglar si no está bien
void Cinema::showStateSeats() {
	int rows, columns, seats[SIZE][SIZE];
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
//listo
void Cinema::addSchedule() {
	Schedule schedule1(1, 3, cinemaMovies[0], cinemaRooms[0]); 
	cinemaSchedule[0] = schedule1;
	Schedule schedule2(1, 4, cinemaMovies[1], cinemaRooms[1]); 
	cinemaSchedule[1] = schedule2; 
	Schedule schedule3(1, 3, cinemaMovies[2], cinemaRooms[2]);  
	cinemaSchedule[2] = schedule3;
	Schedule schedule4(1, 3, cinemaMovies[3], cinemaRooms[3]); 
	cinemaSchedule[3] = schedule4; 
}

void Cinema::addPrice() {
	
}

void Cinema::addBooking() {
	int rows, columns, index, length, seatsOfBooking = 0, roomOfBooking = 0, seats[SIZE][SIZE];
	bool band = false;
	do {
		showRooms(4);

		cout << "Pelicula y horario en la sala " << roomOfBooking << ": ";
		for (length = 0; length < 5; length++) {	
				cout << "Pelicula: " << cinemaSchedule[length].getMovie().getName() << endl;
				cout << "Hora de estreno: " << cinemaSchedule[length].getStartHour() << endl;
				cout << "Hora de finalizacion: " << cinemaSchedule[length].getEndHour() << endl;	
		}
		cout << "Digite en cual sala desea hacer reservación [1-4]: " << endl;
		cin >> roomOfBooking;
		cout << "Ingrese la cantidad de asientos que desea reservar [1-5]: " << endl;
		cin >> seatsOfBooking;
		if (roomOfBooking < 1 || roomOfBooking > 4) {
			cout << "Datos invalidos. Ingrese un valor entre 1 y 4" << endl;
		}
		if (seatsOfBooking < 1 || seatsOfBooking > 5) {
			cout << "Datos invalidos. Ingrese un valor entre 1 y 5" << endl;
		}
		else {
			band = true;
		}

		for (index = 0; index < seatsOfBooking; index++) {
			cout << "Ingrese la fila y la columna: " << endl;
			cin >> rows >> columns;
			if (rows < 0 || rows >= SIZE || columns < 0 || columns >= SIZE) {
				cout << "Error, posición de asiento invalida " << endl;
				return;
			}

			if (cinemaRooms[roomOfBooking - 1].) {

			}
		}
	} while (!band);
	
	
  	
} 