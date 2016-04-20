//example6_8.cpp

#include <iostream>
#include <string>

using namespace std;

void DisplayMessage(string, string);

int main(){
	string favorite = "C++";
	string intensity = "enormousle";
	DisplayMessage(favorite, intensity);
	cout << "The value of favorite in main() is " << favorite << endl;

	return 0;
}

void DisplayMessage(string favorite, string intensity){

	cout << "The value of favorite in DisplayMessage() is " << favorite << endl;
	favorite = "VB";
	cout << "The value of favorite in DisplayMessage() is now " << favorite << endl;
}
