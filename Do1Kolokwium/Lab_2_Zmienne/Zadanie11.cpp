#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1 ,y1 ,x2 ,y2 ,lenght ;
	cin >> x1 >> y1 >> x2 >> y2;
	lenght = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	cout << lenght << endl;
	return 0; 

}
