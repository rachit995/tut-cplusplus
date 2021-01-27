# tut-cplusplus

Using Vim as IDE and g++ as compiler:

   ### .vimrc

    syntax on

    set autowrite
    nnoremap <C-c> :!g++ -std=c++11 % -Wall -g -o %.out && ./%.out<CR>

    set autoindent
    set cindent
More information this [here](https://www.quora.com/How-can-I-compile-and-execute-a-c++-program-directly-from-Vim-in-Ubuntu).
