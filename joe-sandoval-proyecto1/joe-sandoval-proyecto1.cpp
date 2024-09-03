#include <iostream>
#include "cinema.h"
using namespace std;

void aboutTheCreator() {
	cout << "\n";
	cout << "System designed by Joe Sandoval" << endl;
	cout << "Systems engineering student of the National University" << endl;
	cout << "\n\n\n";
}
void mainMenu() {
	Cinema CINEMA;
	int options, subOptions, subOptions2, subOptions3, subOptions4;
	do {
		cout << "1.Achivo " << endl;
		cout << "2.Mantenimiento" << endl;
		cout << "3.Reserva" << endl;
		cout << "4.Venta" << endl;
		cout << "\n";
		cin >> options;

		switch (options) {
		case 1:
			cout << "Archivo" << endl;
			do {
				cout << "1) Acerca del creador" << endl;
				cout << "2) Salir al menu principal" << endl;
				cin >> subOptions;
				switch (subOptions) {
				case 1: aboutTheCreator();
					break;
				case 2:
					return;
					break;
				default:
					break;
				}
			} while (subOptions != 2);
			break;

		case 2:
			cout << "Mantenimiento" << endl;
			do {
				cout << "1) Peliculas" << endl;
				cout << "2) Salas" << endl;
				cout << "3) Horarios" << endl;
				cin >> subOptions2;
				switch (subOptions2) {
				case 1:
					CINEMA.addMovie();
					break;
				case 2:
					CINEMA.showStateSeats();
					break;
				case 3:
					CINEMA.addSchedule();
					break;
				default:
					break;
				}
			} while (subOptions2 != 3);
			break;

		case 3:
			cout << "Reserva" << endl;
			do {
				cout << "1) Peliculas" << endl;
				cout << "2) Salir" << endl;
				cin >> subOptions3;
				switch (subOptions3) {
				case 1:
					break;
				case 2:
					break;
				default:
					break;
				}
			} while (subOptions3 != 2);
			break;


		case 4:
			break;

		default:
			break;
		}
	} while (options != 4);
}

int main() {
	
	mainMenu();
	return 0;
}	