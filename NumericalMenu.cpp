/*
 * NumericalMenu.cpp
 *
 *  Created on: Feb 13, 2017
 *      Author: Jason Stoddard
 */
#include <iostream>
#include "NumericalMenu.h"
using namespace std;

int main() {

	NumericalMenu menu;
	menu.setPrompt("Select  option:");
	menu.addOption("Enter new values");
	menu.addOption("Help");
	menu.addOption("Save");
	menu.setCancelText("Exit");

	int result = menu.run();
	cout << "Returned: " << result << endl;


	return 0;
}

