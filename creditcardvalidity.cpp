#include <iostream>
     int getdigit(const int number);
     int sumodd (const std::string cardnum);
     int sumeven(const std::string cardnum);

    
     int main() {
        std::string cardnum;
        std::cout << "Enter a card number: ";
        std::cin>> cardnum;

        int num = sumodd(cardnum) + sumeven(cardnum);

        if(num % 10 == 0) {
          std::cout << "The card number is valid!";
        }
        else {
          std::cout << "The card number is not valid.";
        }
        
        return 0;
     }

      int getdigit(const int number) {
        return number % 10 + number / 10 % 10;
      }
     int sumodd (const std::string cardnum){
        int sum = 0;
        for(int i = cardnum.size() - 1; i>=0; i -= 2){
            sum += getdigit((cardnum[i] - '0')*2);
        }
         return sum;
     }
     int sumeven(const std::string cardnum){
      int sum = 0;
      for(int i = cardnum.size() - 2; i >= 0; i -=2){
        sum += getdigit(cardnum[i] - '0');
      }
      return sum;
     }


    