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

### Hmmm
```shell
~/D/p/pandigital (main)> hyperfine --warmup 10 './main' './main2' --shell=none
Benchmark 1: ./main
  Time (mean ± σ):       2.4 ms ±   0.1 ms    [User: 0.5 ms, System: 1.6 ms]
  Range (min … max):     2.1 ms …   3.2 ms    1183 runs
 
Benchmark 2: ./main2
  Time (mean ± σ):       2.5 ms ±   0.1 ms    [User: 0.5 ms, System: 1.6 ms]
  Range (min … max):     2.3 ms …   3.3 ms    1165 runs
 
Summary
  ./main ran
    1.01 ± 0.08 times faster than ./main2

```
