//exercise 6.1

#include <iostream>;
using namespace std;

int main() {
	float lenght, width, oppervlak,area;
	cout << "Please insert the length of the room : " << endl;
	cin >> lenght;
	cout << "Please insert the width of the room : " << endl;
	cin >> width;

	oppervlak = width * lenght;
	area = (width * 2) + (lenght * 2);
	cout.precision(5);

	cout << "The total square meter of the room is : " << oppervlak << endl;
	cout << "The total area of the room is : " << area << endl;
	return 0;


}
