# Week 1 - C

[Instalando o compilador Clang no Windows](./Lectures/Week_1/c_lang_windows.md)

## Lecture

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

## Section

https://cs50.harvard.edu/college/2022/fall/labs/1/2

### Labs

https://cs50.harvard.edu/x/2023/problems/1/

https://cs50.harvard.edu/x/2023/labs/1/

#### Half

https://cs50.harvard.edu/x/2023/problems/1/half/

Results -> https://submit.cs50.io/check50/cc58156a8b411682291e03f38f9a6f9642ad0210

#### Prime

* https://cs50.harvard.edu/x/2023/problems/1/prime/

[Teste de Primalidade em O(N−−√)](https://noic.com.br/materiais-informatica/curso/math-02/)

## Shorts

## [Problem Set 1](https://cs50.harvard.edu/x/2024/psets/1/)

* [X] [Hello, It’s Me](https://cs50.harvard.edu/x/2024/psets/1/me/)
* [X] [Mario Less](https://cs50.harvard.edu/x/2024/psets/1/mario/less/)
* [X] [Mario More](https://cs50.harvard.edu/x/2024/psets/1/mario/more/)
* [X] [Cash](https://cs50.harvard.edu/x/2024/psets/1/cash/)
* [x] [Credit](https://cs50.harvard.edu/x/2024/psets/1/credit/)

### Troubleshootings

#### error: implicit declaration of function 'get_rows' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
    
Acontece neste caso, porque as funções estão embaixo da main, mas para isso podemos manter a função e baixo e copiar somente o hearder dela acima da main que irá resulver o problema.
