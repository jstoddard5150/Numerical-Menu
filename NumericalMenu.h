/*
 * NumericalMenu.h
 *
 *  Created on: Feb 13, 2017
 *      Author: jstod
 */
#include <iostream>
using namespace std;
#ifndef NUMERICALMENU_H_
#define NUMERICALMENU_H_

class NumericalMenu {
	int counter = 0;
	int userInput = -1;
	string prompt = "Choose an option: ",
		   cancelText =  "Cancel",
		   errorText= "Error!";
	string menuOptions[];
public:

	int addOption(string option){
		menuOptions[counter] = option;
		counter++;
		return 0;
	}
	void setCancelText (string cancelText){

	}
	void setErrorText (string errorText){

	}
	void setPrompt (string prompt){
		cout << prompt << endl << endl;

	}
	void setRepeatPromptOnError (bool shouldRepeat){

	}
	int run() const{
		for (int i = 0; i < counter; i++){
			cout << i +1  << " - " << menuOptions[i] << endl;
		}

		return userInput;
	}
	int size() const {
		return counter;
	}
};
#endif /* NUMERICALMENU_H_ */
