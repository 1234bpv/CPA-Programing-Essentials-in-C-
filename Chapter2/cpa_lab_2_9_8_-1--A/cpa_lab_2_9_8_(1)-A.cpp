#include <iostream>#include <iomanip>#include <string>using namespace std;int main(void) { int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 }; int vector2[7];
 for (int i = 0; i < 6; i++){  vector2[i + 1] = vector1[i]; } vector2[0] = vector1[6];
 for (int i = 0; i < 7; i++)  cout << vector2[i] << ' '; cout << endl;
 system("pause"); return 0;}
