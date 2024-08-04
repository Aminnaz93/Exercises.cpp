#include <iostream>


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

    std::string name;

    std::cout << "Ange ditt namn: ";
    std::getline(std::cin,name);

    if (name == "Amin Nazari"){
        std::cout << "We are here" << std::endl;
    } else if (name == "Passi Prudence")
    {
        std::cout << "We are not here" << std::endl;
    } else {
        std::cout << "Fuck you" << std::endl;
    }
    
   


    

    


    return 0;
}

