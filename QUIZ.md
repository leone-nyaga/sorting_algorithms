# QUIZ QUESTIONS

## Question #0

What is the time complexity of this function / algorithm?

```php
foreach($numbers as $number)
{
    echo $number;
}
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #1

What is the time complexity of setting a value at index n in an unsorted array?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #2

What is the time complexity of this function / algorithm?

```c
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. **O(log(n))** (ans)

## Question #3

What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #4

Assuming you have a pointer to the node to set the value of, what is the time complexity of setting the value of the nth element in a doubly linked list?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #5

What is the time complexity of worst case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #6

What is the time complexity of this function / algorithm?

```python
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. **O(n^2)** (ans)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #7

What is the time complexity of this function / algorithm?

```c
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. **O(n^2)** (ans)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #8

What is the time complexity of removing at index n in an unsorted array?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #9

What is the best case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #10

What is the time complexity of this function / algorithm?

```c
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #11

What is the best case time complexity searching for an element in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #12

What is the time complexity of removing the nth element of a singly linked list? (Assuming you have a pointer to the node to remove)


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #13

What is the time complexity of searching for an element in a stack of size n?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #14

Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #15

What is the time complexity of this function / algorithm?

```c
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

1. O(n)

2. O(1)

3. **O(nlog(n))** (ans)

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #16

What is the time complexity of this function / algorithm?

```c
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #17

What is the time complexity of accessing the nth element on an unsorted array?

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #18

What is the worst case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #19

What is the time complexity of this function / algorithm?

```c
void f(int n)
{
    printf("n = %d\n", n);
}
```

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #20

What is the time complexity of inserting at index n on an unsorted array?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #21

What is the time complexity of best case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #22

What is the time complexity of searching for an element in a singly linked list of size n?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #23

What is the time complexity of searching for an element - worst case - in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #24

What is the time complexity accessing the nth element in an unsorted Python 3 list?

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #25

Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #26

What is the time complexity of inserting after the nth element of a singly linked list? (Assuming you have a pointer to the node to insert)


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #27

What is the time complexity of searching for an element in an unsorted Python 3 list of size n?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

Question #28
What is the time complexity of inserting into an unsorted Python 3 list at index n?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #29

What is the time complexity of accessing the nth element of a doubly linked list?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #30

What is the time complexity of the “push” operation onto a stack?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

##  Question #31

What is the time complexity of “popping” an element in a queue if you are given a pointer to both the head and the tail of the queue?


1. O(n)

2. **O(1)** (ans)

3. O(log(n))

4. O(n!)

5. O(2^n)

6. O(nlog(n))

## Question #32

What is the time complexity of removing at index n from an unsorted Python 3 list?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #33

What is the time complexity of searching for an element in an unsorted array of size n?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

Question #34

What is the time complexity of this function / algorithm?

```c
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. **O(n^2)** (ans)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #35

What is the time complexity of searching for an element in a queue of size n if you are given a pointer to both the head and the tail of the queue?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #36

What is the time complexity of the “pop” operation onto a stack?


1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #37

What is the time complexity of this function / algorithm?

```c
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```

1. O(n)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. **O(2^n)** (ans)

7. O(log(n))

## Question #38

What is the time complexity of setting value at index n in an unsorted Python 3 list?

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #39

What is the time complexity of “pushing” an element into a queue if you are given a pointer to both the head and the tail of the queue?

1. O(n)

2. **O(1)** (ans)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #40

What is the time complexity of accessing the nth element of a singly linked list?

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #41

What is the time complexity of this function / algorithm?

```c
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```

1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))

## Question #42

What is the time complexity of searching for an element in a doubly linked list of size n?


1. **O(n)** (ans)

2. O(1)

3. O(nlog(n))

4. O(n^2)

5. O(n!)

6. O(2^n)

7. O(log(n))
