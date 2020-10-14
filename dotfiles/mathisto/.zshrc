# Enable Powerlevel10k instant prompt. Should stay close to the top of ~/.zshrc.
# Initialization code that may require console input (password prompts, [y/n]
# confirmations, etc.) must go above this block; everything else may go below.
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

set -g default-terminal "xterm-256color"
set encoding=UTF-8
stty -ixon # Allow ctrl-s passthrough without pausing terminal

# History
setopt INC_APPEND_HISTORY
setopt EXTENDED_HISTORY
setopt HIST_FIND_NO_DUPS
setopt HIST_IGNORE_ALL_DUPS

export ALIASES=~/.config/.aliases && [ -f $ALIASES ] && . $ALIASES || echo "Failed to load aliases!"
export ENV_EXPORTS=~/.config/.env && [ -f $ENV_EXPORTS ] && . $ENV_EXPORTS || echo "Failed to load ENV Exports!"
export FUNCTIONS=~/.config/.functions && [ -f $FUNCTIONS ] && . $FUNCTIONS || echo "Failed to load functions!"
export KEYBINDINGS=~/.config/.keybindings && [ -f $KEYBINDINGS ] && . $KEYBINDINGS || echo "Failed to load key bindings!"

# Zplug ZSH Package Manager - https://github.com/zplug/zplug
source $ZPLUG_HOME/init.zsh
if ! zplug check --verbose; then
	printf "Install? [y/N]: "
	if read -q; then
		echo
		zplug install
	fi
fi
zplug "TamCore/autoupdate-oh-my-zsh-plugins"
zplug "plugins/gitfast", from:oh-my-zsh
zplug "mdumitru/git-aliases"
zplug "paulirish/git-open", as:plugin
zplug "arzzen/calc.plugin.zsh"
zplug "Aloxaf/fzf-tab"
zplug "wookayin/fzf-fasd"
zplug "romkatv/powerlevel10k", as:theme, depth:1
zplug "zsh-users/zsh-autosuggestions"
zplug "hlissner/zsh-autopair", defer:2
zplug "zdharma/fast-syntax-highlighting", defer:2
zplug "zsh-users/zsh-history-substring-search", defer:2
zplug load

bindkey -M vicmd 'k' history-substring-search-up
bindkey -M vicmd 'j' history-substring-search-down

# Enable shell integrations
test -e "${HOME}/.iterm2_shell_integration.zsh" && source "${HOME}/.iterm2_shell_integration.zsh"

# Version Management
eval "$(rbenv init -)"
eval "$(pyenv init -)"
[ -s "$NVM_DIR/nvm.sh" ] && . "$NVM_DIR/nvm.sh"

# Go development
test -d "${GOPATH}" || mkdir "${GOPATH}"
test -d "${GOPATH}/src/github.com" || mkdir -p "${GOPATH}/src/github.com"

[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh # Fuzzy Find
eval "$(fasd --init auto)"             # Load fasd - https://github.com/clvv/fasd

zmodload zsh/zle
autoload -U colors && colors

motivate # Print a motivational quote

# To customize prompt, run `p10k configure` or edit ~/.p10k.zsh.
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh
