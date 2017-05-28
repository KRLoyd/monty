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

## Files
### `monty.h`
Header file with prototypes for all functions and structs used in the interpreter.
### `FILES`
* `main_monty.c`: the ``main_monty`` function from which all other files' execution originates.
* `check_funcs.c`: includes:
  * `check_args`: function to check if arguments are passed
  * `check_push_val`: function to assess if `push` argument is an integer
* `free_func.c`: includes:
  * `free_everything`: function to call all free functions
  * `free_pointers`: function to free double pointers
  * `free_stack`: function to free stack
* `helper_funcs.c`: includes:
  * `convert_push_arg`: converts string to integer
  * `make_struct`: mallocs space for global struct
  * `stack_len`: finds the number of nodes in a stack
  * `find_func`: searches for the op_code or prints message and return error
* `parsers.c`: includes:
  * `parse`: tokenizes buffer from getline into arguments for assessment
  * `parse_check`: checks that buff is not NULL and mallocs space for tok_args
* `op_math.c`: includes:
  * `op_add`: setting first node's value to the sum of the first two nodes' values
  * `op_sub`: sets first node's value to the remainder of subtracting the second node and it is removed
  * `op_mul`: multiply first and second node's values and store in the first node
  * `op_div`: divides second node's value by the first and stores in first node
  * `op_mod`: divides second nodes's value by first and remainder is stored in first node
* `op_other.c`: includes:
  * `op_pall`: prints all `n` values on stack
  * `op_pint`: print `n` value at the top of the stack
  * `op_nop`: does nothing!
* `op_stack_manipulation.c`: includes:
  * `op_push`: pushes a new node with `n` value to the stack
  * `op_pop`: removes/frees value at top of stack
  * `op_swap`: swaps the first two `n` values in the stack with one another

## Limitations
Currently, monty does not have comment handling capability.

## Bugs
There are no known bugs at this time.
If a bug is encountered, please contact one of the authors, listed below.

## Authors
* Kristen Loyd, <a href='https://github.com/KRLoyd'>Github</a>
* Naomi Sorrell, <a href='https://github.com/NamoDawn'>Github</a>

## License
Public Domain, no copywrite protection