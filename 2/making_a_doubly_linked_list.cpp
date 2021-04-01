#include <cstdio>

struct Element{
    Element* next{};
    Element* previous{}; 
    
    void insert_after(Element* new_element){
        new_element->next = next;
        next = new_element;

        new_element->previous = this;
    }

    void insert_before(Element* new_element){
        new_element->previous = previous;
        previous->next = new_element;

        previous = new_element;
        new_element->next = this;
    }
    short operating_number;
};

int main(){
    Element first, second, third, fourth;
    first.operating_number = 0;
    second.operating_number = 1;
    third.operating_number = 2;
    fourth.operating_number = 3;

    first.insert_after(&second);
    second.insert_after(&third);
    second.insert_before(&fourth);

    // Iterate, printing the operating number of each element object
    for (Element *cursor= &first;cursor;cursor=cursor->next){
        printf("%d",cursor->operating_number);
    }

    printf("\n");
    
    // Iterate, printing the operating number of each element object in reverse order
        for (Element *cursor= &third;cursor;cursor=cursor->previous){
        printf("%d",cursor->operating_number);
    }
    return 0;
}