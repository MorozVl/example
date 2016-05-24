//Example7_7.cpp

#include "Banner.cpp"

int Banner::numberOfBannerObject;

int main()
{
	Banner x;  //Вызов конструктора
	x.HowMany();
	Banner y; //Вызов перегруженного конструктора
	y.HowMany();
	Banner::numberOfBannerObject = 0;
	x.HowMany();
	y.HowMany();
	return 0;
}