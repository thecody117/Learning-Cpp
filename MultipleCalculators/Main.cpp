#include <iostream>
#include <cmath>
#include <cstring>
#include <numeric>
#include <vector>
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
				std::vector<double> annualCosts;
				std::cout << "Hello, Please enter the amount of annual costs: ";
				int numberOfCosts;
				std::cin >> numberOfCosts;
				int i;
				for (i = 0; i < numberOfCosts; i++) {
					std::cout << "\nPlease enter the " << i << " number: ";
					double costForItem;
					std::cin >> costForItem;
					annualCosts.push_back(costForItem);
				}
				if(numberOfCosts > 1) {
					reverseBudgetCalc.sumOfAnnualArray = std::accumulate(annualCosts.begin(), annualCosts.end(), 0.0);
					std::cout << "The sum of the annual array is: " << reverseBudgetCalc.sumOfAnnualArray << std::endl;
				}
				reverseBudgetCalc.annualDivison(reverseBudgetCalc.sumOfAnnualArray);
				std::cout << "Please enter the amount of monthly costs: ";
				std::cin >> numberOfCosts;
				std::vector<double> monthlyCosts;
				for (i = 0; i < numberOfCosts; i++) {
					std::cout << "\nPlease enter the " << i << " number: ";
					double costForItem;
					std::cin >> costForItem;
					monthlyCosts.push_back(costForItem);
				}
				if (numberOfCosts > 1) {
					reverseBudgetCalc.sumOfMonthlyArray = std::accumulate(monthlyCosts.begin(), monthlyCosts.end(), 0.0);
					std::cout << "The sum of the monthly array is: " << reverseBudgetCalc.sumOfMonthlyArray << std::endl;
				}
				reverseBudgetCalc.monthlyDivision(reverseBudgetCalc.sumOfMonthlyArray);
				std::cout << "Finally, please enter the weekly costs: ";
				std::cin >> numberOfCosts;
				std::vector<double> weeklyCosts;
				for (i = 0; i < numberOfCosts; i++) {
					std::cout << "\nPlease enter the " << i << " number: ";
					double costForItem;
					std::cin >> costForItem;
					weeklyCosts.push_back(costForItem);
				}
				if (numberOfCosts > 1) {
					reverseBudgetCalc.sumOfWeeklyArray = std::accumulate(weeklyCosts.begin(), weeklyCosts.end(), 0.0);
					std::cout << "The sum of the weekly array is: " << reverseBudgetCalc.sumOfWeeklyArray << std::endl;
				}
				double allCostsAdded = reverseBudgetCalc.sumOfWeeklyArray + reverseBudgetCalc.sumOfMonthlyArray + reverseBudgetCalc.sumOfAnnualArray;
				std::cout << allCostsAdded << std::endl;
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