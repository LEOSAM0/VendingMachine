#include "Snack.h"
#include <iostream>

Snack::Snack(const std::string name){
   this->name = name;
}

Snack::Snack(std::string name, double calories, double price){
   this->name = name;
   this->calories = calories;
   this->price = price;
}

std::string Snack::getName() const {
   return this->name;
}

void Snack::setName(std::string name) {
   this->name = name;
}

double Snack::getCalories() const {
   return this->calories;
}

void Snack::setCalories(double calories) {
   this->calories = calories;
}

double Snack::getPrice() const{
   return this->price;
}

void Snack::setPrice(double price) {
   this->price = price;
}

Snack::~Snack() {
};



SnackSlot::SnackSlot(int snacker) {
   this->countSlots = snacker;
};

int SnackSlot::getSnackSlot() const {
   return countSlots - countSnacks;
}

void SnackSlot::setSnackSlot(int snack) {
   this->countSnacks = snack;
}

void SnackSlot::addSnack(Snack* snacker) {
   countSnacks += 1;
 }

SnackSlot::~SnackSlot() {
};



VendingMachine::VendingMachine(int slotCount){
   this->slotCount = slotCount;
}

void VendingMachine::addSlot(SnackSlot* slotCount) {
   ++slotCount;
}

int VendingMachine::getEmptySlotsCount() const{
   return machine_size - machine_count;
}



VendingMachine::~VendingMachine() {
}