#include "Parking.h"
#include "Parking.cpp"
int main() {
    Parking<std::string> carStack;
    int removalCount = 0;
    int n=9;
    
    // Симуляция процесса заполнения стоянкой машинами. 

    while (n != 3)
    {
        std::cout << "1.Add a car" << std::endl;
        std::cout << "2.Delete a car" << std::endl;
        std::cout << "3.End" << std::endl;
        std::cin >> n;

        switch (n)
        {
        case 1:
            carStack.push("Car1");
            carStack.push("Car2");
            carStack.push("Car3");
            break;

        case 2:
            while (!carStack.empty()) {
                std::cout << "Car departing: " << carStack.top() << std::endl;
                carStack.pop();
                removalCount++;
            }
            break;
        case 3:
            break;
        }
    }
   /* carStack.push("Car1");
    carStack.push("Car2");
    carStack.push("Car3");*/

    // Выезд машин со стоянки 
   /* while (!carStack.empty()) {
        std::cout << "Car departing: " << carStack.top() << std::endl;
        carStack.pop();
        removalCount++;
    }*/

    std::cout << "Total removals for other cars to exit: " << removalCount << std::endl;

    return 0;
}
