#include <iostream>
using namespace std;
//criando a classe sala
class Sala {
public:
    int qtdsala = 6;
    int qtdaluno[6];
    int media = 0;

};

int main() {
    
    Sala nossasala;
    nossasala.qtdsala = 6;
    int i = 0;
    
    //pegando com o usuario a quantidade de alunos em cada sala
   while(i < nossasala.qtdsala ){
   int numsala = i+1;
   cout << "Quantidade de aluno das sala " << numsala <<endl;
   cin >> nossasala.qtdaluno[i];
   nossasala.media = nossasala.media + nossasala.qtdaluno[i];
   i = i+1;
}
    //calculando a media
    nossasala.media = nossasala.media/nossasala.qtdsala;
    cout << "Media de alunos por sala: " << nossasala.media<< endl;
    
    //definindo valores para pegar o maior e menor
    int maior = nossasala.qtdaluno[1];
    int menor = nossasala.qtdaluno[1];
    int numsalamenor;
    int numsalamaior;
    i = 0;
    
    //definindo a sala com maior numero
    while(i <nossasala.qtdsala){
        if(maior < nossasala.qtdaluno[i]){
            maior = nossasala.qtdaluno[i];
            numsalamaior = i+1;
            i++;
        }
        else{
            i++;
        }
    }
    i = 0;
    
    //definindo a sala com menor numero
    while(i <nossasala.qtdsala){
        if(menor > nossasala.qtdaluno[i]){
            menor = nossasala.qtdaluno[i];
            numsalamenor = i+1;
            i++;
        }
        else{
            i++;
        }
    }
    
    //mostrando pro usuario
    cout << "A sala "<<numsalamaior << " tem a maior quantidade de alunos com: " << maior << endl;
    cout << "A sala "<<numsalamenor << " tem a menor quantidade de alunos com: " << menor << endl;
    return 0;
}
