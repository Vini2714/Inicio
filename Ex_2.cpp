
#include <iostream>

int main(){
    int numero1;
    int numero2;
    int soma;

    std::cout<<"Digite o valor de dois inteiros\n";
    std::cin >> numero1;
    std::cout<<"\n";
    std::cin >> numero2;

    soma = numero1 + numero2;

    std::cout <<"O valor da soma foi "<<soma<< std::endl;


    return 0;
}