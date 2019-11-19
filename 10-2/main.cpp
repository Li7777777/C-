#include "Salesperson.h"


int main(){
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"销货员号(num)\t销货件数(quantity)\t销货单价(price)\n"
          " 101\t\t\t   5\t\t\t\t    23.5\n"
          " 102\t\t\t   12\t\t\t\t    24.56\t\n"
          " 103\t\t\t   100\t\t\t\t    21.5"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    int i;
    Salesperson s[3];
    s[0].set_info(101,5,23.5);
    s[0].total();
    s[1].set_info(102,12,24.56);
    s[1].total();
    s[2].set_info(103,100,21.5);
    s[2].total();
    s[2].display();

}
