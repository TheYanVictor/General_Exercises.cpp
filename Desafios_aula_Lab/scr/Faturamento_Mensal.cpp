//Desafio TargetSistemas - Porcentagem de cada estado
//Bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

//Funcao principal
int main()
{
	//Variaveis
	double sp, rj, mg, es, outros, total;
	int i;
	
	//Atribuindo valores
	sp = 67836.43;
	rj = 36678.66;
	mg = 29229.88;
	es = 27165.48;
	outros = 19849.53;
	
	//Soma
	total = sp + rj + mg + es + outros;
	
	//Saida de dados
	cout << fixed << setprecision(2);
	cout << "Dado os valores: " << endl;
	cout << "SP: " << sp << endl;
	cout << "RJ: " <<  rj << endl; 
	cout << "MG: " << mg << endl;
	cout << "ES: " << es << endl; 
	cout << "Outros: " << outros;
	
	cout << "\n\nOs percentuais de representacao de cada estado sao: " << endl;
	cout << "SP: " << (sp/total)*100 << "%" << endl;
	cout << "RJ: " << (rj/total)*100 << "%" << endl; 
	cout << "MG: " << (mg/total)*100 << "%" << endl;
	cout << "ES: " << (es/total)*100 << "%" << endl;
	cout << "Outros: " << (outros/total)*100 << "%" << endl;
	
	return 0;
}
