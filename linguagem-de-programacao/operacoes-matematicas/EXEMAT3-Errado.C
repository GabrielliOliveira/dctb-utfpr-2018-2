/* Exemplo de erro de uso de resto da divis�o com reais (Erro de compila��o)
   O programador deve evitar que isto ocorra, sempre usando inteiro
   com este operador.                                                       */

float numero1, numero2;

int main(){
	printf("Entre com o primeiro numero.: ");
	scanf("%f",&numero1);
	printf("Entre com o segundo numero..: ");
	scanf("%f",&numero2);
	printf("\nO resto da divisao vale...: %d", numero1%numero2);
	return 0;
}
