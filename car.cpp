#include <string>
#include <iostream>

// testing my knowlege


class Car
{
private:
    int year;
    std::string make;
    std::string model;

public:
    // Construtor padrão
    Car() {}

    Car(int yr, std::string mk, std::string mdl) : year(yr), make(mk), model(mdl) {}

    int getYear() const { return year; }
    const std::string &getMake() const { return make; }
    const std::string &getModel() const { return model; }

    void setYear(int yr) { year = yr; }
    void setMake(const std::string &mk) { make = mk; }
    void setModel(const std::string &mdl) { model = mdl; }
};




int main() {
    Car myCar(2021, "Ford",  "Mustang");

    std::cout << "Year: " << myCar.getYear() << std::endl; 
    std::cout << "Make: " << myCar.getMake() << std::endl; 
    std::cout << "Model: " << myCar.getModel() << std::endl; 
    return 0;
}