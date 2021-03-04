// NICOLAS DE BARROS -> TIA : 32070837

#include <iostream>
#include <string>
using namespace std;

//Funcoes chamadas nos exercicios 11, 12, 13 ;)
//EXERCICIO 11
float MulViaAdd(float X, int Y)
{
	int i;
	float acumulador = 0;

	for (i = 0; i < Y; i++)
	{
		acumulador = acumulador + X;
	}
	return acumulador;
}

//EXERCICIO 12
float Min(float X, float Y)
{
	if (X > Y)
	{
		return Y;
	}

	else
	{
		return X;
	}
}

//EXERCICIO 13
float Max(float X, float Y)
{
	if (X > Y)
	{
		return X;
	}

	else
	{
		return Y;
	}
}

//EXERCICIO 14
int VowelsCount(string palavra)
{
	int tamanho = palavra.length();
	int i;
	int qtde_vogais=0;

	for (i = 0; i<=tamanho - 1; i++)
	{
		if (palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E'
			|| palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O'
			|| palavra[i] == 'u' || palavra[i] == 'U')
		{
			++qtde_vogais;
		}
		else { continue; }
	}
	cout << "A palavra tem " << qtde_vogais << " vogais ";
	return qtde_vogais;
}

//EXERCICIO 15 FUNC AUX
bool Colisao(int X1, int Y1, int R1, int X2, int Y2, int R2)
{
	int soma_r = R1 + R2;
	int a, b;
	a = X1 - X2;
	b = Y1 - Y2;
	float distancia = sqrt(a * a + b * b);
	return soma_r >= distancia;
}

void exercicio1()
{
	int	A, B, temp;
	cout << "Digite o primeiro numero : ";
	cin >> A;
	cout << "Digite o segundo valor : ";
	cin >> B;

	temp = A;
	A = B;
	B = temp;

	cout << "primeiro valor : " << A << "\nsegundo valor : " << B;

}

void exercicio2()
{
	int KM, H, Vm;

	cout << "Digite a distancia em km : ";
	cin >> KM; 
	cout << "Digite o tempo em horas para percorrer essa distancia : ";
	cin >> H;

	Vm = KM / H;
	cout << "A velocidade media foi de : " << Vm;

	if (Vm > 90)
		{
			cout << "\nA veocidade excedeu o limite de 90km/h" ;
		}
}

void exercicio3()
{
	string letra;

	cout << "Digite uma letra para ver se e vogal ou consoante : ";
	cin >> letra;

	if (letra =="a" || letra == "A" || letra == "e" || letra == "E" ||
		letra == "i" || letra == "I" || letra =="o" || letra == "O" ||
		letra == "u" || letra == "U")
	{
		cout << "A letra e VOGAL ";
	}

	else
	{
		cout << "A letra e CONSOANTE";
	}
}

void exercicio4()
{
	int numero;
	
	cout << "Digite o numero a ser verificado : ";
	cin >> numero;

	if (numero % 2 == 0)
	{
		cout << "o numero e par ";
	}
	
	else
	{
		cout << "o numero e impar";
	}
}

void exercicio5()
{
	int X, Y;

	cout << "Digite o ponto X : ";
	cin >> X;
	cout << "Digite o ponto Y : ";
	cin >> Y;

	if (3 * X + Y == 8)
	{
		cout << "Pertence a reta !";
	}

	else
	{
		cout << "Nao pertence a reta";
	}
}

void exercicio6()
{
	int x, n;
	int r = 1;

	cout << "Digite o numero a ser fatorado";
	cin >> x;

	for (n = 1; n <= x; ++n)
	{
		r = r * n;
	}
	cout << r << "\n";
}

void exercicio7() 
{
	int list[10]{};
	int i;
	cout << "digite os elementos do vetor \n";

	for (i = 0; i < 10; i++)       //criando o vetor 
	{
		cin >> list[i];
	}
	cout << "\n";
	
	int maior_elemento, menor_elemento;
	maior_elemento = 0;
	menor_elemento = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			if (list[i] > list[i + 1])
			{
				maior_elemento = list[i];
				break;
			}
		}
		else if (list[i] > maior_elemento)
		{
			maior_elemento = list[i];
			break;
		}
	}
	
	for (i = 0; i < 10; i++) 
	{
		if (i != 8)
		{
			if (list[i] < list[i + 1])
			{
				menor_elemento = list[i];
				break;
			}
		}
		else if (menor_elemento > list[i])
		{
			menor_elemento = list[i];
			break;
		}
	}
	
	cout << "O maior elemento é : ", maior_elemento ;
	cout << "O menor elemento é : ", menor_elemento ;
}

void exercicio8()
{
	int a, b, n, prox, i;
	cout << "Digite o N para a sequencia de Fibonacci : \n";
	cin >> n;
	a = 1;
	b = 1;      //dois primeiros numeros
	prox = 0;

	cout << a;
	cout << "/";
	cout << b;
	cout << "/";

	for (i = 0; i< n-2; i++)
	{
		prox = a + b;
		//cout << prox + "/";
		printf("%d/", prox);
		 
		a = b;
		b = prox; 
	}
}

void exercicio9()
{
	int list[10]{};
	int i;
	cout << "Digite os elementos a tere sua ordem invertida : ";

	for (i = 0; i < 10; i++)       //leitura de valores 
	{
		cin >> list[i];
	}
	cout << "\n";

	for (i = 9; i >= 0; i--)
	{
		cout << list[i];
		if (i != 0)
		{
			cout <<",";
		}
		
	}

}

void exercicio10()
{
	int list[6]{};
	int i, j;
	int troca;
	cout << "Digite os 6 elementos da list para serem ordenados";

	for (i = 0; i < 6; i++)
	{
		cin >> list[i];
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6 - i - 1; j++)     //metodo bolha 
		{
			if (list[i] > list[j + 1])
			{
				troca = list[j];
				list[i] = list[j + 1];
				list[j + 1] = troca;
			}	
		}
	}

	for (i = 0; i < 6; i++)
	{
		cout << list[i] << " ";
	}
}

void exercicio11()
{
	float X;
	int Y, i; 
	float acumulador = 0;
	float resultado;
	
	cout << "Digite dois numeros p ser feita a multiplicacao : \n";
	cin >> X;
	cin >> Y;

	resultado = MulViaAdd(X, Y);
	cout << "O resultado e : " << resultado;
	
} 

void exercicio12()
{
	float valor1, valor2, menor_valor;
	cout << "Digite os dois valores a serem comparados :\n"; 
	cin >> valor1;
	cin >> valor2; 

	menor_valor = Min(valor1, valor2);

	cout << "o menor valor e : " << menor_valor;
}

void exercicio13()
{
	float valor1, valor2, maior_valor;
	cout << "Digite os dois valores a serem comparados :\n";
	cin >> valor1;
	cin >> valor2;

	maior_valor = Max(valor1, valor2);

	cout << "o maior valor e : " << maior_valor;
}

void exercicio14()
{	
	int vogais;
	string palavra;

	cout << "Digite a palavra para verificacao de quantas vogais tem nela :";
	cin >> palavra;
	
	vogais = VowelsCount(palavra);
}

void exercicio15()
{
	int X1, X2;
	int Y1, Y2;
	int R1, R2;

	cout << "digite as cordenadas do ponto 1 (X e Y):\n";
	cin >> X1;
	cin >> Y1;
	cout << "digite o raio do ponto 1 : ";
	cin >> R1;

	cout << "digite as coordenadad do ponto 2 : (X e Y):\n";
	cin >> X2;
	cin >> Y2;
	cout << "digite o raio do ponto 2 : ";
	cin >> R2;

	bool colisao_b;
	colisao_b = Colisao(X1, Y1, R1, X2, Y2, R2);

	if (colisao_b)
	{
		cout << "Os circulos estao colidindo!";
	}
	else {
		cout << "Os circulos não estao colidindo!";
	}
	cout << "\n";
}

int main()
{
	exercicio1();            //SELECIONAR O EXERCICIO P TESTE NA MAIN						
}							 //Só trocar o numero do exercicio na funcao para chama-la

