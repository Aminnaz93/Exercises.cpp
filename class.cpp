#include <iostream>
#include <string>


class MyClass{
    private:
    std::string name;
    int age;
    char grade;
    int speed(int maxSpeed);

    public:

    void getName(){
        std::cout << "The name is: " << name << std::endl; 
    }

    void getAge(){
        std::cout << "The age is: " << age << std::endl;
    }

    void getGrade(){
        std::cout << "The grade is: " << grade << std::endl;
    }
    
    int MaxSpeed(int MaxSpeed){
        return MaxSpeed;
    }

};