//This program predicts how much the East Coast Division will generate of total sales.
#include <iostream>

using namespace std;

int main()
{
	float eastCoastPercentage = 0.62;
	float companySales = 4600000.0;
	float eastCoastSales;

	eastCoastSales = companySales * eastCoastPercentage;

	//Fixed is used to prevent scientific notation being used by default.
	cout << "The East Coast Division generated " << fixed << eastCoastSales << " of total company sales." << endl;

	return 0;
}