#pragma once
#include <string>

class Snack {
public:
	Snack(const std::string name);
	Snack(std::string name, double calories, double price);
	std::string getName() const;
	void setName(std::string name);
	double getPrice() const;
	void setPrice(double price);
	double getCalories() const;
	void setCalories(double calories);
	~Snack();

private:
	std::string name;
	double price;
	double calories;
};


class SnackSlot {
public:
	SnackSlot(int snack);
	~SnackSlot();
	int getSnackSlot() const;
	void setSnackSlot(int snack);
	void addSnack(Snack* snack);

	
private:
	int countSlots = 0;
	int countSnacks = 0;
};


class VendingMachine {
public:
	VendingMachine(int slotCount);//?
	void addSlot(SnackSlot* slotCount);
	int getEmptySlotsCount() const;
	~VendingMachine();

private:
	int machine_size;
	int machine_count;
	int slotCount;
};