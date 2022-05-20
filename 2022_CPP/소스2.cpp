#include <iostream>
#include <string.h>

using namespace std;

class CBox {
protected:
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};
