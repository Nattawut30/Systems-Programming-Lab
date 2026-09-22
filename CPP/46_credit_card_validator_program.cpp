#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    // Luhn Algorithm:
    // 1. Double every second digit from right to left, If doubled number is 2 digits, split them
    // 2. Add all single digits from step 1
    // 3. Add all odd number (1, 3, 5, 7, 9, etc) digits from right to left
    // 4. Sum results from step 2 & 3
    // 5. If step 4 is divisble by 10, # is valid!

    // 6011 0009 9013 9424
    // 6_1_ 0_0_ 9_1_ 9_2_, kills every second digits from right to left
    // 1_2_2_ 0_0_ 1_8_2_ 1_8_4_, add up 2 digits, split them
    // 29, sum all em up
    // _0_1 _0_9 _0_3 _4_4 // step 3: get all the odd number, opposite of step 1
    // 21, no need to doubled them up just sum up
    // 29 + 21 = 50
    // 50 % 10 = 5, if divisble by 10 passed, It is valid

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    { // if divisble by 10 and result is 0, that's valid
        std::cout << cardNumber << " is valid";
    }
    else
    {
        std::cout << cardNumber << " is NOT valid";
    }

    return 0;
}

int getDigit(const int number) // we need to split them if it two number, 18 -> 1 and 8
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) // we begin at the end
    {
        // Ascii table
        sum += cardNumber[i] - '0'; // odd digits no need to double the odd
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) // start from the seconds digits position
    {
        // Ascii table
        sum += getDigit((cardNumber[i] - '0') * 2); // decimal representation of that character, subtract the character is give us a range of 0-9
    }

    return sum;
}
