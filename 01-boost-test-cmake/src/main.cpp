#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

int main() {
	Line l(Point(0.,0.), Point(3.,4.));
	cout << l.length() << endl; // Outputs 5
	return 0;
}
