#include <iostream>
#include <cmath>
#include "grossNetCalc.h"

incomeCalculations incomeCalc;
taxCalculations taxCalc;
int main() {
	while(true) {
	std::cout << "There are two calcuators to choose for now.\n" << "Please select a calculator\n" << "Income calculator[1] Tax calculator[2]: ";
	char choiceForCalc;
	std::cin >> choiceForCalc;
	if (choiceForCalc == '1') {
		while (true) {
			std::cout << "Hello, this is a income calculator.\n The calculator will spit out both gross and net income.\n Please enter the amount of dollars per hour\n followed by how many hours were worked.";
			std::cout << "\n Like this: 10.50 40" << std::endl << "Please enter the numbers here: ";
			double x, y;
			std::cin >> x >> y;
			incomeCalc.profitForWeek(x, y);
			std::cout << "\n Would you like to exit the program? yes[1] no[2]: ";
			char answer;
			std::cin >> answer;
			if (answer == '1') {
				return 0;
			}
		}
	}
	else if (choiceForCalc == '2') {
		while (true) {
			std::cout << "Welcome to the tax calculator.\n Please enter the item cost, followed by the tax percentage.\nLike this: 10.40 .335\n Please enter the amount now: ";
			double x, y;
			std::cin >> x >> y;
			taxCalc.priceForItem(x, y);
		}
	}
	else {
		std::cout << "That is not a valid answer.\n";
	}
}

	return 0;
}