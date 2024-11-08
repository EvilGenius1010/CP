int GCD(int n1, int n2) { return n1; }

int TotientNumber(int n) {
  int counter = 1; // will be always true for 1.
  for (int i = 2; i < n; i++) {
    if (GCD(i, n) == 1) {
      counter++;
    }
  }
  return counter;
}
