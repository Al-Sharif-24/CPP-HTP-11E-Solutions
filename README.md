# CPP-HTP-11E-Solutions

Solutions to exercises from the book 'C++ How to Program: An Objects-Natural Approach'.

## Table of Contents

-   [Chapter 02 - Intro to C++20 Programming](<Chapter 02/README.md>).
-   [Chapter 03 - Algorithm Development and Control Statements: Part 1](<Chapter 03/README.md>).
-   [Chapter 04 - Algorithm Development and Control Statements: Part 2](<Chapter 04/README.md>).
-   [Chapter 05 - Functions and an Intro to Function Templates ](<Chapter 05/README.md>).

## Time Spent

| Chapter | Watching | Reading    | Number of Exercises | Solving The Exercises |
| ------- | -------- | ---------- | ------------------- | --------------------- |
| 02      |          | 3 Hours    | 24 Exercise         | 4 Hours               |
| 03      |          | 4 Hours    | 27 Exercise         | 7.5 Hours             |
| 04      |          | 4.5 Hours  | 25 Exercise         | 8.33 Hours            |
| 05      | 3 Hours  | 6.75 Hours | 48 Exercise         | Hours                 |

## How to Study Programming Books?

-   Take for example section 5.5 Order of Evaluation of a Function’s Arguments.
-   After you've read the section don't just take for granted and continue reading (boring).
-   Instead, try to write a small program that demonstrates the concept.
-   For example this was my way to demenstrate the concept of Order of Evaluation of a Function’s Arguments.

```cpp
#include <format>
#include <iostream>

using namespace std;

int state(int x)
{
    cout << format("In state with {}\n", x);
    return x;
}

int sum(int x, int y, int z) { return x + y + z; }
int main()
{
    cout << sum(state(1), state(2), state(3));
    return 0;
}
```

-   Which I was lucky to get interesting output.

```text
In state with 3
In state with 2
In state with 1
```

-   Which means that the arguments are evaluated from right to left.
-   Also in the same chapter but earlier in section 5.4, it was mentioned that:

    > "The function prototype’s parameter names should match those in the function definition, but that’s not required."

-   You have to think in an example that demonstrates this concept.
-   For example:

```cpp
#include <iostream>
using namespace std;

int sum(int, int); // also try different names like sum(int a, int b)

int main()
{
    cout << sum(1, 2) << endl;
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
```

-   This how you should study programming books, by writing code and experimenting with it every small detail try to think about it and what if you changed it.
