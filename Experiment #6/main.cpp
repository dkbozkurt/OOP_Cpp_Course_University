#include <iostream>
#include <math.h>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"

using namespace std;

main() {

	const Point A("A",6,6+4*sqrt(3));
	A.print();
	const Point B("B",2,6);
	B.print();
	const Point C("C",10,6);
	C.print();
	
	const Line a("a",B,C);
	a.print();
	const Line b("b",A,C);
	b.print();
	const Line c("c",A,B);
	c.print();
	cout << endl;
	Triangle t("t",a,b,c);
	t.outputProperties();
	///
	cout <<endl<<"*************************************************************\n"<< endl;
	
	const Point D("A",8,8);
	D.print();
	const Point E("B",8,15);
	E.print();
	const Point F("C",32,8);
	F.print();
	
	const Line d("a",E,F);
	d.print();
	const Line e("b",D,F);
	e.print();
	const Line f("c",D,E);
	f.print();
	cout << endl;
	Triangle k("t",d,e,f);
	k.outputProperties();
	///
	cout <<endl<<"*************************************************************\n"<< endl;
	
	const Point G("A",-2,3);
	G.print();
	const Point H("B",-5,-4);
	H.print();
	const Point I("C",2,-1);
	I.print();
	
	const Line g("a",H,I);
	g.print();
	const Line h("b",G,I);
	h.print();
	const Line i("c",G,H);
	i.print();
	cout << endl;
	Triangle l("t",g,h,i);
	l.outputProperties();
	
	return 0;
}
