# CS50x

[CS50's Introduction to Computer Science](https://learning.edx.org/course/course-v1:HarvardX+CS50+X/home)



## [Week 0 - Scratch](https://learning.edx.org/course/course-v1:HarvardX+CS50+X/block-v1:HarvardX+CS50+X+type@sequential+block@a8730f85a9a94d41a784a58c4b6d8bdc)


* [Lecture](https://video.cs50.io/IDDmrzzB14M?screen=vm_vgY75qT4)


base-1 - unary
base-2 - binary


#### bit

💡 = 1

1 byte = 8 bits


#### ASCII - American Standard Code for Information Interchange

|Letter| Decimal | Binary|
|:----:|----|----|
|A|65| 0100 0001|
|1|49||
|0|48||
|!|33||
||||


Mas ASCII, são apenas 8 bits, são suficientes para o inglês, mas não para os idiomas do mundo, daí foi necessário utilizar mais bits, para comportar todas as opções, e para solucionar esse problema foi criado o Unicode.

#### RGB

Composto de 3 bytes para representar cores, 1 byte para **R**ed, 1 byte para **G**reen e 1 byte para **B**lue, são 24 bits (3 bytes) para representar uma cor em RGB, cada byte pode ir de 0 até 255 (valor em decimal)


## abstraction


## pseudocode
1:04:23

## Scratch

1:10


* **Function** é a implementação de um algoritmo
* **Events**, são gatilhos que o sistema usa para poder realizar coisas, como um clique de mouse, clique duplo, segurar o botão e arrastar, coisas do tipo
* Side effect resultado visual de algo (output)

Input, argument
Algoritmo, function
Output, side effect


https://youtu.be/IDDmrzzB14M?t=3372




## Week 1 - C

### comments

2:03:00 do vídeo

### functions


### operators

2:12:09


### format code

2:18:17


```%i``` para *integers*
`%li` para *long integers*
`%f` para *floats*


### truncation 
2:19:16


### type casting

```
 float z = (float) x / (float) y;
```

### floating-point imprecision

2:23:00

### Troubleshootings

#### error: implicit declaration of function 'get_rows' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
    
Acontece neste caso, porque as funções estão embaixo da main, mas para isso podemos manter a função e baixo e copiar somente o hearder dela acima da main que irá resulver o problema.

