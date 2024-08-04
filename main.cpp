#include <iostream>
#include <string>
#include <math.h>
#include "function.cpp"



int main(){


    /*
    std::cout << "Hello World!" << std::endl; std::cout << "Baby" << std::endl;

    std::cout << "Ny rad kommer " << std::endl;*/


///////////////////////////////////////////////////////

    /*int x = 30;
    int num;


    std::cout << x << std::endl;

    std::cout << "Ange en siffra: ";
    std::cin >> num;

    std::cout << "Siffran är: " << num << std::endl;*/



    ///////////////////////////////////////////////////////

    /*std::string name;

    std::cout << "Ange ditt namn: ";
    std::getline(std::cin,name);

    if (name == "Amin Nazari"){
        std::cout << "We are here" << std::endl;
    } else if (name == "Passi Prudence")
    {
        std::cout << "We are not here" << std::endl;
    } else {
        std::cout << "Fuck you" << std::endl;
    }*/
    
   ///////////////////////////////////////////////////////


    /*std::string name = "Amin Nazari";

    std::cout << name[0] << std::endl;
    std::cout << name << std::endl;

    for (int i = 0; i < name.length(); i++){   
        std::cout << name[i] << std::endl;
    }*/
    
    ///////////////////////////////////////////////////////
    

    /*Greetings();

    std::cout << std::endl;

    std::string name = "Amin ";
    std::string name2 = "Nazari";

    std::string name3 = name.append(name2);

    std::cout << "Längden på strängen är: " << name3.length() << " bokstäver." << std::endl;
    std::cout << "Storleken på strängen är: " << name2.size() << " bokstäver." << std::endl;
    std::cout << name3[name3.length() -1] << std::endl;
    std::cout << name3 << std::endl;
    name.at(2) = 'J';
    std::cout << name << std::endl;




    for(int i = 0; i < name.length(); i++){
        std::cout << name[i] << std::endl;
    }


    std::cout << std::endl;

    for(int j = 0; j < 10; j++){
        if (j % 2 == 0){
        std::cout << j << std::endl;
        
        }
    }*/

    ///////////////////////////////////////////////////////


    /*std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    std::cout << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your name is " << name << " and your age is " << age << "." << std::endl;*/


    ///////////////////////////////////////////////////////


    /*std::cout << sqrt(64) << std::endl;
    std::cout << round(54.4) << std::endl;
    std::cout << log(2) << std::endl;*/


    ///////////////////////////////////////////////////////


    /*int age = 20;
    int age2 = 30;

    std::cout << (age > age2) << std::endl;*/


    ///////////////////////////////////////////////////////

    std::string name;
    std::string name2;

    std::cout << "Enter a name: ";
    std::cin >> name;

    std::cout << "Enter another name: ";
    std::cin >> name2;



    if(name == "Amin"){
        if(name2 == "Nazari"){
            std::cout << "Hej" << std::endl;
        }
    } else if(name != "Amin"){
        if(name != "Nazari"){
            std::cout << "Bajs" << std::endl;
        }
    } else {
        std::cout << "Fuck you" << std::endl;
    }



    return 0;
}

