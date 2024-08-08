#include <iostream>
#include <string>


class MyClass {
private:
    std::string name;
    int age;
    char grade;

public:
    // Metoder för att hämta medlemsvariabler
    void getName() {
        std::cout << "The name is: " << name << std::endl; 
    }

    void getAge() {
        std::cout << "The age is: " << age << std::endl;
    }

    void getGrade() {
        std::cout << "The grade is: " << grade << std::endl;
    }

    // Setter för att sätta värden på medlemsvariabler
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setGrade(char newGrade) {
        grade = newGrade;
    }

    // Metod för att hantera maxSpeed
    int MaxSpeed(int speed) {
        return speed;
    }
};


///////////////////////////////////////////////////////

class Car
{

public:
  std::string brand;
  std::string model;
  int year;


  Car(std::string x, std::string y, int z){
    brand = x;
    model = y;
    year = z;
  }

void getBrand(){
    std::cout << "The brand is: " << brand << std::endl;
}

void getModel(){
    std::cout << "The model is: " << model << std::endl;  
}

void getYear(){
    std::cout << "The year is: " << year << std::endl;
}



void setBrand(const std::string &newBrand){
    brand = newBrand;
}

void setModel(const std::string &newModel){
    model = newModel;
}

void setYear(int newYear){
    year = newYear;
}



};



