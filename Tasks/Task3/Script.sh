#!/bin/bash


if [ -e ~/.bashrc ]
then
        export HELLO= $USER
	echo $HELLO
	bash
	echo Local= $(whoami) >>~/Task3/.bashrc	
fi
gnome-terminal
bash
