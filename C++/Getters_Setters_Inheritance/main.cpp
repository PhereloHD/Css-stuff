#include <iostream>

using namespace std;

class Chef {

     public:
         void makeChicken(){

         cout << "The chef makes yummy Chicken" << endl;
         }
         void makeSalad(){
         cout << "The Chef makes Salad" << endl;
         }
         void makeSpecialDish(){
         cout << "The Chef makes bbq ribs" << endl;
         }

};

class ItalianChef : public Chef {
public:
void makePasta()
{
cout << "The Chef makes pasta" << endl;
}
void makeSpecialDish(){
         cout << "The Chef makes chicken parm" << endl;
         }



};


int main() {


Chef chef;
chef.makeChicken();
chef.makeSpecialDish();

ItalianChef italianChef;
italianChef.makePasta();
italianChef.makeSpecialDish();
    return 0;
}
