# matrixDet
Algoritmo de calculo de DETERMINANTE através da expansão em linhas e conversão em matriz triangular superior

Este cógigo foi desenvolvido com o objetivo testar desenvolver conhecimentos algébricos e lógicos.

Primeiramente, informa-se a ordem da matriz desejada, isto é, considerando que apensas existe determinante funções quadradas, informa-se a ordem para i e j da matriz.
Após isto, sabendo as dimenções, é solicitado individualmente as entradas da matriz.

Após informada todas as entradas, o código utiliza de repetições FOR em cascata para zerar o triangulo inferior da matriz:

Lógica: 
  Dada a matriz de ordem 3:   a11 a12 a23
                              a21 a22 a23
                              a31 a32 a33
                              
Calcula-se para zerar:
a21 - a11 * x = 0
a11 = a21 / x

Logo: a21 / a11 = x
Assim, o valor de x é armazenado na variavel 'mult', que é posteriormente multiplica pela linha1 e subtraida da linhaN, zerando as entradas do triangulo inferior e conservando
a igualdade matricial.


Após a transformação em matriz triangular, a determinante é calculada apenas multiplicando as entradas de sua diagonal principal:

|a11 a12 a13 |
| 0  a22 a23 |  =  det(a11 * a22 * a33)
| 0   0  a33 |

** Código em versao de testes, contando ainda com BUGS como no caso de 0 como termo a11, que resulta em uma divisão por 0.
