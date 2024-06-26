#pragma once
#include <string>
#include <vector>

using namespace std;

class Smoothie {
private:
	vector<string> ingredients;
public:
	Smoothie(vector<string> fruits);
	//method which calculates the total cost of the ingredients used to make the smoothie.
	float getCost();
	//method which returns the number from GetCost plus the number from GetCost multiplied by 1.5. Round to two decimal places.
	float getPrice();
	//method which gets the ingredients and puts them into a nice descriptive sentence. If there are multiple ingredients, add the word "Fusion" to the end but otherwise, add "Smoothie". Remember to change "-berries" to "-berry".
	string getName();

};