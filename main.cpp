#include <iostream>
#include "Product.h"
#include "FoodProduct.h"
#include "ElectronicsProduct.h"
#include "Equipment.h"
#include "Computer.h"
#include "Pallets.h"

int main() {
    FoodProduct melon("melon", "yellow", 1.0, 10, "2024-03-15", "melon");
    ElectronicsProduct laptop("Mackbook", "air A2337", 1000.0, 5, "Apple Japan", "1 year");

    //Продажа 4 дынь
    melon.sell(4);

    melon.printDetails();
    std::cout << std::endl;
    laptop.printDetails();


    //Использование Equipment (Computer and Pallets)

    Computer computer1("Laptop", "High-performance laptop", 1200.00, 5, "Ryzen 4500", "Vladlen Pygachevski");
    Computer computer2("Desktop", "Powerful desktop computer", 1500.00, 3, "Nvidia rtx 3090", "Daniil valerianovich");

    computer1.printDetails();
    computer2.printDetails();

    Pallets pallets("Pallets", "Wooden 1x1m", 8, 40, "OOO Wooden details", "Apples");
    pallets.printDetails();

	return 0;
}