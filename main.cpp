#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7
#define MONDAY_NAME "Monday"
#define TUESDAY_NAME "Tuesday"
#define WEDNESDAY_NAME "Wednesday"
#define THURSDAY_NAME "Thursday"
#define FRIDAY_NAME "Friday"
#define SATURDAY_NAME "Saturday"
#define SUNDAY_NAME "Sunday"
#define GET_NAME(index) index ## _NAME

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    std::cin >> input;
    switch (input) {
        case MONDAY:
            std::cout << GET_NAME(MONDAY) << std::endl;
            break;
        case TUESDAY:
            std::cout << GET_NAME(TUESDAY) << std::endl;
            break;
        case WEDNESDAY:
            std::cout << GET_NAME(WEDNESDAY) << std::endl;
            break;
        case THURSDAY:
            std::cout << GET_NAME(THURSDAY) << std::endl;
            break;
        case FRIDAY:
            std::cout << GET_NAME(FRIDAY) << std::endl;
            break;
        case SATURDAY:
            std::cout << GET_NAME(SATURDAY) << std::endl;
            break;
        case SUNDAY:
            std::cout << GET_NAME(SUNDAY) << std::endl;
            break;
        default:
            std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
            return 1;
    }
    return 0;
}
