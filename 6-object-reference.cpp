#include <iostream>

class Cartesian{
public:
    int x;
    int y;

    Cartesian(int x, int y): x(x), y(y){};
};

int main(){
    Cartesian point(4,12);

    Cartesian* reference = &point;

    std::cout << reference->x << ", ";
    std::cout << reference->y << std::endl;

    return 0;
};