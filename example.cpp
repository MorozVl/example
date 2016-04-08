#include <iostream>

using namespace std;

int main()
{
	/* code */
	const int PARAM = 2;
	int a, b;
	a= 5;
	
	for (int i = 0; i < 5; ++i)
	{
		b = a * PARAM;
	}
	

	cout << "b = " << b << endl;
	return 0;
}