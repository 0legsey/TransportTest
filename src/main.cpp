#include <iostream>
#include "Factory.h"
#include <string>
#include <locale>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    Factory factory;
    vector<int> types;

    for (int i = 1; i < argc; i++){
        types.push_back(stoi(argv[i]));
    }

    for (int i = 0; i < types.size(); i++){
        Vehicle* vehicle = factory.createVehicle(types[i]);
        if (vehicle == nullptr){
            cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl;
            cout << endl;
        }
        else{
            vehicle->displayInfo();
            cout << endl;
        }
    }

}