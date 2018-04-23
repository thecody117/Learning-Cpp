#include <iostream>
#include <cmath>
#include <cstring>
#include "grossNetCalc.h"
#include "budgetCalc.h"

incomeCalculations incomeCalc;
taxCalculations taxCalc;
budgetFunctions reverseBudgetCalc;
int main() {
	while (true) {
		bool running = true;
		std::cout << "There are three calcuators to choose for now.\n" << "Typing 'x' into this input will close the program.\n" << "Please select a calculator\n" << "Income calculator[1] Tax calculator[2] Reverse budget calculator[3]: ";
		char choiceForCalc;
		std::cin >> choiceForCalc;
		if (choiceForCalc == '1') {
			while (running == true) { //Income calculator
				std::cout << "Hello, this is a income calculator.\n The calculator will spit out both gross and net income.\n Please enter the amount of dollars per hour\n followed by how many hours were worked.";
				std::cout << "\n Like this: 10.50 40" << std::endl << "Please enter the numbers here: ";
				double x, y;
				std::cin >> x >> y;
				incomeCalc.profitForWeek(x, y);
				std::cout << "\n Would you like to switch calculators? yes[1] no[2]: ";
				char answer;
				std::cin >> answer;
				if (answer == '1') {
					running = false;
				}
			}
		}
		else if (choiceForCalc == '2') { //Tax calculator
			while (true) {
				//TODO Finish the tax calculator, could be improved.
				std::cout << "Welcome to the tax calculator.\n Please enter the item cost, followed by the tax percentage.\nLike this: 10.40 .335\n Please enter the amount now: ";
				double x, y;
				std::cin >> x >> y;
				taxCalc.priceForItem(x, y);
			}
		}
		else if (choiceForCalc == '3') { //Reverse budget calculator
			while (running == true) {
				std::cout << "Welcome!\n This calculator will take a already made budget and break it down back into net and gross pay.\nIt will also allow for hourly pay." << std::endl;
				std::cout << "Please enter how many annual expenses there are: ";
				int numberOfExpenses;
				std::cin >> numberOfExpenses;
				std::cout << "DEBUG: The number you entered is: " << numberOfExpenses;
				float* annualMemAmmount;
				annualMemAmmount = new float[numberOfExpenses];
				for (int i = 0; i < numberOfExpenses; i++) {
					std::cout << "\nexpense cost" << i << ": ";
					std::cin >> *(annualMemAmmount + 1);
				}
				for (int j = 0; j < numberOfExpenses; ++j) {
					reverseBudgetCalc.sumOfAnnualArray += annualMemAmmount[j];
				}
				std::cout << reverseBudgetCalc.sumOfAnnualArray;
				delete [] annualMemAmmount;
				std::cout << "DEBUG: Type 'x' to exit: ";
				char exitTest;
				std::cin >> exitTest;
				if (exitTest == 'x') {
					running = false;
				}
				else {
					std::cout << "Sorry, that is not an option. Quitting calc...\n";
					running = false;
				}
			}
		} 
		else if (choiceForCalc == 'x') {
			return 0;
		}
		else {
			std::cout << "That is not a valid answer.\n";

		}
	}
	return 0;
}