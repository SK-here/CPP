/**
 * @SK-here
 *
 * Debug Excersice 
 * Week - 1
*/


# include <iostream>
// Problem Code - 1: The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// 	void main() {
// 		int i=0;
// 		i=i+1;
// 		cout<<i:
// 		/*print i \*//i=i+1
// 		cout<<++i;
// 	}


// Solution:

// int main() {
// 	int i=0;
// 	i=i+1;
// 	std::cout<<i;
// 	/*print i \*/// i=i+1;
// 	std::cout<<++i;
// }


// Problem - 2: Below code should print the sum of ‘i’ and ‘j’. 

// void main() {
// 	short i=2300, j=4322;
// 	cout>>"i+j=">>-(i+j);
// }


// Solution:

// int main() {
// 	short i=2300, j=4322;
// 	std::cout <<"i+j= " <<(i+j);
// }


// Problem - 3: Find Perimeter of a Rectangle

// void main() {
// 	float l, b;
// 	P = 2(l+b);
// 	printf("Perimeter=", P);
// }


// Solution

// int main() {
// 	std::cout <<" Enter Length and Breadth of a Rectangle";
// 	float l, b;
// 	std::cin >>l >>b;
// 	int P = 2*(l+b);
// 	std::cout <<"Perimeter = " <<P <<'\n';
// }


// Problem - 4: Print solid square pattern.

// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++i) {
//             cout<<"*\n";
//         }
//         cout<<endl;
//     }
// }

// int main() {
// 	int n;
//     std::cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             std::cout<<" * ";
//         }
//         std::cout<<'\n';
//     }
// }


// Problem - 5: Check Given number is prime or not

// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(i%n == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }


// Solution

// int main(){
// 	int n;
// 	std::cin >> n;
// 	bool isPrime = true;
//   for(int i=0; i<n ;i++){
//       if(n%2 == 0){
//           isPrime = false; 
// 		  break;
//       }
//   }
// 	if(isPrime){
// 		std::cout<<"Prime"<<'\n';	
// 	}
// 	else{
// 		std::cout<<"Not Prime"<<'\n';	
// 	}
//   return 0;
// }


// Problem - 6: Print numeric inverted hollow half pyramid

/**
 * Numeric inverted Hollow Pyramid
 * 		1 2 3 4 5
 * 		2     5
 * 		3   5
 * 		4 5
 * 		5 
*/


// 
// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// Solution

// int main(){
//     int n;
//     std::cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<=n;j++){
// 			if(j==i+1 || j == n || i==0){
//                 std::cout<<j <<" ";
//             }
//             else{
//                 std::cout<<"  ";
//             }
//         }
//         std::cout<<'\n';
//     }
// }


// Problem - 7: Print Pyramid

/**
 * 				1
 * 			   232
 * 			  34543
 * 			 4567654
 * 			567898765
*/			


// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// Solution:


//  int main() {
//    int n;
//    std::cin>>n;
//    for (int i = 1; i <= n; i++) {
//      for (int j = 1; j <= n - i; j++) {
//        std::cout <<" ";
//      }
//      for (int j = i; j < 2 * i; j++) {
//        std::cout <<j;
//      }
//      int ele = 2 * (i - 1);
//      for (int j = 1; j <= i - 1; j++) {
//        std::cout <<ele--;
//      }
//      std::cout<<"\n";
//    }
//    return 0;
//  }



// Problem - 8: Print hollow full pyramid pattern.

/**
*	    *    
*  	   * *   
*  	  *   *  
* 	 *     * 
*	*********
*/


// void main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n*2-1; ++j) {
// 		        int k=0;
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i - 1 || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             } k++;
//         }
//         cout<<endl;
//     }
// }


// Solution:

// int main(){
//      int n;
//      std::cin>>n;
//      for (int i=0; i<n; ++i) {
//          int k=0;
//          for (int j=0; j<n*2-1; ++j) {
//              if(j<n-i-1){
//                 std::cout<<" ";
//              }
//              else if(k < 2*i+1){
//                  if(k==0 || k == 2*i || i == n - 1){
//                     std::cout<<"*";
//                  }
//                  else{
//                     std::cout<<" ";
//                  }
//                  k++;
//              }
//              else{
//                 std::cout<<" ";
//              }
//          }
//          std::cout<<endl;
//      }
// }