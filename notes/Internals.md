# Controller Internals

So controllers usually have the following common things:
 * [ALU](#alu)
 * [Registers](#registers)
 * [Counters](#counters)
 * [Buses](#buses)
 * [Memory](#memory)
 * [Oscillator](#oscillator)


## ALU

The ALU or the Arithmatic & Logic Unit does exactly what its name suggests. Arithmatic operations include addition, subtraction, multiplication & division. Logical meaning AND, OR, XOR etc.

As discussed before, all arithmatic operations boil down to addition. Therefore the entity that we come in contact in with the most, is called the Accumulator. It's a kind of register where all operations need to take place.


## Registers

I mentioned registers, so lets talk about them. So you remember [flip-flops](https://en.wikipedia.org/wiki/Flip-flop_(electronics)). Registers are nothing but a collection of flip-flops. You but them 8 together and you've got yourself an 8 bit register. Register does but one thing, it contains numbers temporarily. If there is no clock, they don't do shit. A controller has a lot of registers, some are internal others are exposed for our use. For an 8 bit controller, 8 bit register is the most common size. But there are registers that can be combined to get a 16 bit register as well. 

Accumulator is a register too and it's exposed for us to use. You have other registers where every bit means something. Conceptually we look at these individual bits and call them flags. We use fancy terms like, "if this flag is set", which literally means, "if this bit is 1 in this register ...".


## Counters

Counters are once again, a collection of flip flops with tandem inputs. You can create a simple up counter using J-K flip flop and that's how they're created inside the controllers. But counters are important. There's one very important one, called program counter. This one keeps track of which instruction is being executed. Other counters are exposed to us and others are internal. Program counter, for example, is internal. It is required because that's how a controller knows when to skip or go back when a `goto` statement is called or maybe a `loop`is called.

## Buses

Okay, so what does a bus do? It carries people from point A to point B. Similarly, data buses carry data from register to register to be processed. It's literally a conceptual wire from point A to point B. But they have sizes too. You ca have an 4-Bit bus or an 8 Bit bus or even 16 Bit bus, to carry numbers (addresses) and results from point A to point B.


## Memory

Right, so you've heard of this before. RAM and ROM. RAM: Random Access Memory and ROM: Read Only Memory. Differences?
RAM keeps all your current results and memory addresses which you're working on. You turn the power off and the contents evaporate.

The ROM on the other hand can be programmed and set and is where you'll burn your program. Another word you'll hear is `Flash`. This is nothing but a ROM, specifically EEPROM (Electrically erasable programmable read-only memory). The good thing about `Flash` memory (in this context it's NAND type - don't worry about specifics right now) is that it works in pages like a book. Your Flash is a book and you can erase and write pages in it. That's good because it makes it faster and quicker. Plus you don't have to use all of it all at once (unless it's NOR - but again, don't worry about it).

So yeah, Memory, required to run your stuff and also to store your stuff (persistently).


## Oscillator

Well I actually mean clock source here. You need a clock source to operate everything. Let me go into specifics and explain it out of context. Imagine an onion, we're at the center and coming out to the surface. We'll see multiple layers when we try and burrow out.

See the layer with flip flops. The logical circuts? That's where you need the clock. Everything else below it, therefore depends upon that clock.


| Layer 						    | 
|-----------------------------------|
| Resistors, Capacitors, Inductors  |
|-----------------------------------|
| Transistors, MOSFETS              |
|-----------------------------------|
| Logic gates                       |
|-----------------------------------|
| Logical circuits like Flip Flops  |
|-----------------------------------|
| Registers, timers, counters,      |
| Triggers etc.                     |
|-----------------------------------|
| ROMs, RAMs, ALU etc.              |
|-----------------------------------|
| Controller, processors etc.       |
|-----------------------------------|
| Phones, computers, devices etc.   |
|-----------------------------------|
| Your dick pics.                   |
|-----------------------------------|