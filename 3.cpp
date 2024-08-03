#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

class StringStorage{
private:
    vector<string> my_stored_strings;
    int number_of_strings = 0;

public:
    void store_string(string input){
        my_stored_strings.push_back(input);
        number_of_strings++;
    }

    string get_stored_string(int string_number){
        return my_stored_strings[string_number];
    }

    int get_number_of_strings(){
        return number_of_strings;
    }
};

int main(){
    StringStorage string_storage;
    string my_string;

    int f = 0;
    while(true){
        string input;
        cout << "Enter some string or 'x' to break: ";
        cin >> input;
        if(input != "x"){
            string_storage.store_string(input);
        }
        else{
            break;
        }
        f++;
    }

    for(int i = 0; i < string_storage.get_number_of_strings(); i++){
        cout << "You entered: " << string_storage.get_stored_string(i) << endl;
    }
}