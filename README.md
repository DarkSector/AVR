AVR
===

Some AVR code that I wrote for my ATMEL ATMega32 based board. Code is in Assembly and C.

### Include files

The Assembly folder contains include folder that has the .inc files for all supported AVRs by the AVR assembler. They can be found in any release of AVR Studio. This one was taken from AVR Studio 5.

### C Templates

#### Windows
Just use Atmel Studio. That's good enough

#### Linux
Sorry, nothing for that yet

#### Mac OS X
You should be using X-AVR. [Simply follow these instructions and get it working. It's worth it.](https://github.com/jawher/xavr)

### Assembler setup

#### Mac OS X Lion 10.7.3+
Install Mac Homebrew or Macports. I prefer Homebrew, it's much cleaner.

```
$ brew install avra
$ brew install avr-gcc avrdude avr-libc libusb
```

#### Windows XP+
If you're an open source maniac and do things from ground up then you can download the [AVR Assembler from Sourceforge](http://sourceforge.net/projects/avra/)

If you're not mental about it, you can just download [AVR Studio](http://www.atmel.com/microsite/atmel_studio6/) and get things done. 

##### NOTE: for AVR Studio you need to remove the .INCLUDE line, it automatically does that inclusion for you.


#### Linux
If you have a Debian based linux box you can just download the package from aptitude
```
$ sudo aptitude install avra avr-libc avr-gcc avrdude
```
Otherwise you can build it. You need to grab the source and build it yourself. It's not that hard.

### Assembler tutorial
I haven't got around to writing my own tutorials yet, but here's a guide that can help you with that. It's by ATMEL. You can find it [here](http://www.atmel.com/Images/doc1022.pdf)

### Simulator
It's good to have a simulator to learn what is actually going to happen when your code is executed. So for that, we have certain tools.

#### Mac OS X 10.6+
[MacSimAVR](http://www.fracturedsoftware.com/macsimavr) this is an alpha release and will be paid soon. 

SimulAVR you can find more about this [here](http://www.mikrocontroller.net/articles/AVR-Simulation)

#### Windows XP+
AVR Studio all the way. That's why I use Windows, for controller programming and games. Otherwise Linux has everything I will ever need.

#### Linux
You need to find Simulavr using your package manager and install it. It's command line as far as I remember.
