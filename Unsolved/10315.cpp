#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//compare function to sort
bool sortByValue (string, string);

//return card value
int cardValue (string);

//poker hands
int straightFlush (vector<string>);
int fourOfaKind (vector<string>);
int threeOfaKind (vector<string>);

int main (int argc, char **argv) {

  //hands
  vector<string> black;
  vector<string> white;
  
  //input
  string cards;

  //score
  int score_black;
  int score_white;
  
  while (getline(cin, cards)) {
    black.push_back (cards.substr (0, 2) );
    black.push_back (cards.substr (3, 2) );
    black.push_back (cards.substr (6, 2) );
    black.push_back (cards.substr (9, 2) );
    black.push_back (cards.substr (12, 2) );
    white.push_back (cards.substr (15, 2) );
    white.push_back (cards.substr (18, 2) );
    white.push_back (cards.substr (21, 2) );
    white.push_back (cards.substr (24, 2) );
    white.push_back (cards.substr (27, 2) );

    sort (black.begin(), black.end(), sortByValue);
    sort (white.begin(), white.end(), sortByValue);

    score_black = straightFlush (black);
    score_white = straightFlush (white);
    score_black = fourOfaKind (black);
    score_white = fourOfaKind (white);
    score_black = threeOfaKind (black);
    score_white = threeOfaKind (white);
    cout << score_black << " " << score_white << endl;
    for (int i = 0; i < 5; i++)
      cout << black[i];
    cout << " ";
    for (int i = 0; i < 5; i++)
      cout << white[i];
    cout << endl;
  }
  cout << endl;
  return 0;
}

bool sortByValue (string a, string b) {
  int m = a[0];
  int n = b[0];

  if (a[0] == 'T') m = 10 + 48;
  if (a[0] == 'J') m = 11 + 48;
  if (a[0] == 'Q') m = 12 + 48;
  if (a[0] == 'K') m = 13 + 48;
  if (a[0] == 'A') m = 14 + 48;

  if (b[0] == 'T') n = 10 + 48;
  if (b[0] == 'J') n = 11 + 48;
  if (b[0] == 'Q') n = 12 + 48;
  if (b[0] == 'K') n = 13 + 48;
  if (b[0] == 'A') n = 14 + 48;

  return (m < n);
}

int cardValue (string c) {
  int v = c[0];

  if (c[0] == 'T') v = 10 + 48;
  if (c[0] == 'J') v = 11 + 48;
  if (c[0] == 'Q') v = 12 + 48;
  if (c[0] == 'K') v = 13 + 48;
  if (c[0] == 'A') v = 14 + 48;

  return v;
}

int straightFlush (vector<string> h) {
  for (int i = 1; i < h.size(); i++) {
    if (h[0][1] != h[i][1]) return 0;
  }

  int m = h[4][0];

  return (m * 9);
}

int fourOfaKind (vector<string> h) {
  int same_cards = 1;
  string high_card;
  int value = 0;
  
  for (int i = 1; i < h.size(); i++) {
    if (h[i][0] == h[i - 1][0]) {
      same_cards++;
      high_card = h[i][0];
    }
  }

  if (same_cards == 4) value = cardValue (high_card);
  
  return value;
}

int threeOfaKind (vector<string> h) {
  int same_cards = 1;
  string high_card;
  int value = 0;
  
  for (int i = 1; i < h.size(); i++) {
    if (h[i][0] == h[i - 1][0]) {
      same_cards++;
      high_card = h[i][0];
    }
  }

  if (same_cards == 3) value = cardValue (high_card);
  
  return value;
}
