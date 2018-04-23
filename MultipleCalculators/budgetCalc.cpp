#include <iostream>
#include "budgetCalc.h"

void budgetFunctions::annualDivison(double annualAmmount) {
	annualDivisonRet = annualAmmount / yearDiv;
}
void budgetFunctions::monthlyDivision(double monthlyAmmount){
	monthlyDivisionRet = monthlyAmmount / monthDiv;
}