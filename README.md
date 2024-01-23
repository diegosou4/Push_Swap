


# PUSH_SA
# PUSH_SB
# PUSH_SS
## Exemplo

1                2
2                1
3                3   
STACK_A         STACK_A

1                2
2                1
3                3   
STACK_B         STACK_B


## Ela troca os dois primeiros numeros de ordem sendo o que o segundo vai para o topo da lista
## E o primeiro vai para a segunda posicao, enquanto o terceiro nao muda de lugar
## Troca feita na mesma Stack
## PUSH_SS vai executar a SA E SB AO MESMO TEMPO

# PUSH_RA
# PUSH_RB
# PUSH_RR
## Exemplo

1                2
2                3
3                1
STACK_A         STACK_A

1                2
2                3
3                1
STACK_B         STACK_B

## O numero do topo vai para o final da da lista
## O Segundo assume a posicao anterior do primeiro
## E o terceiro assume a posicao do anterior do segundo
## PUSH_RR vai executar a RA E RB AO MESMO TEMPO


# PUSH_RRA
# PUSH_RRB
# PUSH_RRR
## EXEMPLO

1                3
2                1
3                2
STACK_A         STACK_A

1                3
2                1
3                2
STACK_B         STACK_B

## O numero do final vai para o topo do lista
## O PRIMEIRO ASSUME O LUGAR DO SEGUNDO
## E O SEGUNDO ASSUME O LUGAR ANTERIOR DO TERCEIRO
## PUSH_RRR vai executar RRA E RRB AO MESMO TEMPO

# PUSH_PA
# PUSH_PB

    <----------
1              \ 8
2                9
3                10
STACK_A         STACK_B
    ---------->
1 /              8
2                9
3                10
STACK_A         STACK_B

## O PA envia o primeiro numero da lista da STACK B
## para STACK A
## O PB envia o primeiro numero da lista da STACK A
## para STACK B



## 


1
4
5
3
2

4
5
3
2
1
ra (rotate a)

5
3
2
1
4
rotate(a)


3          5
2
1
4
push b

4         5
3
2
1
reverse rotate(a)

3          4
2          5
1
push b

2       3
1       4
        5
push b

1       2
        3
        4
        5
push b
        1
        2
        3
        4
        5
push b
8 Passos

Percorro a linked list e verifico se existe algum numero maior
se nao vou para o proximo,
Se eu achar 



Radix Sort

vamos pegar os valores e tornarem em base 2


depois disso vamos verificar bit por bit

101
001

comecamos da esquerda

a partir dai vamos organizando

depois que verificamos a primeira vez
vamos para proximo bit
verificando o proximo bit ordenamos novamente

temos que fazer o sort com tamanho do maior numero
10010
ex vamos percorrer cada bit
