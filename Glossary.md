**chmod** - a command used to change permissions of a file. This includes read, write, and execute permissions for the owner, group,
 and others.
```
# gives read, write, execute permissions for user, read + execute permissions for the group, and read permissions for others on the 
#file myfile
chmod 754 myfile
```

**chown** - a command used to transfer the ownership of a file to a specifieed username
```
# makes linuxuser2 the owner of file.ext
chown linuzuser2 file.ext
```

**chgrp** - a command used to change group ownership of a file or directory
```
# transfers ownership of the file abc.txt to the group geeksforgeeks
chgrp geeksforgeeks abc.txt
```

**pwd** - a command used to find the path of the current working directory
```
# returns current working directory (ex. /home/grob)
pwd
```

**ls** - a command used to view the contents of the current directory. To see contents of another directory, type the path after ls
use hte '-a' flag to show hidden contents, and the '-l' flag for longform
```
#shows all the files, including hidden files, in the current directory
ls -a
```

**ln** - a command used to make links between files, hard or symbolic. Hard links allow multiple filenames to be associated with the
same file. By default it makes hard links, use the '-s' flag to make symbolic links
```
#makes file2.tst link to file1.txt
ln file1.txt file2.txt
```

**mkdir** - a command used to make a new directory
```
#Makes a new directory calle Music
mkdir Music
```

**mv** - a command used to move a file to a different location or rename it. 
```
#moves frenchVocab.txt to the grobc/language directory 
mv frenchVocab.txt grobc/language
```

**cp** - command used to copy files from the current directory to a different directory
```
#creates a copy of scenery.jpeg and put it into the Pictures directory
cp scenery.jpeg /home/username/Pictures

```

**rm** - a command used to remove a file from the filesystem. Use the 'r' flag to remove recursively. Use the 'f' flag to force 
the operation without checking with the user
```
#remove the folder called folderOne and all files within it
rm -rf folderOne

```

**file** - a command used to determine the type of a file 
```
#display the file type of Invoice.pdf
file Invoice.pdf

```

**mount** - a command used to attach (mount) file systems and removable devices such as USB flashdrives. It can also be used to
 list currently mounted items
```
#mounts the /dev/sdb1 file system to the /mnt/media directory
mount /dev/sdb1 /mnt/media
```

**umount** - a command used to detach a mounted file system
```
#unmounts a currently mounted file system called /dev/sdb1
umount /dev/sdb1
```

**man** - a command used to open the 'maunal' for the command that includes how to use it, what it does, and all flags 
associated with that command.
```
#opens the manual for the ls command
man ls
```

**echo** - a command used to echo back information to the user. It can also be used to 'echo' information into a file.
```
#echos to the user the exit status of the last program they ran
echo $?
```

**clear** - a command used to clear the screen, wipes out all text
```
#clears the screen
clear
```

**whoami** - a command used to display the username of the current user
```
#displays name of user
whoami
```

**date** - a command used to display or set the system date
```
#system will return the date in the format of 'Year: 2021, Month: February, Day: 16'
date +"Year: %Y, Month: %m, Day: %d"
```

**vim** - a command used to open a new file, or edit an existing file in the vim text editor
```
#opens the Glossary.md file in vim
vim Glossary.md
```

**emacs** - a command used to open a new file, or edit an existing file in the emacs text editor
```
#opens Glossary.md in emacs
emasc Glossary.md
```

**touch** - a command used to create a file, as well as create, change, and modify timestamps of a file
```
#creates 3 different files named File1_name, File2_name, and File3_name
touch File1_name File2_name touch File3_name
```
**git clone** - a command used to clone a github repository into your VM provided the ssh
```
#clones my repository to the vm
git clone git@github.com:20grobc/CIS241.git
```

**git status** - a command used to display the status of the working tree
```
#displays status of the working tree in the current git repository, ex. CIS241
git status
```

**git commit** - a command used to record changes to the local repository, needs to be done before you can push
```
#commits a file named Glossary.md
git commit Glossary.md
```

**git push** - a command used to update remote repositories using the local repository
```
#pushes changes of Glossary.md to the remote repository
git push Glossary.md
```

**git pull** - a command used to incorperate changes from a remote repository into the current branch
```
#pulls the most up to date version of the CIS241 repository to the current branch
git pull CIS 241
```

