# imvuck, interpreter of the brainfuck language.

## How to use it?
You need to follow these easy steps.

First, put these commands into your terminal:

```    
$ git clone https://github.com/morvo1/imvuck/
$ cd imvuck/build
$ make -j$(nproc)
```

There you go, you just built the project.

Next step is to run it. To do so put this into your terminal

```
$ ./imvuck filename
```
Imvuck will interprete the code from your file.

## How to prorgram in it?

These are the characters you can use in imvuck:

- `>`, this character moves your pointer to the next array cell.
- `<`, this character moves your pointer to the previous array cell.
- `+`, this character increases the value of the array cell the pointer is pointing to.
- `-`, this character decreases the value of the array cell the pointer is pointing to.
- `.`, this character prints the value of the array cell in char form to which the pointer is pointing.
- `[`, this character starts the loop. Jump to matching `]` if the value of the array cell the pointer is pointing to is zero,
- `]`, this character ends the loop. Jump to matching `[` if the value of the array cell the pointer is pointing to is not zero,

## Have fun using my interpreter!
---
# TODO
- [X] `>` and `<` characters.
- [X] `+` and `-` characters.
- [X] `.` character.
- [X] `[` and `]` characters - loops.
- [ ] `,` character.
