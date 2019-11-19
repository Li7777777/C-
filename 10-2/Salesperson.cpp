

#include "Salesperson.h"

float Salesperson::sum=0;
float Salesperson::discount=0.9;
int Salesperson::n=0;

void Salesperson::set_info(int num,int quantity, float price) {
    this->num=num;
    this->quantity=quantity;
    this->price=price;
}

void Salesperson::total() {
    if(quantity>10)
    {
        sum += price * discount * quantity * 0.98;
        n += quantity;
    }
    else
    {
        sum+=price*discount*quantity;
        n+=quantity;
    }
}

float Salesperson::average() {
    return sum/n;
}
void Salesperson::display() {
    cout<<"当日此商品的总销售款:"<<Salesperson::sum<<endl;
    cout<<"每件商品的平均售价:"<<Salesperson::average()<<endl;
}