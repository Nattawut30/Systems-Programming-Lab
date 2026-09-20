#include <iostream>
#include <string>

int main()
{
    // fill() = Fills a range of elements with a specified value
    // fill(begin, end, value)

    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza",
                             "pizza", "pizza", "pizza", "pizza", "pizza"};

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }

    // normally we do this.
    // It worked for the small number of elements in the array
    // But what If we have 100+ element in the array... are you gonna sit and fill in for 100 elements?

    // Solution for more dynamic:
    const int SIZE = 99; // now depends on the size that we set.
    std::string meals[SIZE];

    fill(meals, meals + (SIZE / 2), "TomYumKung");                 // the first 33: TomYumKung
    fill(meals + (SIZE / 3), meals + (SIZE / 3) * 2, "PadKraPao"); // fll in the second 33: PadKraPao
    fill(meals + (SIZE / 3) * 2, meals + SIZE, "SomTum");          // The third 33: SomTum

    for (std::string meal : meals)
    {
        std::cout << meal << std::endl;
    }

    return 0;
}