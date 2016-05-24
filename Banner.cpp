//Banner.cpp

#include <iostream>
#include <string>

using namespace std;

class Banner  	//Имя класса
{ 				// начало определения класса
	public: string favoriteProgram;  //переменная-член
	public: static int numberOfBannerObject;
	public:	Banner(){
		cout <<"Banner's constructor" << endl;
		numberOfBannerObject++;
		favoriteProgram = "C++";
	}
	public: Banner(string param1){
		cout << "Banner's Overloaded Constractor" << endl;
		numberOfBannerObject++;
		favoriteProgram = param1;
	}
	public: void HowMany(){
		cout << "The nuber of Banner objects is " <<
			numberOfBannerObject << endl;
	}
	public: void Display(){			//поведение класса
		cout << "I Love " << favoriteProgram << endl;
	}
}; // ; - обязательна