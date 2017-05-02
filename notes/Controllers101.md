Controllers 101
===============


## Classification

A processor (the computing part of the controller) is known by its adding capabilities. If it can add a maximum of 8 bits (1 byte) it is called an 8 bit controller (we don't use byte in the naming). If it can add upto 32 bits it's called a 32 bit processor/controller. 

Remember I said adding. Always adding. The processor is incapable of subtracting or performing any other operations other than adding. Subtraction is essentially 2's complement of one number and adding it to the other. Now, we know that multiplication is repeating addition and division is repeating subtraction. So every operation is just basic addition, over and over again.

Therefore what matters is how big a number can a processor add in one go.

## Data structure types

Quick review of what we'll be using.


| Bit 7 | Bit 6 | Bit 5 | Bit 4 | Bit 3 | Bit 2 | Bit 1 | Bit 0 |
|-------|-------|-------|-------|-------|-------|-------|-------|
|	1   |   0   |   1   |    0  |   1   |   1   |    1  |   0   |

Bit 0-3: Lower Nybble
Bit 4-7: Higher Nybble
Bit 0-7: Byte (or a word for an 8 bit controller)
