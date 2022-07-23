# imvuck
## Copy of brainfuck language. Made in cpp
If you want to use the interpreter you should:
- If you're on windows: `g++ main.cpp -o imvuck.exe`, then `.\imvuck.exe (optional) filename` 
- If you're on linux: `chmod +x imvuck.out`, then `./imvuck.out (optional) filename`
- Have fun!

Programs in imvuck are just array with 199 indexes. Your pointer is in middle of the array. To move it forward use `>`, to move it backwards use `<`. To increment the value of value of current array index use `+`, to decrement `-`. `.` prints a char that has ascii code same as the value as value of current index in array.
