#include <iostream>
#include <string>
#include "2-1.cpp"

int main(){
    basic_string<char> current_time;
    foo(&current_time);
    std::cout << current_time << std::endl;
    return 0;
}