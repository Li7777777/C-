#ifndef UNTITLED_SALESPERSON_H
#define UNTITLED_SALESPERSON_H

#include <iostream>
using namespace std;

class Salesperson {
private:
    int num;//销货员号(num)
    int quantity;//销货件数(quantity)
    float price;//销货单价(price)
    static float discount;//折扣
    static float sum;//总销售款sum
    static  int n;//商品销售总件数n
public:

    void total();
    static float average();
    static void display();
    void set_info(int num, int quantity, float price);
};

#endif //UNTITLED_SALESPERSON_H
