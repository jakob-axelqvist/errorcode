#include "Smoothie.h"

using namespace std;

/*
Ingredient		Price
Strawberries	$1.50
Banana			$0.50
Mango			$2.50
Blueberries		$1.00
Raspberries		$1.00
Apple			$1.75
Pineapple		$3.50
*/

int main() {
	Smoothie s1(new string[1] {"Banana"});
	cout << "$" << s1.getCost() << "\n";
	cout << "$" << s1.getPrice() << "\n"
	cout << s1.getName() << "\n";
	cout << endl;
	Smoothie s2(new string[3]{ "Raspberries", "Strawberries", "Blueberries" });
	cout << "$" << s2.getCost() << "\n";
	cout << "$" << s2.getPrice() << "\n";
	cout << s2.getName() << "\n";

}