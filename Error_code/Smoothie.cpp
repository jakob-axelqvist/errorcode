#include "Smoothie.h"


Smoothie::Smoothie(vector<string> fruits)
{
	ingredients = fruits;
}

float Smoothie::getCost()
{
	float sum = 0;
	for (int i = 0; i < ingredients.size(); i++) {
		if (ingredients[i] == "Strawberry") {
			sum += 1.50;
		}
		else if (ingredients[i] == "Banana") {
			sum += 0.50;
		}
		else if (ingredients[i] == "Mango") {
			sum += 2.50;
		}
		else if (ingredients[i] == "Blueberry"
			|| ingredients[i] == "Raspberry") {
			sum += 1.00;
		}
		else if (ingredients[i] == "Apple") {
			sum += 1.75;
		}
		else if (ingredients[i] == "Pineapple") {
			sum += 3.50;
		}
		else {
			continue;
		}
	}

	return sum;
}

float Smoothie::getPrice()
{
	float value = getCost() + getCost() * 1.5f;
	return value;
}


// TODO: Sort 
std::string Smoothie::getName()
{
	std::string s = "";


	for (int i = 0; i < ingredients.size(); i++) {

		// s += ingredients[i] + " "

		if (ingredients[i] == "Strawberry") {
			s += "Strawberry ";
		}
		else if (ingredients[i] == "Blueberry") {
			s += "Blueberry ";
		}
		else if (ingredients[i] == "Raspberry") {
			s += "Raspberry ";
		}
		else if (ingredients[i] == "Banana"
			|| ingredients[i] == "Mango"
			|| ingredients[i] == "Apple"
			|| ingredients[i] == "Pineapple") {
			s += ingredients[i] + " ";
		}
		else {
			continue;
		}
	}

	if (ingredients.size() > 1) {
		s += "Fusion";
	}
	else {
		s += "Smoothie";
	}

	return s;
}
