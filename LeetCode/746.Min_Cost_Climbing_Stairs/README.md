# 746. Min Cost Climbing Stairs

## [Link do problema](https://leetcode.com/problems/min-cost-climbing-stairs/description/?envType=problem-list-v2&envId=55ac4kuc)

O problema pode ser resolvido usando programação dinâmica, uma técnica que consiste em achar uma relação de recorrência que resolva o problema e guardar os valores
para consulta depois, evitando cálculos desnecessários <br>

A relação de recorrência pode ser feita da seguinte forma: o custo mínimo no index i $dp[i]$ é o custo daquele index mais o mínimo entre $d[i + 1]$ e $dp[i + 2]$ <br>

$\displaystyle dp[ i] \ =\ cost[ i] \ +\ min( dp[ i\ +\ 1] ,\ dp[ i\ +\ 2]$
