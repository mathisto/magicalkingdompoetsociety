set nocompatible
if has('autocmd')
  filetype indent plugin on
endif
filetype off
runtime macros/matchit.vim

set rtp+=/usr/local/opt/fzf

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
  Plugin 'VundleVim/Vundle.vim'
  Plugin 'felixhummel/setcolors.vim'
  Plugin 'airblade/vim-rooter'
  Plugin 'zxqfl/tabnine-vim'
  Plugin 'bling/vim-airline'
  Plugin 'vim-airline/vim-airline-themes'
  Plugin 'ctrlpvim/ctrlp.vim'
  Plugin 'dyng/ctrlsf.vim'
  Plugin 'jremmen/vim-ripgrep'
  Plugin 'easymotion/vim-easymotion'
  Plugin 'eugen0329/vim-esearch'
  Plugin 'jiangmiao/auto-pairs'
  Plugin 'junegunn/goyo.vim'
  Plugin 'kana/vim-textobj-user'
  Plugin 'moll/vim-bbye'
  Plugin 'matze/vim-move'
  Plugin 'michaeljsmith/vim-indent-object'
  Plugin 'nelstrom/vim-textobj-rubyblock'
  Plugin 'rizzatti/dash.vim'
  Plugin 'scrooloose/nerdtree'
  Plugin 'terryma/vim-multiple-cursors'
  Plugin 'tmhedberg/matchit'
  Plugin 'tomtom/tcomment_vim'
  Plugin 'tpope/vim-endwise'
  Plugin 'tpope/vim-bundler'
  Plugin 'tpope/vim-fugitive'
  Plugin 'tpope/vim-rails'
  Plugin 'tpope/vim-rake'
  Plugin 'tpope/vim-repeat'
  Plugin 'tpope/vim-sensible'
  Plugin 'tpope/vim-surround'
  Plugin 'vim-ruby/vim-ruby'
  Plugin 'vim-syntastic/syntastic'
  Plugin 'w0rp/ale'
  Plugin 'xolox/vim-misc'
  Plugin 'xolox/vim-colorscheme-switcher'
  Plugin 'wakatime/vim-wakatime'
  Plugin 'dracula/vim', { 'name': 'dracula' }
  Plugin 'farseer90718/vim-taskwarrior'
  Plugin 'git@github.com:vimwiki/vimwiki.git'
  Plugin 'mattn/calendar-vim'
  Plugin 'powerman/vim-plugin-AnsiEsc'
  Plugin 'majutsushi/tagbar'
  Plugin 'mhinz/vim-startify'
  Plugin 'ryanoasis/vim-devicons'
call vundle#end()

" Startify
" returns all modified files of the current git repo
" `2>/dev/null` makes the command fail quietly, so that when we are not
" in a git repo, the list will be empty
function! s:gitModified()
    let files = systemlist('git ls-files -m 2>/dev/null')
    return map(files, "{'line': v:val, 'path': v:val}")
endfunction

" same as above, but show untracked files, honouring .gitignore
function! s:gitUntracked()
    let files = systemlist('git ls-files -o --exclude-standard 2>/dev/null')
    return map(files, "{'line': v:val, 'path': v:val}")
endfunction

let g:startify_lists = [
        \ { 'type': 'files',     'header': ['   MRU']            },
        \ { 'type': 'dir',       'header': ['   MRU '. getcwd()] },
        \ { 'type': 'sessions',  'header': ['   Sessions']       },
        \ { 'type': 'bookmarks', 'header': ['   Bookmarks']      },
        \ { 'type': function('s:gitModified'),  'header': ['   git modified']},
        \ { 'type': function('s:gitUntracked'), 'header': ['   git untracked']},
        \ { 'type': 'commands',  'header': ['   Commands']       },
        \ ]

" Airline
let g:airline#extensions#ale#enabled = 1
let g:airline#extensions#tabline#enabled = 1      
let g:airline#extensions#tabline#left_sep = ' '
let g:airline#extensions#tabline#left_alt_sep = '|'

" Syntastic
let g:airline#extensions#syntastic#enabled = 1
let g:syntastic_always_populate_loc_list = 1
"let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
let g:syntastic_ruby_checkers = ['rubocop']
let g:syntastic_yaml_checkers = ['yamllint']
let g:syntastic_javascript_checkers = ['eslint']
let g:syntastic_ruby_rubocop_exe = 'rubocop --force-exclusion'
let g:syntastic_javascript_eslint_exe = 'yarn run eslint --fix'

"##### CtrlSF Config ###########
let g:ctrlsf_auto_close = { "normal" : 0, "compact": 0 }
let g:ctrlsf_auto_focus = { "at": "start" }
let g:ctrlsf_default_root = 'project'
let g:ctrlsf_default_view_mode = 'compact'
let g:ctrlsf_regex_pattern = 1
let g:ctrlsf_search_mode = 'async'
let g:ctrlsf_position = 'bottom'

nmap     <C-F>f <Plug>CtrlSFPrompt
vmap     <C-F>f <Plug>CtrlSFVwordPath
vmap     <C-F>F <Plug>CtrlSFVwordExec
nmap     <C-F>n <Plug>CtrlSFCwordPath
nmap     <C-F>p <Plug>CtrlSFPwordPath
nnoremap <C-F>o :CtrlSFOpen<CR>
nnoremap <C-F>t :CtrlSFToggle<CR>
nnoremap \ :CtrlSF 
inoremap <C-F>t <Esc>:CtrlSFToggle<CR>

"##### CtrlP Config ###########
let g:ctrlp_map='<c-p>'
let g:ctrlp_cmd = 'CtrlPMRU'
let g:ctrlp_buffer_func = { 'enter': 'BrightHighlightOn', 'exit':  'BrightHighlightOff', }
let g:ctrlp_custom_ignore = 'node_modules\|DS_Store\|git\|vendor\|tmp'

function BrightHighlightOn()
  hi CursorLine guibg=darkred
endfunction

function BrightHighlightOff()
  hi CursorLine guibg=#191919
endfunction
""""""""""""""""""""""""""""""""""""""""""""""""""""""""

let mapleader = ","
map <Space> <Leader>

" Rip Grep Smart Case Mode
let g:rg_command = 'rg --vimgrep -S' 

if has("clipboard")
  set clipboard=unnamed
  if has("unnamedplus")
    set clipboard+=unnamedplus
  endif
endif

highlight Comment cterm=italic
let &t_8f="\<Esc>[38;2;%lu;%lu;%lum"
let &t_8b="\<Esc>[48;2;%lu;%lu;%lum"
set termguicolors

nmap <Leader>s :source ~/.vimrc
nmap <Leader>v :e ~/.vimrc 

cmap w!! w !sudo tee %

set autoindent
set smartindent
set smarttab
set shiftwidth=2
set softtabstop=2
set tabstop=2
set expandtab
set history=1000
set hidden
set ignorecase
set smartcase
set title
set scrolloff=3
set number
set hlsearch
set backupdir=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp
set directory=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp
filetype plugin indent on

syntax on
colorscheme dracula
let g:airline_theme='dracula'
hi Normal guibg=NONE ctermbg=NONE

cnoremap w!! execute 'silent! write !sudo tee % >/dev/null' <bar> edit!

set backspace=indent,eol,start
let g:move_key_modifier = 'C'


autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 1 && isdirectory(argv()[0]) && !exists("s:std_in") | exe 'NERDTree' argv()[0] | wincmd p | ene | endif
map <C-b> :NERDTreeToggle<CR>
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
let g:NERDTreeDirArrowExpandable = '▸'
let g:NERDTreeDirArrowCollapsible = '▾'

let g:EasyMotion_do_mapping = 0
nmap s <Plug>(easymotion-overwin-f2)
let g:EasyMotion_smartcase = 1

map <Leader>j <Plug>(easymotion-j)
map <Leader>k <Plug>(easymotion-k)

" clear previous search highlighting
nnoremap <silent> <Esc><Esc> :let @/=""<CR> 

" By Buffer - Close buffer, not vim.
:nnoremap <Leader>q :Bdelete<CR>

nnoremap <C-tab>   gt
nnoremap <C-S-tab> gT
