#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_bruto, inss, salario_liquido, salario_base, valor_dependentes, imposto_renda, desconto;
    int dependentes;
    printf("Informe seu salário: ");
    scanf("%f", &salario_bruto);
    if(salario_bruto <= 1751.81){
        inss = salario_bruto * 0.08;
    }
    else if( (salario_bruto > 1751.81) && (salario_bruto <= 2919.72) ){
        inss = salario_bruto * 0.09;
    }
    else if( (salario_bruto > 2919.72) && (salario_bruto <= 5839.45) ){
        inss = salario_bruto * 0.11;
    }
    else{
        inss = 634.34;
    }


    printf("\nInforme seu número de dependentes: ");
        scanf("%i", &dependentes);
/*        switch(dependentes){
        case 1:
            valor_dependentes = 189.59;
            break;
        case 2:
            valor_dependentes = 189.59 * 2;
            break;
        case 3:
            valor_dependentes = 189.59 * 2;
            break;
        default:
            valor_dependentes = 0;
            break;
        return valor_dependentes;
    }
        //TESTANDO *******************************************
  */
        salario_base = salario_bruto - inss - dependentes * 189.59;

        printf("\nCalculando imposto de renda......\n");
        if(salario_base <= 1903.98){
            imposto_renda = 0;
            desconto = 0;
        }
        else if( (salario_base > 1903.98) && (salario_base <= 2826.65) ){
            imposto_renda = salario_base * 0.075;
            desconto = 142.80;
        }
        else if( (salario_base > 2826.65) && (salario_base <= 3751.05) ){
            imposto_renda = salario_base * 0.15;
            desconto = 354.80;
        }
        else if( (salario_base > 3751.05) && (salario_base <= 4664.68) ){
            imposto_renda = salario_base * 0.225;
            desconto = 636.13;
        }
        else{
            imposto_renda = salario_base * 0.275;
            desconto = 869.36;
        }
        salario_liquido = salario_bruto - inss - (imposto_renda - desconto);
        printf("\nSalário total de: %f\n", salario_liquido);





    return 0;
}
