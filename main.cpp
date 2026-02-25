#include <iostream>
#include <conio.h>


using namespace std;

//Array[0] -> 000011a3bfc2 + 0
//   [0][][][][][][][][9]

//2D
//Array[Y][X] -> 000011a3bfc2 + 0
//   [0][][][3]
//   [0][][][3]
//	 [0][][][3]
//	 [0][][][3]
// 
//   [0][][][3][0][][][3][0][][][3][0][][][3]


int main()
{
	int Array[10];

	for (int i = 0; i < 10; i++)
	{
		Array[i] = i + 1;
	}


	return 0;
}

