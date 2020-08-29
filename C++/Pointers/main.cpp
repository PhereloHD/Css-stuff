#include <iostream>

using namespace std;

int main()
{

    int age = 19;
    int *pAge = &age;
    double Gpa = 2.7;
    double *pGpa = &Gpa;
    string Name = "Mike";
    string *pName = &Name;


    cout << *pAge << " and " << *pGpa << endl;








    return 0;
}
