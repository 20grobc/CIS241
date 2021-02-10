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

**mount** - a command used to

**umount** - a command used to
