# monty
An interpreter for Monty ByteCodes files.

## Project Notes
### Environment
monty runs on Ubuntu 14.04 LTS
### Compilation
All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
### Style
All code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki
### Header
Protoypes of all functions used are included in header file `monty.h`
### Monty Language Notes
Monty 0.98 is a scripting language that is first compiled into Monty byte codes.
Monty relies on a unique stack, with specific instructions to manipulate it. 

## How to use monty
1. Clone the repository: `$ git clone https://github.com/KRLoyd/monty.git`
2. Compile all files: `$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

To run a file containing Monty byte codes:
3. Run the executable: `$ ./monty <file>`

### Opcodes
* `push`
  * Usage: `push <int>`
  * Pushes an element to the stack
* `pall`: prints all the values on the stack, starting from the top.
* `pint`: prints the value at the top of the stack
* `pop`: removes the top element of the stack
* `swap`: swaps the two top elements of the stack
* `add`: adds the top two elements of the stack
* `nop`: doesn't do anything
(ADVANCED)
* `sub`: subtracts the top element of the stack from the second top element of the stack
* `div`: divides the second top element of the stack by the top element of the stack
* `mul`: multiplies the second top element of the stack with the top element fo the stack
* `mod`: computes the rest of the division of the second top element of the stack by the top element of the stack
* `pchar`: prints the char at the top of the stack
* `pstr`: prints the string starting at the top of the stack
* `rotl`: rotates the stack to the top (top becomes last, second top becomes top)
* `rotr`: rotates the stack to the bottom (last element becomes top)
* `stack`: sets the format of the data to a stack (LIFO)
* `queue`: set the format of the data to a queue (FIFO)

## Files
### `monty.h`
Header file with prototypes for all functions and structs used in the interpreter.
### `FILES`

## Limitations
Currently, monty does not have comment handling capability. 

## Bugs
There are no known bugs at this time.
If a bug is encountered, please contact one of the authors, listed below.

## Authors
* Kristen Loyd, <a href='https://github.com/KRLoyd'>Github</a>
* Naomi Sorell, <a href='https://github.com/NamoDawn'>Github</a>

## License
Public Domain, no copywrite protection