#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main( void ) {

	Point A(10, 0);
	Point B(0, 10);
	Point C(10, 10);

	Point K(3, 3);
	Point L(9, 9);
	Point M(10, 10);

	cout << "Point K is " << (bsp(A, B, C, K) ? "inside" : "outside") << " the triangle ABC" << endl;
	cout << "Point L is " << (bsp(A, B, C, L) ? "inside" : "outside") << " the triangle ABC" << endl;
	cout << "Point M is " << (bsp(A, B, C, M) ? "inside" : "outside") << " the triangle ABC" << endl;
}
