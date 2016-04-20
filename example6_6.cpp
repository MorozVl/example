//example6_6.cpp

#include <iostream>
#include <string>

using namespace std;

void DisplayMessage(string, string);

int main(){
	DisplayMessage("C++", "a lot more");
	DisplayMessage("Java","a bunch");
	DisplayMessage("Visual Basic", "lots");

	return 0;
}

void DisplayMessage(string language, string howMuch){

	cout << "I Love " << language << " " << howMuch << "! " << endl;
}
