#include <stdio.h>
#include <string.h>
 
int main(){
    char i='s';
 int x;
 int a;
 int b;
  while(i=='s'){
    printf("\n===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração");
    printf("\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
    
    scanf("%d", &x);
    if(x==0 || x>5){
        printf("Erro");
        return 0;
    }
    if(x==5){
        printf("Obrigado por usar a calculadora! Até a próxima.");
        return 0;
    }
    if(x==1){
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: ");
        int c= a+b;
        printf("%d + %d = %d", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }else{
          }
    }
    if(x==2){
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: ");
        int c= a-b;
        printf("%d - %d = %d", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }else{
            
          }
    }
    if(x==3){
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: ");
        int c= a*b;
        printf("%d * %d = %d", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }else{
            
          }
    }
    if(x==4){
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        if(a>0){
        printf("Resultado: ");
        int c= a/b;
        printf("%d / %d = %d", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }else{
            
          }
        }else{
            printf("Erro: Divisão por zero não é permitida.");
            printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }else{
            
          }
        }
     }
    }
 return 0;
 }
