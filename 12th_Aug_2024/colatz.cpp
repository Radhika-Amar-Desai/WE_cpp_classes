#include<iostream>

int main(int argc, char* argv[]){
    int n = 8;
    std::cout << n << std::endl;

    if  (argc != 2){
        std::cerr << "Error " << " <limit> " << std::endl;
    }

    while ( n != 1 ){
        
        if ( n % 2 == 0 ){
            n = n / 2;
        }
        else if(n % 2 == 1){
            n = n * 3 + 1;
        }

        std::cout << n << std::endl;
    }
}