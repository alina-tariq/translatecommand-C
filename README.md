# Simplified Translate Command

## Language
- C

## What Is It?
- A simplified version of the Linux tr (translate) command recreated in C
- Requires the following argument parameters from the user:
	- set1 (first set of characters to be changed)
	- set2 (second set of characters to be changed)
- No tr command flags/options are supported
- Input can be provided either through stdin or a file passed to stdin

## How To Use
Use the following commands to copy the program:
```
git clone https://github.com/alina-tariq/translatecommand-C.git
cd translatecommand-C
```

If using a Mac compile with the following command:
```
clang -o trcmd translate.c trfuncs.c
```

If using Linux compile with the following command:
```
gcc -o trcmd translate.c trfuncs.c
```

To run the executable, the following format is needed:
* executable set1 set2

For example:
```
./trcmd abcd ABCD
```
or
```
./trcmd abcd ABCD <inFile
```
