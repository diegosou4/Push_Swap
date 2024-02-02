# Push Swap

## Visão Geral

O projeto Push Swap tem como objetivo organizar uma pilha de números usando um conjunto limitado de movimentos, buscando a organização mais eficiente. Neste projeto, utilizei e adaptei os algoritmos QuickSort e Insertion Sort. O QuickSort foi usado pela sua abordagem interessante de organização com um pivô, enquanto o Insertion Sort auxiliou na busca da maneira mais econômica de posicionar o próximo número.

## Movimentos

- **sa (swap a):** Troca os dois primeiros elementos no topo da pilha A. Não faz nada se houver apenas um elemento ou nenhum.
- **sb (swap b):** Troca os dois primeiros elementos no topo da pilha B. Não faz nada se houver apenas um elemento ou nenhum.
- **ss:** Realiza as operações sa e sb ao mesmo tempo.
- **pa (push a):** Pega o primeiro elemento no topo da pilha B e coloca no topo da pilha A. Não faz nada se a pilha B estiver vazia.
- **pb (push b):** Pega o primeiro elemento no topo da pilha A e coloca no topo da pilha B. Não faz nada se a pilha A estiver vazia.
- **ra (rotate a):** Desloca todos os elementos da pilha A para cima por 1. O primeiro elemento torna-se o último.
- **rb (rotate b):** Desloca todos os elementos da pilha B para cima por 1. O primeiro elemento torna-se o último.
- **rr:** Realiza as operações ra e rb ao mesmo tempo.
- **rra (reverse rotate a):** Desloca todos os elementos da pilha A para baixo por 1. O último elemento torna-se o primeiro.
- **rrb (reverse rotate b):** Desloca todos os elementos da pilha B para baixo por 1. O último elemento torna-se o primeiro.
- **rrr:** Realiza as operações rra e rrb ao mesmo tempo.

## Demonstração

![VÍDEO](img/Sort100.gif)

## Resultado
![Resultado](https://i.imgur.com/acNiC4p.png)

## Instalação

Para executar o Push Swap em sua máquina, siga estas etapas:

1. Clone o repositório:

   ```bash
   git clone https://github.com/diegosou4/Push_Swap
   cd Push_swap
   make
   ./push_swap "Aqui você passa os números que deseja ver organizados"
