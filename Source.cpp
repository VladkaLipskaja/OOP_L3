#include <iostream>
#include <math.h>
#include "Source.h"
using namespace std;
arccos::arccos(float x1) { if (x1 >= -1 && x1 <= 1) x = x1; else { cout << "it's impossible, it will be used default value x = 0" << endl; x = 0; } };
void arccos::result() { cout << acos(x) * 180.0 / 3.14 << endl; };
void arccos::derivative() { x == 1 ? cout << "There is no value" << endl : cout << -1 / sqrt(1 - pow(x, 2.0)) << endl; };

arcsin::arcsin(float x1) { if (x1 >= -1 && x1 <= 1) x = x1; else { cout << "it's impossible, it will be used default value x = 0" << endl; x = 0; } };
void arcsin::result() { cout << asin(x) * 180.0 / 3.14 << endl; };
void arcsin::derivative() { x == 1 ? cout << "There is no value" << endl : cout << 1 / sqrt(1 - pow(x, 2.0)) << endl; };
