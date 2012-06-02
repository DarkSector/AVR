AVR
===

Some AVR code that I wrote for my ATMEL ATMega32 based board. Code is in Assembly and C.

##Include files

The Assembly folder contains include folder that has the .inc files for all supported AVRs by the AVR assembler. They can be found in any release of AVR Studio. This one was taken from AVR Studio 5.

##Assembler setup

###Mac OS X Lion 10.7.3+
Install Mac Homebrew or Macports. I prefer Homebrew, it's much cleaner.

```
$ brew install avra
```

###Windows XP+
If you're an open source maniac and do things from ground up then you can download the [AVR Assembler from Sourceforge](http://sourceforge.net/projects/avra/)

If you're not mental about it, you can just download [AVR Studio](http://www.atmel.com/microsite/atmel_studio6/) and get things done. 

####NOTE: for AVR Studio you need to remove the .INCLUDE line, it automatically does that inclusion for you.


###Linux
If you have a Debian based linux box you can just download the package from aptitude
```
$ sudo aptitude install avra
```
Otherwise you can build it. You need to grab the source and build it yourself. It's not that hard.