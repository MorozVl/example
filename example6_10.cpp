#include <iostream>
#include <string>

using namespace std;

void displayMessage(string favorite);
void displayMessage(string favorite, string intensity);

int main(){
	displayMessage("C++");
	displayMessage("C++", " a lot");
	return 0;
}

void displayMessage(string favorite){
	cout << "I love " << favorite << endl;
}

void displayMessage(string favorite, string intensity){
	cout << "I love " << favorite << " " << intensity << endl;
}