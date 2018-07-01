#ifndef dog_hpp
#define dog_hpp

#include <iostream>

// By convention, the name of a class should be capitalized.
struct Dog {
    // instance variables are the properties of a class
    std::string name;
    int age;
    bool gender; // female = true, male = false
    std::string *lifeStory;
    
    // Contructors/operators
    Dog(); // defalut constructor
    Dog(std::string dogName, int dogAge, bool dogGender); // constructor
    Dog(const Dog &other); // copy constructor
    Dog(const Dog &&other); // move constructor
    
    ~Dog();
    
    Dog &operator=(const Dog &other); // copy-assignment operator
    Dog operator=(const Dog &&other); // move-assignment operator
    
    
    // member methods
    void bark();
    void eat();
    
    void run(int distance);
    
};

#endif /* dog_hpp */
