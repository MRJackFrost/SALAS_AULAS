#include <iostream>
using namespace std;

class Sala {
public:
    int qtdsala = 6;
    int qtdaluno[6];
    int media = 0;

};

int main() {

    Sala nossasala;
    nossasala.qtdaluno[0] = 35;
    nossasala.qtdaluno[1] = 4;
    nossasala.qtdaluno[2] = 22;
    nossasala.qtdaluno[3] = 20;
    nossasala.qtdaluno[4] = 36;
    nossasala.qtdaluno[5] = 30;
    nossasala.qtdsala = 6;
    int i = 0;
   while(i < nossasala.qtdsala ){
   int numsala = i+1;
   cout << "A sala: " << numsala << " Quantidade de alunos: " << nossasala.qtdaluno[i]<<endl;
   nossasala.media = nossasala.media + nossasala.qtdaluno[i];
   i = i+1;
}
    nossasala.media = nossasala.media/nossasala.qtdsala;
    cout << "Media de alunos por sala: " << nossasala.media<< endl;
    i = 0;
    while(i <nossasala.qtdsala){
        
        if(nossasala.qtdaluno[i] >= nossasala.media){
            int numsala = i+1;
            int showqtd = nossasala.qtdaluno[i] - nossasala.media;
            cout << "A sala: " << numsala << "tem: " << showqtd << " alunos acima da media"<< endl;
            i++;
        }
        else{
            i++;
        }
    }
    return 0;
}