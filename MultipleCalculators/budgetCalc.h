#ifndef budgetCalc
#define budgetCalc

class budgetFunctions {
	const int yearDiv = 52;
	const int monthDiv = 4;
	double annualAmmount;
	double monthlyAmmount;
public:
	double sumOfAnnualArray;
	double annualDivisonRet;
	double monthlyDivisionRet;
	double weeklyDivisionRet;
	double sumOfMonthlyArray;
	double sumOfWeeklyArray;
	void annualDivison(double annualAmmount);
	void monthlyDivision(double monthlyAmmount);
};

#endif
