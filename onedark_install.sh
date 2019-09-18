#!/bin/bash
git clone https://github.com/joshdick/onedark.vim.git
cd onedark.vim
cp -r autoload/ ~/.vim/
cp -r colors/ ~/.vim/
cd ../
rm -rf onedark.vim
