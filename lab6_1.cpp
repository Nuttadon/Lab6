#include<iostream>
using namespace std;

int main(){
    int i=0,N,even=0,odd=0;
    int number[100];
    while(i>=0){
      cout << "Enter an integer: ";  
      cin >> number[i];
      if(number[i]==0){
          break;
      }
      i++;
    }   
    N=i-1;
    while (N>=0){
      if(number[N]%2==0){
        even++;
      }
      else{
        odd++;
      }
      N--;
    }
    
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}

// int main(){
//     int i=0,N,even=0,odd=0,lim=1;
//     int number[lim];
//     while(i>=0){
//       cout << "Enter an integer: ";  
//       cin >> number[i];
//       if(number[i]==0){
//           break;
//       }
//       i++;
//       lim++;
//       int number[lim];
//     }   
//     N=i-1;
//     while (N>=0){
//       if(number[N]%2==0){
//         even++;
//       }
//       else{
//         odd++;
//       }
//       N--;
//     }
    
//     cout << "#Even numbers = "<<even<<endl;
//     cout << "#Odd numbers = "<<odd;
//     return 0;
// }
