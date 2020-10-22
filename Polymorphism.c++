#include <bits/stdc++.h>

using namespace std;

class Animal {
    private:
    string nome;
    public:
    Animal(string nome = "");
    void setNome(string nome);
    string getNome();
    void print();
    virtual string som() {
        return "";
    }
};
class Gato:public Animal {
    private:

    public:
    Gato(string nome = "");
    string som();
};
class Cachorro:public Animal {
    private:

    public:
    Cachorro(string nome = "");
    string som();
};

Animal::Animal(string nome ){
    this -> setNome(nome);
}

void Animal::setNome(string nome) {
    this -> nome = nome;
}

string Animal::getNome() {
    return nome;
}

void Animal::print() {
    cout << "Animal: " << this -> getNome() <<  endl;
    cout << "Som: " << this -> som() <<  endl;
}

Gato::Gato(string nome) {
    this -> setNome(nome);
}

string Gato::som() {
    return "Meow!";
}

Cachorro::Cachorro(string nome) {
    this -> setNome(nome);
}

string Cachorro::som() {
    return "AuAu!";
}

int main() {

   Animal *animais[3] = {new Gato("Gato"), new Cachorro("Bob"), new Gato("Cat")};

   for(int i = 0; i < 3; i++) {
       animais[i] -> print();
       cout << endl;
   }

    return 0;
}
