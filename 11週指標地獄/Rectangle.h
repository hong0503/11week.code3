#ifndef Rectangle_h
#define Rectangle_h
using namespace std;
class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double w);
	void setHeight(double h);
	double getWidth();
	double getHeight();
	double getArea();
};
#endif
