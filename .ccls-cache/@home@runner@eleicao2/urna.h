#include <iostream>
#include <string>
using namespace std;

class Urna
{
  private:
    string nome;
    int n_votos;
  public:
    void votar();
    int apuracao() const;
    Urna(const string&candidato, int votos = 0);
    ~Urna();
};