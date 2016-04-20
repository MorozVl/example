//example6_7.cpp

#include <iostream>
#include <string>

using namespace std;

void DisplayMessage(string, string);

int main(){
	string favorite = "C++";
	string intensity = "enormousle";
	DisplayMessage(favorite, intensity);
	
	return 0;
}

void DisplayMessage(string language, string howMuch){

	cout << "I Love " << language << " " << howMuch << "! " << endl;
}
