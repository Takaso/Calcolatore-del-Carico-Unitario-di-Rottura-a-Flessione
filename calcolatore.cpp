#include <iostream>
#include <string>

int main() {
    std::cout<<"Carico Unitario di Rottura a Flessione"<<std::endl<<"\n1 - Calcolo del momento flettente"<<std::endl;
    std::cout<<"2 - Calcolo della sollecitazione unitaria";
    std::cout<<std::endl<<"3 - Visualizza nomi";
    std::cout<<std::endl<<"Scegli un'opzione > ";
    int opzione;
    std::cin>>opzione;
    if (opzione == 1) {
        int F; std::cout<<"Inserisci F > ";
        std::cin>>F;
        int L; std::cout<<"Inserisci L > ";
        std::cin>>L;
        int rax = F*L; int mov = rax/4;
        std::cout<<"M è "<<mov;
        return 0;
    }
    else if (opzione == 2) {
        int M; std::cout<<"Inserisci il momento flettente > ";
        std::cin>>M;
        int J; std::cout<<"Inserisci il momento d'inerzia > ";
        std::cin>>J;
        int y; std::cout<<"Inserisci la distanza  > ";
        std::cin>>y;
        int eax = M*J; int os = eax/y;
        std::cout<<"M è "<<os;
        return 0;
    }
    else if (opzione == 3) {
        std::cout<<"Of è la sollecitazione unitaria"<<std::endl<<"Mf è il momento flettente"<<std::endl<<"y è la distanza di un'area elementare dall'asse neutro (mm)"<<std::endl<<"J è il momento d'inerzia della sezione rispetto all'asse neutro (mm4)";
        return 0;
    }
    else {
        return 1;
    }
    return EXIT_SUCCESS;
}