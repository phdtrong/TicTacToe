#!/bin/bash
#I. SETTING ENVIRONMENT-----------------------------------------------
#rm keygen keygen.pub
key_var='key'
file_ssh_config='/home/runner/.ssh/config'
user_name='phdtrong'

# new BASH project first
if [[ $(command -v nix) ]]; then echo "🐧 Nix already installed"
else echo "🐧 Nix is being installed now"
	curl -L https://nixos.org/nix/install | sh; fi  										# Latest Nix
# Note of https://search.nixos.org/        														# BASH list link with common package, pick non-NixOS

git init																															# Initialize git in current directory level 
git config --global user.name "phdtrong"															# User name
git config --global user.email "phdtrong200748@gmail.com"							# Email

if [[ $(command -v ssh-keygen) ]]; then echo ">_ OpenSSH already installed"
else nix-env -iA nixpkgs.openssh; fi																	# Install openssh to run ssh-keygen  

if [[ $(command -v vim) ]] ; then echo ">_ VIM Editor already installed"
else echo "VIM Editor is being installed"
	nix-env -iA nixpkgs.vim; fi																					# Install openssh to run ssh-keygen  

if [ -f ${key_var} ]; then echo "SSH key file is defined already"
else ssh-keygen -t rsa -b 4096 -C "phdtrong200748@gmail.com"					# SSK key type RSA, 4096 bytes, with specific email
		echo ${key_var} ; echo "Copy this "${key_var}" content to SSH key in your github acc" ; exit 1 ; fi

echo "Checking result keygen adding below"
eval "$(ssh-agent)"																										# Evaluate the ssh-agent before adding anything
ssh-add ${key_var} #; exit 1

if [ -f !${file_ssh_config} ]; then echo "Already exist the config file"
else touch ${file_ssh_config}	; fi	#;exit 1													# Create new ssh config file to set user

# Edititing vim /home/runner/.ssh/config with lines of:
content="Host * \nUser $user_name\nStrictHostKeyChecking no \nIdentityFile $key_var"
#echo $content | tee ${file_ssh_config} >/dev/null
echo -e $content >> ${file_ssh_config}

ssh -T git@github.com

if [[ $(command -v ssh-agent) ]]; then echo "> SSH-agent already installed"
else nix-env -iA nixpkgs.ssh-agents; fi																# Install openssh to run ssh-keygen  

#II. GITHUB CLONING
#7. Clone with option of ssh key
dir_git='./TicTacToe/'
link_github='git@github.com:phdtrong/TicTacToe.git'
if [[ -d ${dir_git} ]]; then echo "_> GIT is already exist"
else echo "_> GIT is being cloned now"
	git clone $link_github ; fi

#III. Assignment question
# 2.1.Alias
#git config --global alias.myalias first_alias													# Set alias to .gitconfig
#echo "2.1.Below is the list of alias in this git"
#git config --list | grep alias																				# Show the alias part of .gitconfig
echo "2.1.Below is the list of user info in this git"
git config --list | grep user																					# Show the user's name and email part of .gitconfig

# 2.2.Git adding files
#echo "2.2.Adding file to github"
#git_files="main.cpp implement.h implement.cpp"												# List of new files needs to be added
cd $dir_git																														# Move to inside the local git folder

#for f in ${git_files}; do 
#	if [ -f "$f" ]
#	then 
#		git add ${f} 
#		git commit -m "new file named ${f} updated"
#		echo "The ${f} file is just being UPDATED"
#	else 																																# does NOT existed
#		touch ${f}
#		git add ${f} 
#		git commit -m "new file named ${f} added"
#		echo "The ${f} file is just being created"
#	fi 																																	# Create new file
#done
echo "PUSHING NOW"
#git remote -v | grep -w original || git remote add original $link_github
#git pull origin

#git add const.h
#git commit -m "Update const.h header's comment"
#git push origin main

git add matrix.h
git commit -m "Used 2 indentication format now"
git push origin main

#2.3.
#echo "RUNNING MAIN NOW"
#[ -e main ] && rm main
#g++ main.cpp implement.h implement.cpp -o main && ./main 
#rm main

#echo "EC.RECOVER DELETED BRANCHES"
#git reflog --no-abbrev

# bash ./main.sh																											# Run BASH FILE by typing this command to Console