// #include<iostream>
// using namespace std;

// int Sqsum(int n){
//   if(n==1){
//     return 1;
//   }
  
//   return n*n+Sqsum(n-1);
// }

// int main(){
//   int n;
//   cin>>n;

//   cout<<Sqsum(n);
//   return 0;
// }
#include<iostream>
using namespace std;

int  Sqsum(int n){
  if(n==1){
    cout<<1;
    return 1;
  }
 // Recursive call to sum squares up to (n-1)
    int sum = Sqsum(n - 1);

    // Print each square as the function unwinds
    cout << " + " << n * n;

    // Return the sum of squares from 1 to n
    return sum + n * n;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Start the recursive process
    int result = Sqsum(n);

    // Print the final sum
    cout << " = " << result << endl;
    return 0;
}