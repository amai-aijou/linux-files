########################################
#-          Custom Settings           -#
########################################

# Custom bash prompt: [❤jolson@nerv-rocky ~ ❤]$ 
# All non-displaying characters must be wrapped with \[\] (color start, color finish)
# Failing to do so will result in the up-down arrows for history breaking after redisplay runs
#PS1="\[\e[1;35m\][❤\u@\h \W ❤]\$ \[\e[0m\]"

# Alternate bash prompt: [❤seelen@nerv-rocky ~ ❤]$ 
PS1="\[\e[1;35m\][❤notseelen@\h \W ❤]\$ \[\e[0m\]"

# Custom Aliases
alias hotvim='vi /home/jolson/cheatsheets/vim'
alias hotbash='vi /home/jolson/cheatsheets/bash'
alias journal='vi /home/jolson/softskills'
alias cnote='vi /home/jolson/amai-aijou/C-Programming-A-Modern-Approach/c-notes'
alias lastless='fc -s | less'
alias gonote='vi /home/jolson/code/lets-go'

#------------------#
# Custom Functions #
#------------------#

# Runs c-schema.sh, which creates a new C programming template, with basic function outlines.
# Creates a comment section at top denoting the user who made it, the time ran, and purpose of program
# USAGE: "cvi example" will create example.c in the current directory

# UPDATE:  * Automatically opens the file in vim after creation
# 12/29/25 * Checks whether the file already exists before attemping to create.
cvi() {
	if ! [ -f $1.c ]; then
	'/home/jolson/amai-aijou/linux-files/bash-scripts/schemas/c-schema.sh' "$1"
	vi $1.c
	fi
}

cevi() {
	if ! [ -f $1.c ]; then
	'/home/jolson/amai-aijou/linux-files/bash-scripts/schemas/c-exercise.sh' "$1"
	vi $1.c
	fi
}
