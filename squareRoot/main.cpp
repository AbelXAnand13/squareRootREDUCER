// Abel Anand
#include <iostream>
using namespace std;
void sqrtReducer(int num) {
    int primeNum = 1;
    int d = 2;
    while (d * d <= num){
    if (num % (d * d) == 0){
    num = num / (d * d);
    primeNum = primeNum * d;
    }
    else{
          d = d + 1;
    }
        
}
    cout << primeNum<< " * sqrt" << num;
}
int main() {
    int num;
    cout << "Enter a number to reduce\n";
    cin >> num;
    sqrtReducer(num);
}
