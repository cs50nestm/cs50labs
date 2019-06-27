# Terminal

## What is the Terminal?

![Terminal](http://labs.cs50nestm.net/terminal.gif)

On the bottom of your window on the right is a "terminal window", which is a text-based or "command-line" interface to your workspace. The command line is very useful in programming because it allows you to explore your workspace's files and directories, compile code, run programs and even install software. 

{% next %}

## Exploring your Workspace

Before we start, you may notive three text files open in the text editor on the upper right side of your screen. These files are located somewhere in your workspace, but they may not stored in the appropriate directories. Just ignore these files for now.

Under the tab that says `>_ Terminal`, is a window with a `$` prompt. This is the window you will use to interact with your terminal. Let's start exploring this workspace. Your workspace contains folders (ofter called directories) and files, in the same way as your computer does. Directories can be nested in other directories, just as you have folders stored in other folders on your computer.

Lets see what files are in the directory in which you are currently positioned (your current working directory). Type in `ls` for list at the `$` prompt. This will list out all the files (including directories) that are the direct children of your current directory. When you are using the command line, you can see only these files; you cannot see or access files which are inside of any child directories. 

You should see `apt1` in blue output under `ls`. Since this is in blue, it indicates that this is a directory. We can see what's insdide of `apt1` by changing your position of your working directory to be one level lower. Type in `cd apt1` for change directory, and you will be positioned one level lower, and if you type in `ls` again, you will see the files located directly inside of `apt1`. This is similar to having to enter an apartment inside a larger building, to see what's inside of it.

You should now see what looks like two rooms in an apartment, `living_room` and `kitchen`. Now type `cd living_room` to change your working directory to `living_room` and take a look to see what is inside with `ls`. We can again think of this like having to walk into a living room, inside of an apartment, to be able to see what's in it.

Well clearly there is a mistake here! It looks like there is a directory named `fridge` inside of `living_room`! Let's `cd` into `fridge` and see what is there. 

You should see the file name `fridge_contents.txt` show up in white. A white file name indicates that this is a regular file rather than a directory. You'll see a file with that name in a tab in the text editor on top of your screen. Indeed, this looks like items that should be in the kitchen, not in a living room.

Let's fix that by moving the directory `fridge` from `bedroom` to `living_room`. We'll want to do this by first positioning ourselves into the `apt1` directory. To see the entire path of where our current directory is now located type in `pwd` for "print working directory".

You should see that were are located in `/root/sandbox/apt1/living_room`. This is the entire path from the root of our workspace. We want to go up one level. To do this, type in `cd ..`. The two dots mean go up one directory level higher.

You should now be in the `apt1` directory. If you type in `ls` you should once again see `living_room kitchen`. We can now move the fridge directory by typing in:

```
mv living_room/fridge kitchen/
```

This tells your terminal to move (`mv`) the file (or directory) `fridge` which is inside of `livingroom` to the `kitchen` directory.

The `fridge_contents` file may disappear from the text editor section on top of your screen, but no worries it's not deleted. You can see a graphical representation of the directory structure by clicking on the folder symbol to the left of `closet_contents.txt` tab. You can then click on each of these directories to see exactly what is inside. The `fridge` with it's `fridge_contents.txt` should now be where it belongs in the `kichen`!









https://www.youtube.com/watch?v=BnJ013X02b8




