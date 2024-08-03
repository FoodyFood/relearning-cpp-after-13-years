#include <iostream>
#include <string>
#include "2-1.cpp"

int main(){
    string current_time;
    foo(&current_time);
    std::cout << "" << current_time << std::endl;
    return 0;
}