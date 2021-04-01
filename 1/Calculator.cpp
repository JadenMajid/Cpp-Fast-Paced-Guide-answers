#include <iostream>

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator{

    Operation operation;

    Calculator(Operation oper){
        operation = oper;
    }

    void calculate(int a, int b){

        switch(operation){

            case Operation::Add: {
                std::cout << a + b;
            } break;

            case Operation::Subtract: {
                std::cout << a - b;
            } break;

            case Operation::Multiply: {
                std::cout << a * b;
            } break;

            case Operation::Divide:{
                std::cout << a / b;
            } break;

            default: {
                std::cout << a + b;
            }
        }
    }
};

int main() {

    Operation operation = Operation::Multiply;

    Calculator calculator{operation};

    calculator.calculate(20,2);

    return 0;
}