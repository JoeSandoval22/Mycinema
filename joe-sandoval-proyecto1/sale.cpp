#include "sale.h"

Sale::Sale() {

}

Sale::~Sale() {

}

void Sale::setIdCostumer(int newIdCostumer) { 
	idCostumer = newIdCostumer; 
}

void Sale::setCardNumber(int newCardNumber) { 
	cardNumber = newCardNumber;
}


int Sale::getIdCostumer() {
	return idCostumer;
}
int Sale::getCardNumber() {
	return cardNumber;
}
