#pragma once
#ifndef SALE_H
#define SALE_H


class Sale {
private:
	int idCostumer;
	int cardNumber;
public:
	Sale();
	~Sale();

	void setIdCostumer(int newIdCostumer);
	void setCardNumber(int newCardNumber);

	int getIdCostumer();
	int getCardNumber();

};
#endif // !SALE_H
