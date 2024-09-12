## Pandigital Brainfuck

This program tries to print the highest N-digit pandigital number containing 1-N BUT using **Mathematics**.

### forLoopWasEasierAndSimpler 
```
N = 5
pan = ""

for i in range (N, 0, -1):
    pan += str(i)

print(pan)
```

### Curious?

Highest N-digit pandigital numbers

| N  |  number |
| ---|-----|
| 1  | 1   |
| 2  | 21  |
| 3  | 321 |
| 4  | 4321|
...

Let's form another table


| N | Highest pandigital number | Lowest pandigital number | Difference |
| --|---------------------------|--------------------------|----------- |
| 1 |          1                |            1             |   0        |
| 2 |          21               |           12             |   9        |
| 3 |          321              |           123            |  198       |
| 4 |          4321             |           1234           | 3087       |

Difference between differences:

|         |      |
|---------| -------------|
| 9 - 0 | 9 |
| 198 - 9 | 189 |
| 3087 - 198 | 2889 |
...
-> 38889 -> 488889

There's pattern here: "N" + "8" * N + "9"


Finally, 4321 = 1234 + 2889 + 189 + 9!
