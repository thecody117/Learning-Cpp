#ifndef budgetCalc
#define budgetCalc

class budgetFunctions {
	const int yearDiv = 52;
	const int monthDiv = 4;
	double annualAmmount;
	double monthlyAmmount;
	double annualDivisonRet;
	double monthlyDivisionRet;
	double sumOfMonthlyArray;
	double sumOfWeeklyArray;
public:
	double sumOfAnnualArray;
	void annualDivison(double annualAmmount);
	void monthlyDivision(double monthlyAmmount);
};

#endif
