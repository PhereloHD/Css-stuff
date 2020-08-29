#include <iostream>
#include <cmath>
using namespace std;

int main(){

  bool isMale = false;
  bool isTall = false;

  if(isMale && isTall){

  cout << "You are a Tall Male" << endl;


}

   else if(isMale && !isTall){
    cout << "You are a small Male" << endl;

}

   else if(!isMale && isTall){
    cout << "You are a small non-Male" << endl;
}




   else if (!isMale && !isTall) {

    cout << "You are not a Male and you are not Tall";
  }



}
