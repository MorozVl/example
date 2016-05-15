//Banner.cpp

#include <iostream>
#include <string>

using namespace std;

class Banner  	//Имя класса
{ 				// начало определения класса
	public: string favoriteProgram;  //переменная-член
	public:	Banner(){
		cout <<"Banner's constructor" << endl;
		favoriteProgram = "C++";
	}
	public: void Display(){			//поведение класса
		cout << "I Love " << favoriteProgram << endl;
	}
}; // ; - обязательна