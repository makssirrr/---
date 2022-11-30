#include <iostream>

#include <cmath>

using namespace std;

int main()

{

   float a, b, c, d;

   cout << "Введіть сторони трапеції: ";

   cin >> a >> b >> c >> d;

   const float p = a + b + c + d;

   const float s = ((a + b) / 2) * sqrt(pow(c, 2) - pow((pow(b - a, 2) + pow(c, 2) - pow(d, 2)) / (2 * (b - a)), 2));

   cout << "Периметр трапеції: " << p << endl;

   cout << "Площа трапеції: " << s << endl;

   return 0;

}