#include <iostream>

#define STR(text) #text
#define DAY1 STR(monday)
#define DAY2 STR(tusday)
#define DAY3 STR(wednesday)
#define DAY4 STR(thursday)
#define DAY5 STR(friday)
#define DAY6 STR(saturday)
#define DAY7 STR(sunday)

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    std::cin >> input;
    switch (input) {
        case 1:
            std::cout << DAY1 << std::endl;
            break;
        case 2:
            std::cout << DAY2 << std::endl;
            break;
        case 3:
            std::cout << DAY3 << std::endl;
            break;
        case 4:
            std::cout << DAY4 << std::endl;
            break;
        case 5:
            std::cout << DAY5 << std::endl;
            break;
        case 6:
            std::cout << DAY6 << std::endl;
            break;
        case 7:
            std::cout << DAY7 << std::endl;
            break;
        default:
            std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
            return 1;
    }
    return 0;
}
