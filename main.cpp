#include <iostream>
#include "Snack.h"

void outputSlot(Snack* snack, SnackSlot* snacker) {
   std::cout << "Name: " << snack->getName() <<
      ", Calories: " << snack->getCalories() <<
      ", Price: " << snack->getPrice() << std::endl;
   std::cout << "Empty cells: " << snacker->getSnackSlot() << "\n" << std::endl;
}


int main(){
   Snack* bounty = new Snack( "Bounty", 25.5, 75.4 );
   Snack* snickers = new Snack( "Snickers", 31.2, 81.2 );
   
   SnackSlot* bounty_slot = new SnackSlot(10);
   for (int i = 0; i < 8; i++) {
      bounty_slot->addSnack(bounty);
   }
   
   SnackSlot* snickers_slot = new SnackSlot(10);
   for (int i = 0; i < 7; i++) {
      snickers_slot->addSnack(snickers);
   }
   
   VendingMachine* machine = new VendingMachine(8);
   
   machine->addSlot(bounty_slot);
   std::cout << "Bounty slot: " << std::endl;
   outputSlot(bounty, bounty_slot);

   machine->addSlot(snickers_slot);
   std::cout << "Snickers slot: " << std::endl;
   outputSlot(snickers, snickers_slot);


   std::cout << "Empty slot: " << machine->getEmptySlotsCount();

   delete bounty_slot;
   delete snickers_slot;
   delete bounty;
   delete snickers;
   delete machine;

   return 0;
}
