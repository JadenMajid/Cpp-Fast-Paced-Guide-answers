#include <iostream>

struct timer_class{
    int timestamp;
    const char* name;

    // default constructor 
    
    timer_class(){
        timestamp = std::time(NULL);
    }
    

    // constructor with name variable
    timer_class(const char name_in){
        timestamp = std::time(NULL);
        name = name_in;
    }

    // move assignment contructor
    timer_class(const timer_class& other);


    // move contructor
    timer_class(const timer_class& other){
        timestamp = std::move(other.timestamp);
    }

    // move assignment operator
    timer_class& timer_class::operator = (timer_class&);

    // destructor, prints time elapsed and name of the timer_class
    ~timer_class(){
        if (!(timestamp == 0)){
        std::cout << name << ": "<< (std::time(NULL) - timestamp)<< std::endl;
        }
    }
};

int main(){
    return 0;
}

