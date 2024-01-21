# Greedy Algorithms

[Introduction to Greedy Algorithms | GeeksforGeeks](https://www.youtube.com/watch?v=HzeK7g8cD0Y&ab_channel=GeeksforGeeks)

An algorithmic paradigm that follow the problem solving approach of making the **locally optimal** choice at each stage with the hope of finding a **global optimum**.

* **Pros** - simple, easy to implement, run fast
* **Cons** - Very often they don't provide a globally optimum solution.


A Feasible Solution means a solution that satisfies some constraint



## General Solution Method

[3. Greedy Method - Introduction](https://www.youtube.com/watch?v=ARvQcqJ_-NY&ab_channel=AbdulBari)

[7:38](https://youtu.be/ARvQcqJ_-NY?t=458)



$n=5;$

a

|$a_1$|$a_2$|$a_3$|$a_4$|$a_5$|
|---|---|---|---|---|
|1|2|3|4|5|


```c

greedy_algorithm(a,n)
{
    for i=1 to n do
    {
        x = select(a);
        if feasible(x) them
        {
            solution = solution + x;
        }
    }
}

```


https://www.freecodecamp.org/news/greedy-algorithms/