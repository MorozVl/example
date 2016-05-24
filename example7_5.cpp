//Example7_5.cpp
#include "Banner.cpp"

int main()
{
	Banner x;  //Вызов конструктора
	x.Display();

	Banner y("Java"); //Вызов перегруженного конструктора
	y.Display();
	
	return 0;
}