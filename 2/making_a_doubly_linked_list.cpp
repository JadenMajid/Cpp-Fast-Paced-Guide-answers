#include <cstdio>

struct Element{
    Element* next{};
    Element* previous; 
    void insert_after(Element* new_element){
        new_element->next = next;
        next = new_element;

        new_element->previous = this;
    }

    void insert_before(Element* new_element){
        new_element->previous = previous;
        previous = new_element;

        previous->next = new_element;
        new_element->next = this;
    }
    short operating_number;
};

int main(){
    Element first, second, third;
    first.operating_number = 0;
    second.operating_number = 1;
    third.operating_number = 2;
    first.insert_after(&second);
    second.insert_after(&third);

    for (Element *cursor= &first;cursor;cursor=cursor->next){
        printf("%d",cursor->operating_number);
        
    }


    return 0;
}