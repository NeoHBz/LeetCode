#include <iostream>
#include <vector>
using namespace std;

class QuickSort {
 private:
  static void qs(int array[], int left, int right) {
    if (left >= right) return;

    int p = partition(array, left, right);
    qs(array, left, p - 1);
    qs(array, p + 1, right);
  }
  static int partition(int a[], int l, int r) {
    int pivot = a[(l + r) / 2];
    swap(a[(l + r) / 2], a[r]);

    int i = l;
    for (int j = l; j < r; j++) {
      if (a[j] < pivot) {
        swap(a[i], a[j]);
        i++;
      }
    }

    swap(a[i], a[r]);
    return i;
  }

 public:
  static void sort(int array[]) {
    int len = sizeof(array) / sizeof(array[0]);
    qs(array, 0, len - 1);
  }
};

int main() {
  int input[] = {6, 2, 7, 9, 1, 4, 3, 8};

  return 0;
}
