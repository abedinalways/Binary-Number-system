// #include <iostream>
// using namespace std;
// int decToBin(int decNum){
//   int ans = 0;
//   int pow = 1;
//   while(decNum>0){
//   int rem = decNum % 2;
//   decNum /= 2;
//     ans+= rem*pow;
//     pow *= 10;
//   }
//   return ans;
// }
// int main(){
// int decNum = 6;
/// cout << decToBin(decNum) << endl;
//   for (int i = 1; i <= 20;i++){
//     cout << decToBin(i) << endl;
//   }
//     return 0;
// }
#include <iostream>
using namespace std;
int binToDecimal(int binNum){
  int ans = 0;
  int pow = 1;
  while(binNum>0){
    int rem = binNum % 10;
    ans += rem * pow;
    binNum /= 10;
    pow *= 2;
  }
  return ans;
}
int main(){
  cout << binToDecimal(1000101) << endl;
  return 0;
}