#include <iostream>
#include <locale.h> 
int main() {
  setlocale(LC_ALL, "Turkish");
    int i;
    int a;
    int b;
    int c;
    std::cout << "";
    std::cin >> i; 
    a=i%10;
    b=(i%100)/10;
    c=i/100;
    switch(c) {
        case 1:
            std::cout<< "yüz";
            break;
        case 2:
            std::cout<< "ikiyüz";
            break;
        case 3:
            std::cout<< "üçyüz";
            break;
        case 4:            
            std::cout<< "dörtyüz";
            break;
        case 5:
            std::cout<< "beşyüz";
            break;
        case 6:
            std::cout<< "altıyüz";
            break;
        case 7:
            std::cout<< "yediyüz";
            break;
        case 8:
            std::cout<< "sekizyüz";
            break;
        case 9:
            std::cout<< "dokuzyüz";
            break;
    }
    switch(b) {
        case 1:
            std::cout<< " on ";
            break;
        case 2:
            std::cout<< " yirmi ";
            break;
        case 3:
            std::cout<< " otuz ";
            break;
        case 4:            
            std::cout<< " kırk ";
            break;
        case 5:
            std::cout<< " elli ";
            break;
        case 6:
            std::cout<< " altmış ";
            break;
        case 7:
            std::cout<< " yetmiş ";
            break;
        case 8:
            std::cout<< " seksen ";
            break;
        case 9:
            std::cout<< " doksan ";
            break;

    }
    switch(a) {
        case 1:
            std::cout<< "bir";
            break;
        case 2:
            std::cout<< "iki";
            break;
        case 3:
            std::cout<< "üç";
            break;
        case 4:
            std::cout<< "dört";
            break;
        case 5:
            std::cout<< "beş";
            break;
        case 6:
            std::cout<< "altı";
        case 7:
            std::cout<< "yedi";
            break;
        case 8:
            std::cout<< "sekiz";
            break;
        case 9:
            std::cout<< "dokuz";
            break;
    }
    return 0;
}