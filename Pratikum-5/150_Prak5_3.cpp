#include <iostream>
using namespace std;

void solve(int n, int arr[]) {
  if (n == 1) {
    cout << arr[0];
    return;
  }
  
  int nextArr[n];
  for(int i = 0;i < n - 1;i++) {
      nextArr[i] = arr[i] + arr[i+1];
  }
  
  solve(n-1,nextArr);
  cout << "\n";
  
  for (int i = 0;i < n;i++) {
      cout << arr[i] << " ";
  }
  
  return;
}

int main() {
  int n;
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;
  
  int arr[n];
  cout << "Masukkan bilangan : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  solve(n, arr);

  return 0;
}
