#include <stdio.h>


typedef struct {
	float x;
	float y;
}Point;

void AddValueToPoint(Point p);

int main(void) {
	Point point;
	point.x = 5.0f;
	point.y = 10.0f;
	AddValueToPoint(point);
	printf("%1.f, %1.f\n", point.x, point.y);

	return 0;
}

void AddValueToPoint(Point p) {
	p.x += 10.0f;
	p.y += 15.0f;
}
