//Dogukan Kaan Bozkurt

/*
A base class's protected members can be accessed,
 
	i)within the body of that base class
   ii)by members and friends of that base class
  iii) by members and friends of any classes derived from that base class.
  
*/

#include <iostream>

using namespace std;

//Base class
class Shape {
	public:
		void setWidth(int w){
			width=w;
		}
		void setHeight(int h){
			height=h;
		}
		
	protected:
		int width;
		int height;
};

//Derived Class
class Rectangle: public Shape {
	public: 
		int getArea() {
			return (width*height);
		}
};

int main(void) {
	Rectangle Rect;
	
	Rect.setWidth(5);
	Rect.setHeight(7);
	
	//Print the area of the obj.
	cout << "Total area : " << Rect.getArea() << endl;
	
	return 0;
}
