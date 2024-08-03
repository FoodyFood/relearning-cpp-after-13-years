#include <string>
#include <iostream>

using namespace std;

class Material{
public:
    string material;
};

class Couch: public Material{
public:
    int number_of_seats;
};

int main(){
    Couch my_couch;
    
    my_couch.material = "leather";
    my_couch.number_of_seats = 3;

    cout << my_couch.material <<endl;
    cout << my_couch.number_of_seats <<endl;

    return 0;
};