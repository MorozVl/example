//Example7_6.cpp

#include "Banner.cpp"

int Banner::numberOfBannerObject;

int main()
{
	Banner x;  //Вызов конструктора
	x.Display();
	x.HowMany();

	Banner y("Java"); //Вызов перегруженного конструктора
	y.Display();
	y.HowMany();
	
	return 0;
}