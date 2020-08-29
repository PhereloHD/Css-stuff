#include <iostream>
#include <cmath>
using namespace std;


class Student{
   public:
       string name;
       string major;
       double gpa;
       Student (string aName, string aMajor, double aGpa){

        name = aName;
       major = aMajor;
       gpa = aGpa;

       }

       bool hasHonors(){

       if(gpa >= 2.0){
        return true;
       }
        return false;
    }




};




int main()
{


    Student student1("David", "Software-Engineering", 1.0);
    Student student2("Nam", "Unknown", 1.5);

 cout << student1.hasHonors();
 cout << student2.hasHonors();


    return 0;
}
