#include <iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "****** NUMBER GUESSING GAME ******" << std::endl;

    do{
        std::cout << "Enter a guess between (1-100): " << std::endl;
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!" << std::endl;
        }
        
        else if(guess < num){
            std::cout << "Too low!" << std::endl;
        }

        else{
            std::cout << "CORRECT!" << std::endl;
            std::cout << "# of Tries: " << tries << std::endl;
        }
    }while(guess != num);

    return 0;
}