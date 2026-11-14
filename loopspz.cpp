#include <iostream>

int main() {
    // int n1;
    // std::cout << "Enter a number: ";
    // std::cin >> n1;
    // for (int i = 0; i <= n1; i++) {
    //     std::cout << i << " ";
    // }
    // std::cout << "\n";

    // int start2, end2;
    // std::cout << "Enter two range limits: ";
    // std::cin >> start2 >> end2;
    // if (start2 > end2) {
    //     int temp = start2;
    //     start2 = end2;
    //     end2 = temp;
    // }
    // std::cout << "All numbers: ";
    // for (int i = start2; i <= end2; i++) {
    //     std::cout << i << " ";
    // }
    // std::cout << "\nEven numbers: ";
    // for (int i = start2; i <= end2; i++) {
    //     if (i % 2 == 0) {
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << "\nOdd numbers: ";
    // for (int i = start2; i <= end2; i++) {
    //     if (i % 2 != 0) {
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << "\nMultiples of 7: ";
    // for (int i = start2; i <= end2; i++) {
    //     if (i % 7 == 0) {
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << "\n";

    // int start3, end3;
    // std::cout << "Enter two range limits: ";
    // std::cin >> start3 >> end3;
    // if (start3 > end3) {
    //     int temp = start3;
    //     start3 = end3;
    //     end3 = temp;
    // }
    // long long sum3 = 0;
    // for (int i = start3; i <= end3; i++) {
    //     sum3 += i;
    // }
    // std::cout << "Sum: " << sum3 << "\n";

    // int num4;
    // long long sum4 = 0;
    // std::cout << "Enter numbers (0 to stop):\n";
    // while (true) {
    //     std::cin >> num4;
    //     if (num4 == 0) {
    //         break;
    //     }
    //     sum4 += num4;
    // }
    // std::cout << "Sum: " << sum4 << "\n";

    // srand(1);
    // int secret = rand() % 500 + 1;
    // int guess;
    // int attempts = 0;
    // std::cout << "Guess the number (1 to 500, 0 to exit):\n";
    // while (true) {
    //     std::cout << "Your guess: ";
    //     std::cin >> guess;
    //     if (guess == 0) {
    //         std::cout << "Game exited. The number was: " << secret << "\n";
    //         break;
    //     }
    //     attempts++;
    //     if (guess < secret) {
    //         std::cout << "Higher!\n";
    //     } else if (guess > secret) {
    //         std::cout << "Lower!\n";
    //     } else {
    //         std::cout << "You guessed it in " << attempts << " attempts!\n";
    //         break;
    //     }
    // }

    const double USD_TO_UAH = 41.5;
    const double EUR_TO_UAH = 45.0;
    int choice;
    double amount;

    while (true) {
        std::cout << "\nCurrency Converter:\n";
        std::cout << "1 - UAH to USD\n";
        std::cout << "2 - USD to UAH\n";
        std::cout << "3 - UAH to EUR\n";
        std::cout << "4 - EUR to UAH\n";
        std::cout << "5 - USD to EUR\n";
        std::cout << "6 - EUR to USD\n";
        std::cout << "0 - Exit\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 6) {
            std::cout << "Invalid choice!\n";
            continue;
        }

        std::cout << "Enter amount: ";
        std::cin >> amount;

        if (choice == 1) {
            std::cout << "Result: " << amount / USD_TO_UAH << " USD\n";
        }
        else if (choice == 2) {
            std::cout << "Result: " << amount * USD_TO_UAH << " UAH\n";
        }
        else if (choice == 3) {
            std::cout << "Result: " << amount / EUR_TO_UAH << " EUR\n";
        }
        else if (choice == 4) {
            std::cout << "Result: " << amount * EUR_TO_UAH << " UAH\n";
        }
        else if (choice == 5) {
            std::cout << "Result: " << (amount * USD_TO_UAH) / EUR_TO_UAH << " EUR\n";
        }
        else if (choice == 6) {
            std::cout << "Result: " << (amount * EUR_TO_UAH) / USD_TO_UAH << " USD\n";
        }
    }
}
