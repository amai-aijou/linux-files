#####################
#- Custom Settings -#
#####################

# Custom bash prompt: [❤user@host ~ ❤]$ 
# All non-displaying characters must be wrapped with: \[ \] (color start, color finish)
# Failing to do so results in bash up/down-arrow history breaking after exiting a utility
PS1="\[\e[1;35m\][❤\u@\h \W ❤]\$ \[\e[0m\]"

# Custom Aliases
#----------------

#frequently used journals and notes
alias hotvim='cat ~/cheatsheets/vim'
alias hotbash='vi ~/cheatsheets/bash'
alias journal='vi ~/softskills'
alias cnote='vi ~/cheatsheets/c'

#runs last command in a screen reader
alias lastless='fc -s | less'
