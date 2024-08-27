#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i<n ; i++){
        if(n % i == 0){
            return false;
        }
    }; 
    return true; 
}

#include <iostream>

int main() {
    int n;
    char choice;

    do {
        std::cout << "Enter a number: ";
        std::cin >> n;

        if(isPrime(n)){
            std::cout << n << " is a prime number." << std::endl;
        } else {
            std::cout << n << " is not a prime number." << std::endl;
        }


        std::cout << "Do you want to evaluate another number? (y/n): ";
        std::cin.get(); // This is to consume the newline character left in the buffer by std::cin >>
        std::cin.get(choice); // This reads the actual choice character

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
