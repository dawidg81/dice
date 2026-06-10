# Index #

*= DICE =*
  1. Building
    1.1. Compiling
    1.2. Installing
  2. Usage
    2.1. Command
    2.2. Custom rolling range
    2.3. Classic randomization
  =. License (MIT)

* DICE *

Roll the dice and see which number did you roll.

====== 1. Building ======
1.1. Compiling

To build the program, compile it with
the following command:

` gcc main.c -o dice `,

where main.c is the only source file of
the program, and ` -o dice ` outputs
the executable to file named 'dice'.

1.2. Installing

And optionally, if you want to install
the compiled executable to your global
executables directory, the command for that
will most likely be:

` mv ./dice /usr/bin/ `,

where ` ./dice ` is our compiled executable
and ` /usr/bin/ ` is the destination to which
we move our dice. If your global executables
path is different, you can see it by yourself
running ` echo $PATH ` command in your shell.

====== 2. Usage ======

2.1. Command

After building the program, you are ready
to roll the dice. If you kept the executable
in local project directory, we will use
` ./dice ` command, and if you have moved
or copied the executable to global PATH,
you can use just ` dice ` command.

The simplest way to roll the dice is
to just run the command:

` dice `.

It will give you a message:

"You've rolled a x.",

where x is the number you rolled.

2.2. Custom rolling range

By default, the dice is 6-sided, but you can
use different rolling range by passing arguments.
Example command:

` dice x y `,

where x and y are the numbers from which to which
number the dice will roll a number. For example
we do this:

` dice 3 7 `

and the dice will roll a number only in range
between 3 and 7.

2.3. Classic randomization

By default, the dice uses hardware randomization
for rolling numbers, but you can use classic
pseudorandomization by using current time as
seed, by passing ` -t ` argument in the command:

` dice -t `.

We can combine all the arguments:

` dice -t x y `,
` dice -t 3 7 `.

= License

See LICENSE.txt
