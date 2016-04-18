//example6_5.cpp

#include <iostream>
#include <string>

using namespace std;

void DisplayMessage(string);

int main(){
	DisplayMessage("C++");
	DisplayMessage("Java");
	DisplayMessage("Visual Basic");

	return 0;
}

void DisplayMessage(string language){

	cout << "I Love " << language << "! " << endl;
}
