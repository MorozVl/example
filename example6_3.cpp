//example6_3.cpp

#include <iostream>

using namespace std;

bool DisplayMessage();

int main(){
	bool messageDisplayed;
	messageDisplayed = DisplayMessage();
	cout << endl << "The vlaue of messageDisplayed is "
					<< boolalpha << messageDisplayed << endl;

	return 0;
}
bool DisplayMessage(){
	cout << "I Love C++!" << endl;
	return true;
}