# [Week 3 - Algorithms](https://cs50.harvard.edu/x/2024/weeks/3/)

### Sorting Algorithms


|Algorithm|$Big 0$|$Big\Omega$|
|---|---|---|
|Selection Sort|$O(n²)$|$\Omega(n²)$|
|Bubble Sort|$O(n²)$|$\Omega(n)$|
|Merge Sort|$O(n\log{}n)$|$\Omega(n\log{}n)$|

`sorted50000.txt`
|Program|$Big 0$ _runtime_|$Big\Omega$ _runtime_|
|---|---|---|
|.\sort1|5.04s|0.81s|
|.\sort2|0.61s|0.71s|
|.\sort3|2.81s|2.61s|

`reversed50000.txt`

`sorted50000.txt`

```
sort1 uses: Bubble Sort

How do you know?:
Takes 5.04s to sort reversed50000.txt
Takes 0.81s to sort sorted50000.txt
Because comparing the worst case, this sort1 is more performative than sort3

sort2 uses: Merge Sort

How do you know?:
Takes 0.61s to sort reversed50000.txt
Takes 0.71s to sort sorted50000.txt
Because it is the most efficient algorithm in both test scenarios

sort3 uses: Selection Sort

How do you know?:
Takes 2.81s to sort reversed50000.txt
Takes 2.61s to sort sorted50000.txt

```


---

## [Section](https://cs50.harvard.edu/x/2024/sections/3/)

## [Problem Set 3](https://cs50.harvard.edu/x/2024/psets/3/)

- [ ] [Sort](https://cs50.harvard.edu/x/2024/psets/3/sort/)
- [ ] [Plurality](https://cs50.harvard.edu/x/2024/psets/3/plurality/)
- [ ] [Runoff](https://cs50.harvard.edu/x/2024/psets/3/runoff/), if feeling more or less comfortable
- [ ] [Tideman](https://cs50.harvard.edu/x/2024/psets/3/tideman/), if feeling very, very, very comfortable


## References

[Complete list of Bachmann-Landau notations](https://texblog.org/2014/06/24/big-o-and-related-notations-in-latex/)