# Controller Internals

So controllers usually have the following common things:
 * [ALU](#ALU)
 * [Registers](#Registers)
 * [Counters](#counters)
 * [Buses](#buses)
 * [Memory](#memory)
 * [Oscillator](#oscillator)


## ALU

The ALU or the Arithmatic & Logic Unit does exactly what its name suggests. Arithmatic operations include addition, subtraction, multiplication & division. Logical meaning AND, OR, XOR etc.

As discussed before, all arithmatic operations boil down to addition. Therefore the entity that we come in contact in with the most, is called the Accumulator. It's a kind of register where all operations need to take place.


## Registers

I mentioned registers, so lets talk about them. So you remember [flip-flops](https://en.wikipedia.org/wiki/Flip-flop_(electronics)). Registers are nothing but a collection of flip-flops. You but them 8 together and you've got yourself a register. Register does but one thing, it contains numbers temporarily. If there is no clock, they don't do shit.


