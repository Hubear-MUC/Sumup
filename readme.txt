SumUp 3.0
---------

The program has to be invoked with the numbers to be summed up given as
arguments.

For example invoke like this:

  ./sumup 1 2 3 4 5 6 7 8 9 10

to sum up the numbers from 1 to 10.

The result then will be displayed on the terminal.

The numbers are handled as double numbers, take care to use the dot (.) for
the separation between integer part and fraction part of the number:

  ./sumup 1.02 2.03 3.04

will be OK.

This one

  ./sumup 1,02 2,03 3,04

will not.



Changes:
--------

Version 3.0:

Implementation of the numbers to be summed up to be given as arguments when
invoking the program.


Version 2.0:

Implementing the possibility to enter an arbitrary number of numbers.
In the previous version the number of numbers had to be 10.


Version 1.0:

Initial implementation
