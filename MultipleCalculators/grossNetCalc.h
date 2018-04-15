#ifndef grossNetCalc
#define grossNetCalc

class incomeCalculations {
	double grossAdded;
	double taxPercent;
	bool exitCondition;
public:
	void profitForWeek(double dollarsPerHour, double hoursWorked);
	void netIncome();
};
class taxCalculations {
	double taxPercent;
	double itemCost;
	double itemCostAfterTax;
public:
	void priceForItem(double itemCost, double taxPercent);
};
#endif