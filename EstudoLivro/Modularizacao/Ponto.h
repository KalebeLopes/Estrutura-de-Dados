// TUDO OQ SERÁ VISÍVEL PARA O PROGRAMADOR

typedef struct ponto Ponto;
    Ponto* Ponto_cria(float x, float y); // Cria um novo ponto
    void Ponto_libera(Ponto* p); // Libera um ponto
    int Ponto_acessa(Ponto* p, float* x, float* y); // Acessa valores x e y de um ponto
    int Ponto_atribui(Ponto* p, float x, float y); // Atribui os valores x e y a um ponto
    float Ponto_distancia(Ponto* p1, Ponto* p2); // Calcula a distancia entre dois pontos
     
