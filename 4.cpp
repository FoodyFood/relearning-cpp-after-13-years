#include <array>
#include <iostream>

using namespace std;

void recursive(int start, int limit){
    cout << start << endl;
    start++;
    if(start<=limit){
        recursive(start, limit);
    }
};

int main(){
    recursive(1, 5);
}