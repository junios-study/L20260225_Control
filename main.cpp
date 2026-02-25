#include <iostream>

using namespace std;

int main()
{
	bool Result1 = true;
	bool Result2 = false;
	bool Result3 = false;

	bool Temp = (Result1 || Result2);
	Temp = Temp && Result3 && (10 > 3);

	cout << Temp << endl;

	return 0;
}