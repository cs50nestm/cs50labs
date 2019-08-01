# Models and Simulations

In this lab you will learn:

- Why we use computer models and simulation
- What are some commonly used applications

## What is Computer Modeling and Simulation?

Models and simulations are representations of complex objects and/or events. They can be used to predict or explain actual occurences in the real world. Models are the computer algorithms that capture behavior of the object or system being looked at, and simulation is the running of the program that contains these algorithms.

Models and simulations are used for many reasons. It may be safer and more cost effective to create a computer model to test out a new product design, than building the actual product for testing. A simulation could allow us to change variables of a model and observe the effects, which may not be feasible in real life. 

## Commonly Used Applications of Modeling

Common applications include flight simulators to train pilots, weather forecasating, and forecasting of risk. Models and simuations are used frequently in movies and video games to create computer generated imagery, creating special effects, animation and entire imaginary worlds!

A limitation of computer simulation is that they are abstraction of reality and may depend on oversimplified or generalized assumptions in their models.

{% next %}

## Your Turn

Complete the program on the right that is intended to simulate 80% of some number of students, n, getting at least a 4 on their APCSP exam. The program is missing a condition inside of the `for` loop, that will add one to the variable `sum` approximately 80% of the time. You should use the function `rand()` which generates a random number between 0 and 2147483647. This function has already been seeded with `srand(time(NULL))` so that it creates a different sequence of "random" numbers every time the program is executed.

{% spoiler "Hint" %}

Turns out that C includes an operator—alongside the usual suspects of addition, subtraction, multiplication, and division—called the modulo operator. Modulo (%) gives you the remainder after dividing its operands. But it can be useful for more than arithmetic remainders alone! Consider this line of code:

```c
int number = rand() % 5;
```

The effect of that line is to divide the return value of rand by 5 and store the remainder in `number`. What might the remainder be, though, when dividing some integer by 5? Well, there might be no remainder, in which case the answer is 0. Or there might be a remainder of 1, 2, 3 or 4. So this is a way of generating a pseudorandom number between 0 and 4, inclusive!

Now think of a condition that would be true roughly 80% of the time with a random number between 0 and 4. We know that `number == 0` should be true about 20% of the time. In the same way, `number < 2` is true when `number` is 0 or 1, which is 2 out of 5 times or 40% of the time. What condition can you come up with to simulate 80%?

{% endspoiler %}

[Download our CS50 Reference sheet on Models and Simulations](https://ap.cs50.school/assets/pdfs/unit3/models_and_simulations.pdf)
