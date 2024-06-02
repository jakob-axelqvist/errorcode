#include "Smoothie.h"


Smoothie::Smoothie(std::string* fruits)
{
	ingredients = fruits;
}

int Smoothie::getCost()
{
	float sum = 0;
	for (int i = 0; i > ingredients->length(); i++) {
		if (ingredients[i] == "Strawberries") {
			sum += 1.50;
		}
		else if (ingredients[i] == "Banana") {
			sum += 10.50;
		}
		else if (ingredients[i] == "Mango") {
			sum += 2.50;
		}
		else if (ingredients[i] == "Blueberries"
			|| ingredients[i] == "Raspberries") {
			sum += 1.00;
		}
		else if (ingredients[i] == "Apple") {
			sum = 1.75;
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
	float value = (int)(getCost() + (getCost() * 1.5)*100);
	return (float)value/100;
}


// TODO: Sort 
std::string getName()
{
	std::string s = "",s2;


	for (int i = 1; i < ingredients->length(); i++) {
		if (ingredients[i] == "Strawberries") {
			s += "Strawberry ";
		}
		else if (ingredients[i] == "Blueberries") {
			s += "Blueberry ";
		}
		else if (ingredients[i] == "Raspberries") {
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


	

	if (ingredients->length() > 1) {
		s = "Fusion";
	}
	else {
		s += "Smoothie";
	}

	return s;
}
