"####################
"- Custom Settings -#
"####################

" Turn on line numbers
set number

" Turn on Syntax highlighting to make code (hopefully!) easier to read
syntax on

" Turn on various useful search options:
" Typing ":set xxx" sets the option "xxx".  Some options are:
"        'ic' 	'ignorecase'	Ignore upper/lower case when searching
"        'is' 	'incsearch'	    Show partial matches for a search phrase
"        'hls' 	'hlsearch'		Highlight all matching phrases
"        'nu'	'number'		Turn on line numbers
set is hls nu

" uncomment to adjust number of spaces in a tab (default 8)
set tabstop=4

" uncomment to carry current indent to next line
" set autoindent

" Sets t_Co (total_colors, I presume) to 256 (default 8)
set t_Co=256

" Creates a new directory for vim backups (to be used with "set backup")
" Currently turned off as it causes problems with exiting Cursor Addressing
"   Mode after closing vim
"   silent !mkdir ~/backups/vim

" sets backup directory for storing previous files. removes annoying file~
set backupdir=~/backups/vim
