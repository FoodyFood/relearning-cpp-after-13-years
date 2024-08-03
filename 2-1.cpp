#include <ctime>
#include <string>
#include "2-1.h"

using namespace std;

void foo(string* current_time){
    time_t now = time(nullptr);
    struct tm* localTime = localtime(&now);
    *current_time =  (to_string(localTime->tm_hour) + ":" + to_string(localTime->tm_min));
}