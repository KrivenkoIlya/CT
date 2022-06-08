//
// Created by elpil on 23.04.2022.
//

#include <iostream>
#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H
#include <math.h>

using namespace std;
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
		fstApex = fstApex1;
		scndApex = scndApex2;
		trdApex = trdApex3;
		cout << fstApex1 << "\n" << scndApex2 << "\n" << trdApex3 << endl;

	}
public:
	~Triangle()
	{
		cout << "Now class Is not working" << endl;
	}
public:
	void TriangleConstr(int fstApex1, int scndApex2, int trdApex3) {
		fstApex1 = 15;
		scndApex2 = 17;
		trdApex3 = 16;
		cout << fstApex1 << "\n" << scndApex2 << "\n" << trdApex3 << endl;
		
	}

	void perAr() {
		int p = fstApex + scndApex + trdApex;
		cout << p;

		int pp, s;
		pp = (p / 2);
		s = (sqrt(pp * ((pp - fstApex) * (pp - scndApex) * (pp - trdApex))));
		
	}


	
	};


	
	int main() {
		Triangle fstTriangle;
		fstTriangle.Apexes(1, 2, 3);
		fstTriangle.TriangleConstr(4, 5, 6);
		


	}
#endif //CLASSES_TRIANGLE_H	 
