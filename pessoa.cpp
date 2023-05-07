#include <iostream>
#include <string>
using namespace std;

class Pessoa {
protected:
    string nome;
    string dataNascimento;
public:
    Pessoa(string nome, string dataNascimento) {
        this->nome = nome;
        this->dataNascimento = dataNascimento;
    }

    virtual void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Data de nascimento: " << dataNascimento << endl;
    }
};

class PessoaFisica : public Pessoa {
private:
    string cpf;
public:
    PessoaFisica(string nome, string dataNascimento, string cpf)
    : Pessoa(nome, dataNascimento) {
        this->cpf = cpf;
    }

    void imprimir() override {
        Pessoa::imprimir();
        cout << "CPF: " << cpf << endl;
    }
};

class PessoaJuridica : public Pessoa {
private:
    string cnpj;
public:
    PessoaJuridica(string nome, string dataNascimento, string cnpj)
    : Pessoa(nome, dataNascimento) {
        this->cnpj = cnpj;
    }

    void imprimir() override {
        Pessoa::imprimir();
        cout << "CNPJ: " << cnpj << endl;
    }
};

int main() {
    string nome, dataNascimento, cpf, cnpj;
    int tipoPessoa;

    cout << "Escolha o tipo de pessoa (1 - Pessoa Fisica / 2 - Pessoa Juridica): ";
    cin >> tipoPessoa;

    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite a data de nascimento (DD/MM/AAAA): ";
    getline(cin, dataNascimento);

    if (tipoPessoa == 1) {
        cout << "Digite o CPF: ";
        getline(cin, cpf);

        PessoaFisica* pessoaFisica = new PessoaFisica(nome, dataNascimento, cpf);
        pessoaFisica->imprimir();
        delete pessoaFisica;
    }
    else if (tipoPessoa == 2) {
        cout << "Digite o CNPJ: ";
        getline(cin, cnpj);

        PessoaJuridica* pessoaJuridica = new PessoaJuridica(nome, dataNascimento, cnpj);
        pessoaJuridica->imprimir();
        delete pessoaJuridica;
    }
    else {
        cout << "Tipo de pessoa invalido!" << endl;
    }

    return 0;
}
