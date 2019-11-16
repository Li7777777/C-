#include "Line.h"

int main(){
Line line1(1,2,3,4);
const Line line2(5,6,7,8);
line1.printInfo();
line2.printInfo();
//line1.setA(9,10);
line1.setB(11,12);
line1.printInfo();
}
