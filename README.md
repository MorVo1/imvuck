# imvuck, interpreter of the brainfuck language.

## How to use it?
You need to follow these easy steps.

First, put those commands into your terminal:

```    
$ git clone https://github.com/morvo1/imvuck/
$ cd imvuck/build
$ make -j$(nproc)
```

There you go, you just built the project.

Next step is to run it. To do so put this into your terminal

```
$ ./imvuck
```
Now, put your code after the prompt. Imvuck will interprete it.

## How to prorgram in it?

These are the characters you can use in imvuck:

- `>`, this character moves your pointer to the next array cell.
- `<`, this character moves your pointer to the previous array cell.
- `+`, this character increases the value of the array cell the pointer is pointing to.
- `-`, this character decreases the value of the array cell the pointer is pointing to.
- `.`, this character prints the value of the array cell in char form to which the pointer is pointing.
- `!`, this character prints out the entire array as a string.

## Have fun using my interpreter!
---
# TODO
- [X] > and < characters.
- [X] + and - characters.
- [X] . and ! characters.
- [ ] [ and ] characters - loops.
