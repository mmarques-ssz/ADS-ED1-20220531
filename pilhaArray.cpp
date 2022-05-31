#include <iostream>
using namespace std;

#define MAX 10

struct Pilha {
	int qtde;
	float elementos[MAX];
};

Pilha* init() {
	Pilha *p = new Pilha;
	p->qtde = 0;
	return p;
};

int push(Pilha *p, float v) {
	int podeEmpilhar = (p->qtde < MAX);
	if (podeEmpilhar) {
		p->elementos[p->qtde++] = v;
	}
	return podeEmpilhar;
}

float pop(Pilha *p) {
	int podeDesempilhar = (p->qtde > 0);
	float ret;
	if (podeDesempilhar) {
		ret = p->elementos[p->qtde-1];
		p->qtde--;
	}
	else
	{
		ret = NULL;
	}
	return ret;
}

int count(Pilha *p) {
	return (p->qtde);
}

int isEmpty(Pilha *p) {
	return (p->qtde == 0);
}

void print(Pilha *p) {
	for(int i = p->qtde-1; i>=0; --i) {
		cout << p->elementos[i] << endl;
	}
	cout << "----------" << endl;
}

int main(int argc, char** argv)
{
	Pilha *pilhaFloat;
	pilhaFloat = init();
	cout << "Pilha vazia: " << (isEmpty(pilhaFloat)?"SIM":"NAO") << endl;
	cout << "Empilhado: " << (push(pilhaFloat, 10)?"SIM":"NAO") << endl;
	cout << "Pilha vazia: " << (isEmpty(pilhaFloat)?"SIM":"NAO") << endl;
	cout << "Empilhado: " << (push(pilhaFloat, 20)?"SIM":"NAO") << endl;
	cout << "Empilhado: " << (push(pilhaFloat, 30)?"SIM":"NAO") << endl;
	cout << "Empilhado: " << (push(pilhaFloat, 40)?"SIM":"NAO") << endl;
	cout << "Empilhado: " << (push(pilhaFloat, 50)?"SIM":"NAO") << endl;
	
	cout << "Qtde: " << count(pilhaFloat) << endl;
	print(pilhaFloat);
	
	cout << "Desempilhou: " << pop(pilhaFloat) << endl;
	cout << "Qtde: " << count(pilhaFloat) << endl;
	print(pilhaFloat);
	
	cout << "Empilhado: " << (push(pilhaFloat, 60)?"SIM":"NAO") << endl;
	cout << "Qtde: " << count(pilhaFloat) << endl;
	print(pilhaFloat);
	
	
	
	return 0;
}
