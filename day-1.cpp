#include <iostream>
#include <array>

using namespace std;


int value(int (*func)(int), int x){
    return func(x);
}

int foo(int x){
    return ++x;
}

int main(){
    array<int, 4> y = {1, 2, 3, 4};
    array<int, 4> *point = &y;
    
    for(int i = 0; i < sizeof(y)/sizeof(int); i++){
        cout << "Hello World " << value(&foo, ((*point)[i])) << endl;
    };
    return 0;
}

