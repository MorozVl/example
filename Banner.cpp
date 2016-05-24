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
	public: Banner(string param1){
		cout << "Banner's Overloaded Constractor" << endl;
		favoriteProgram = param1;
	}
	public: void Display(){			//поведение класса
		cout << "I Love " << favoriteProgram << endl;
	}
}; // ; - обязательна