# MiniGame - Maze

Hello my friends, Welcome to my minigame.

## Problem:

In my college, my teacher gave us a problem to solve. This problem was to find the right path to leave the maze.

## Solution:

1) I created a matriz 4x4 to by maze.
    - "S" - Starte.
    - "." - Can move forward.
    - "X" - Wall.
    - "E" - Exit;
2) I used pointers to controll the position and moviment. 
3) Criei uma função "Moviment", onde controla a direção que o usario quer ir.
4) Um loop while no main, para checar se é um "." ou "X" ou fim do labirinto "X". 
5) E uma função reset que retorna ao inicio "S" caso encontramos com "X".

Basicamente, controlamos para onde queremos ir de acordo com a função ``while``, que verifica, a cada chamada de função, se podemos avançar para aquela casa ou não e também se encontramos a saída ou não.

Quando encontramos o "X", chamamos a função ``reset`` para impedir o avanço. Aqui temos um problema, porque, na realidade, quando o "X" é encontrado, deveríamos voltar à casa anterior, mas ainda não consegui solucionar esse problema.

Usei ``ponteiros`` porque, com eles, conseguimos mudar o valor da variável nas chamadas de função e não precisamos ficar criando variáveis para armazenar essa nova posição.

