set expandtab
set autoindent
set cindent
set smartindent
syntax on
filetype plugin indent on
set list
set term=xterm-256color
set listchars=eol:$,tab:>-,trail:~,extends:>,precedes:<
set list!
set softtabstop=2
set backspace=indent,eol,start
set shiftwidth=2
set tabstop=2
set expandtab
set completeopt=longest,menuone
inoremap <expr> <CR> pumvisible() ? "\<C-y>" : "\<C-g>u\<CR>"
inoremap <expr> <C-n> pumvisible() ? '<C-n>' :
  \ '<C-n><C-r>=pumvisible() ? "\<lt>Down>" : ""<CR>'

inoremap <expr> <M-,> pumvisible() ? '<C-n>' :
  \ '<C-x><C-o><C-n><C-p><C-r>=pumvisible() ? "\<lt>Down>" : ""<CR>'
map <F2> :.w !pbcopy<CR><CR>
map <F3> :r !pbpaste<CR>

set hlsearch
inoremap <F2> <ESC>u@.
