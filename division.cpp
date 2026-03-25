#include<iostream>


int main(){

   std::string x = "shivam";

    switch(x) {

        case 1 + 2:
        std::cout<<"this is 3 "<<std::endl;
        break;
        case 97:
        std::cout<<"this is 97 for a "<<std::endl;
        break;
        case 5:
        std::cout<<"this is 5"<<std::endl;
        break;
        default:
        std::cout<<"number is not here"<<std::endl;
        break;


}

return 0;
}



//if statement example 1
// int main(){

//   int x = 10;

//   if(x<5){
//     std::cout<<"x is less than 5"<<std::endl;
//   }
//   else{
//     std::cout<<"x is greater then 5"<<std::endl;
//   }
//   return 0;


    
// }

//if statement example 2

// int main(){

//     int x=0; // int x{}; uniform intialization set zero to x
//     std::cout<<"enter the value"<<std::endl;
//     std::cin>>x;

//     if(x==0){
//         std::cout<<" x equal to  0"<<std::endl;
//     }
//     if(x!=0){
//         std::cout<<"x value is not equal to 0"<<std::endl;
//     }
//     return 0;
// }

//if else statement example 1

/// @brief to increase the readability of the code we can use if else statement instead of multiple if statements
/// 
// int main(){

//     int x {};
//     std::cout<<"enter the number: "<<std::endl;

//     std::cin>>x;
//     if(x==0){
//        std::cout<<"the number is equal to 0"<<std::endl;
//     }
//     else{
//         std::cout<<"the number is not equal to 0"<<std::endl;
//     }
//     return 0;
// }

// if else chaining example 1

// int main(){
//     int x{};
//     std::cout<<"enter the number: "<<std::endl;
//     std::cin>>x;
//     if(x==0){
//         std::cout<<"the number is equal to 0"<<std::endl;
//     }
//     else if(x<0){
//         std::cout<<"the number is negative"<<std::endl;
//     }
//     else if(x>0){
//         std::cout<<"the number is positive"<<std::endl;
//     }
//     return 0;
// }

//switch statement example 1

// int printsomething(bool x){
//     switch (x)
//     {
//     case 1:
//         std::cout<<"one"<<std::endl;
//         break;
    
//     default:
//         std::cout<<"number is not between 1 and 3"<<std::endl;
//         break;
//     }
//     return 0;

// }


// int main(){
//     bool x = true;
//     std::cout<<"enter the number: "<<std::endl;
//     std::cin>>x;
//     printsomething(x);

//     return 0;
// }