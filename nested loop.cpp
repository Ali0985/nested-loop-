 #include <iostream>
using namespace std;
                                                                                        
int main() {
                                                                                        
   int i, j, n;
   cout << "Enter Number :  ";
   cin >> n;
                                                                                        
   for (i = 1; i <= 6; i++) {
      for (j = 1; j <= i; j++) {
         cout << "*";
      }
      cout << endl;
   }

    return 0;
}