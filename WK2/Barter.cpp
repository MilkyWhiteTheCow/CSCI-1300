#include <iostream>

using namespace std;

int main()
{
    // declare potatos, chickens, avacado, watermelon as ints.
    int potatoes, chickens, avocados, watermelon, dingus;
    cout << "Enter the number of potatoes:" << endl;
    cin >> potatoes;
    // Divide # of potatos by cost of 1 chicken to get # of chicken. then multiply the abridged value of chickens by its cost in potatos and subtract that from total potato count. Repeat with avacados and watermelons.
    chickens = potatoes / 48;
    potatoes = potatoes - (chickens * 48);
    avocados = potatoes / 8;
    potatoes = potatoes - (avocados * 8);
    watermelon = potatoes / 4;
    potatoes = potatoes - (watermelon * 4);

    cout << "Maximum number of chicken(s) " << chickens << ", avocado(s) " << avocados << ", watermelon(s) " << watermelon << ", potato(es) " << potatoes << endl;

    cout << "Press ENTER to exit... or type some bs in here idfk" << endl;
    cin >> dingus;

    return(0);

}