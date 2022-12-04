#include <iostream>
#include <time.h>
using namespace std;
void delay(clock_t n)

{
  clock_t start = clock();
  while (clock() - start < n)
    ;
}

enum SHAPE { SPADE, DIAMOND, HEART, CLOVER };

struct tagCard {
  int shape;
  int number;
};

void printCard(tagCard card) {
  cout << "|";
  switch (card.shape) {
  case 0:
    cout << "♠ ";
    break;
  case 1:
    cout << "◆ ";
    break;
  case 2:
    cout << "♥ ";
    break;
  case 3:
    cout << "♣ ";
  }
  cout << "  |\n|    |\n|  ";
  switch (card.number) {
  case 1:
    cout << " A";
    break;
  case 11:
    cout << " J";
    break;
  case 12:
    cout << " Q";
    break;
  case 13:
    cout << " K";
    break;
  default:
    if (card.number != 10)
      cout << " ";
    cout << card.number;
  }
  cout << "|" << endl << endl << endl;
}
