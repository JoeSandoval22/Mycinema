#include "cinema.h"
#include "movie.h"
#include <random>
using namespace std;
#define ROOMSIZE 3

Cinema::Cinema() {
	void addMovie();
	void showRooms(int);
	void addSchedule(int);
	int length = 4;
	Room room1, room2, room3, room4;
	Room rooms[4] = { room1,room2,room3,room4 };
	int index;
	for (index = 0; index < length; index++) {
		cinemaRooms[index].setRoomNumber(index + 1);
	} 
}

Cinema::~Cinema() {

}

void Cinema::addPrices() {
	for (int index = 0; index < ROOMSIZE; index++) {
		cinemaRooms[index].setPrice(5000.0);
	}
}

void Cinema::addMovie() {
	int moviesNumber = 0;
	cout << "Ingrese la cantidad de peliculas: " << endl;
	cin >> moviesNumber;

	if (moviesNumber < 1 || moviesNumber > 5) {
		cout << "Error." << endl;
	}

	string movieName = "", movieCountry = "";
	int movieTime = 0, movieYear = 0, movieReviews = 0, length;
	for (length = 0; length < moviesNumber; length++) {
		if (!cinemaMovies[length].getWithData()) {
			cout << "Nombre de la pelicula: " ; cin >> movieName;
			cout << "Anio de la pelicula: " ; cin >> movieYear;
			cout << "Duracion de la pelicula: " ; cin >> movieTime;
			cout << "Resenia de la pelicula del [1-10]: " ; cin >> movieReviews;
			cout << "Pais de la pelicula: " ; cin >> movieCountry; 
			 
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
	int length = 5;
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
		cout << "Sala " << cinemaRooms[index].getRoomNumber() << endl;
	}
}

void Cinema::showStateSeats() {
	int rows, columns, seats[SIZE][SIZE], index;
	std::random_device rd; 
	mt19937 gen(rd());
	for (index = 0; index < ROOMSIZE; index++) {
		for (rows = 0; rows < SIZE; rows++) {
			for (columns = 0; columns < SIZE; columns++) {
				std::uniform_int_distribution <> distrib(0, 2);
				seats[rows][columns] = distrib(gen);
				cinemaRooms[index].setStateFromSeat(rows, columns, seats[rows][columns]);
			}
		}
	}
}

void Cinema::showSeats(int room) {
	int rows, columns;
	for (rows = 0; rows < SIZE; rows++) {
		for (columns = 0; columns < SIZE; columns++) {

			if (cinemaRooms[room].getStateFromSeat(rows, columns) == 0) {
				cout << " D ";
			} 
			if (cinemaRooms[room].getStateFromSeat(rows, columns) == 1) { 
				cout << " R ";
			}
			if (cinemaRooms[room].getStateFromSeat(rows, columns) == 2) { 
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

void Cinema::showSchedule(int length) {
	int index;
	for (index = 0; index < length; index++) {
		cinemaSchedule[index];
	}
}

void Cinema::addBooking() {
	int rows, columns, length, index, seatsOfBooking = 0, roomOfBooking = 0, iDcostumer = 0; 
	bool band = false;
	do {
		cout << endl;
		for (length = 0; length < 4; length++) {
			    cout << "Sala " << length + 1 << "\n\n";
				cout << "Pelicula: " << cinemaSchedule[length].getMovie().getName() << endl;
				cout << "Hora de estreno: " << cinemaSchedule[length].getStartHour() << endl;
				cout << "Hora de finalizacion: " << cinemaSchedule[length].getEndHour() << endl;
				cout << endl;
		}
		cout << "Digite en cual sala desea hacer reservacion [1-4]: " << endl;
		cin >> roomOfBooking;
		cout << endl;
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
		showSeats(roomOfBooking - 1);
		for (rows = 0; rows < seatsOfBooking; rows++) { 
			for (columns = 0; columns < seatsOfBooking; columns++) {
				cout << "Ingrese la fila y la columna: " << endl;
				cin >> rows >> columns; 
				if (rows < 0 || rows >= SIZE || columns < 0 || columns >= SIZE) {
					cout << "Error, posición de asiento invalida. " << endl;
					return;
				}
				if (cinemaRooms[roomOfBooking - 1].getStateFromSeat(rows, columns) == 0) {
					string option1;
					cout << "Desea reservar asiento." << endl;
					cout << "a. " << "Si" << endl;
					cout << "b. " << "No" << endl;
					cin >> option1;
					if (option1 == "a") {
						cinemaRooms[roomOfBooking - 1].setStateFromSeat(rows, columns, 1);
						cout << endl;
						cout << "Digite su numero de cedula: " << endl;
						cin >> iDcostumer; 
						cinemaRooms[roomOfBooking - 1].setSaleIdCostumer(rows, columns, iDcostumer);
	
						cout << "Reservacion exitosa" << endl;
					}
					if (option1 == "b") {
						cout << endl;
						cout << "Reservación cancelada. " << endl;
					}
				}
				if (cinemaRooms[roomOfBooking - 1].getStateFromSeat(rows, columns) == 1) { 
					cout << "Asiento reservado, por favor elija otro.\n" << endl;
				}
				if (cinemaRooms[roomOfBooking - 1].getStateFromSeat(rows, columns) == 2) {
					cout << "Asiento vendido, por favor elija otro.\n" << endl;
				}
			}
		}
	} while (!band);	
}

void Cinema::makeSale() {
	bool pay = false;
	int idCostumer = 0;
	int bookingNumber = 0;
	float totalPrice=0.0;
	int card;
	cout << "Digite su numero de cedula: ";
	cin >> idCostumer;
	for (int index = 0; index < ROOMSIZE; index++) {
		for (int rows = 0; rows < SIZE; rows++) {
			for (int columns = 0; columns < SIZE; columns++) {
<<<<<<< HEAD
				if (cinemaRooms[index].getSeat(rows, columns).getSale().getIdCostumer() == idCostumer) {
=======
				if (cinemaRooms[index].getSeat(rows, columns).getSale().getIdCostumer()) {
>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
					totalPrice = totalPrice + cinemaRooms[index].getPrice();
					cout << "Sala: " << cinemaRooms[index].getRoomNumber() << endl;
					cout << "Asiento: " << rows<<"-"<<columns << endl;
					cout << "Precio: " << cinemaRooms[index].getPrice() << endl;
					cout << "---------------------------" << endl;
					pay = true;
				}
			}
		}
	}
	if (pay == true) {
<<<<<<< HEAD
		string option;
		int index;
=======
		string opcion;
>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
		cout << "El precio total es: " << totalPrice << endl;
		cout << "Desea realizar el pago?"<<endl;
		cout << "a. " << "Si" << endl;
		cout << "b. " << "No" << endl;
<<<<<<< HEAD
		cin >> option;
		for (index = 0; index < ROOMSIZE; index++) {
			for (int rows = 0; rows < SIZE; rows++) {
				for (int columns = 0; columns < SIZE; columns++) {
					if (cinemaRooms[index].getSeat(rows, columns).getSale().getIdCostumer() == idCostumer) {
						if (option == "a") {
=======
		cin >> opcion;
		for (int index = 0; index < ROOMSIZE; index++) {
			for (int rows = 0; rows < SIZE; rows++) {
				for (int columns = 0; columns < SIZE; columns++) {
					if (cinemaRooms[index].getSeat(rows, columns).getSale().getIdCostumer() == idCostumer) {
						if (opcion == "a") {
>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
							cout << "Digite su numero de tarjeta de credito o debito: ";
							cin >> card;
							cinemaRooms[index].setSaleCardNumber(rows, columns, card);
							cinemaRooms[index].setStateFromSeat(rows, columns, 2);

						}
<<<<<<< HEAD
						if (option == "b") {
=======
						if (opcion == "b") {
>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
							cinemaRooms[index].setStateFromSeat(rows, columns, 0);
						}
					}
				}
			}
		}
<<<<<<< HEAD
		if (option == "a") {
			cout << "Pago realizado exitosamente" << endl;
		}
		if (option == "b") {
=======
		if (opcion == "a") {
			cout << "Pago realizado exitosamente" << endl;
		}
		if (opcion == "b") {
>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
			cout << "Se cancelo la reserva de los asientos" << endl;
		}

	}
	if (pay == false) {
		cout << "Este cliente no ha reservado asientos" << endl;
	}
<<<<<<< HEAD
=======

>>>>>>> 9fb795f004c7b90d8bd6c6ebb1a152b9ad1aa840
}