//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H

/**
 * TODO extend this Class from Figure class and Implement constructor, destructor,  perimeter and area methods in Triangle.cpp file
 */
class Triangle {
//TODO put your code here
//you should define methods and constructor/destructor prototypes here and implement them in Triangle.cpp file
//constructor must use the pointers to 3 apexes of the triangle.
private:
	int fstApex, scndApex, trdApex;
public:
	void Apexes(int fstApex1, int scndApex2, int trdApex3) {
			fstApex1 = 10;
			scndApex2 = 5;
			trdApex3 = 6;
			cout << fstApex1 << "\n" << scndApex2 << "\n" << trdApex3 << endl;
	}
public:
	TriangleConst() {
		fstApex1 = 15;
		scndApex2 = 17;
		trdApex3 = 16;
	}
};
main() {
	Triangle fstTriangle() {
		fstTriangle.Apexes();
		fstTriangle.TriangleConst();
	}
}

#endif //CLASSES_TRIANGLE_H
