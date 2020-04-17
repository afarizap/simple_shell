![](https://i.imgur.com/Xh6UUGl.png)

### Description
------
`simple shell` is a custom implementation of `DASH` *(Debian Almquist Shell)*. It produces a similar output according to referenced program. We took `DASH` as reference to create this project, our goal was to learn, develop teamwork and improve individual skills regarding code.

<br>

### Quick Start
------
1. Download program
```sh
$ git clone https://github.com/afarizap/simple_shell.git
```
2. Compile it
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c -o afsh
```
3. Execute it
```sh
$ ./afsh
```
<br>

### Usage
------
<p align="center">
  <br><b>General usage</b><br>
  <em>(command) (flags or options) (arguments)... </em>
  <br>
</p>

***Non-interactive mode***
```sh
$ echo "<command>" | ./afsh
```
- *example*
    - Input: `echo "echo This is an output" | ./afsh`
    - Output: `This is an output`

***Interactive mode***
```sh
$ <command> <flags> <arguments>
```
- *example*
    - Input: `echo Awesome isn't it?`
    - Output: `Awesome isn't it?`
<br>


### Built in commands
------
Here we list supported built in commands
- `exit` = Finish program execution
- `env` = Print envrioment variables
- `setenv` = Set a new enviroment variable
- `unsetenv` = unset an enviroment variable
<br>

## Authors
[Andres Ariza](https://github.com/afarizap) | andres.ariza@holbertonschool.com

[Fredy Acuña](https://github.com/fredhii) | fredhiixd@gmail.com
