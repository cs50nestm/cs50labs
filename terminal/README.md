# Terminal

## What is the Terminal?

![Terminal](http://labs.cs50nestm.net/terminal.gif)

On the bottom of your window on the right is a "terminal window", which is a text-based or "command-line" interface to your workspace. The command line is very useful in programming because it allows you to explore your workspace's files and directories, compile code, run programs and even install software. 

{% next %}

## Exploring your Workspace

Before we start, you may notive three text files open in the text editor on the upper right side of your screen. These files are located somewhere in your workspace, but they may not stored in the appropriate directories. Just ignore these files for now.

Under the tab that says `>_ Terminal`, is a window with a `$` prompt. This is the window you will use to interact with your terminal. Let's start exploring this workspace. Your workspace contains folders (ofter called directories) and files, in the same way as your computer does. Directories can be nested in other directories, just as you have folders stored in other folders on your computer.

Lets see what files are in the directory in which you are currently positioned (your current working directory). Type in `ls` for list at the `$` prompt. This will list out all the files (including directories) that are the direct children of your current directory. When you are using the command line, you can see only these files; you cannot see or access files which are inside of any child directories. 

## The `ls` and `cd` Teminal Commands

You should see `apt1` in blue output under `ls`. Since this is in blue, it indicates that this is a directory. We can see what's inside of `apt1` by changing into the `apt1` directory. Type in `cd apt1` for change directory, and you will be positioned one level lower, and if you type in `ls` again, you will see the files located directly inside of `apt1`. This is similar to having to enter an apartment inside a larger building, to see what's inside of it.

{% next %}

The output of this second `ls` should be `kitchen living_room`. Now type `cd living_room` to change your working directory to `living_room` and take a look to see what is inside with `ls`. We can again think of this like having to walk into a living room, inside of an apartment, to be able to see what's in it.

You'll see `fridge` in blue, meaninging it's a directory, and `living_room_contents.txt` in white, meaning it's a regular file and not a directory. In fact this file will most likely be open in the text editor above.

But shouldn't `fridge` be in the kitchen? Let's `cd` into `fridge` and see what is there. 

You should see the file name `fridge_contents.txt` show up in white. You'll see a file with that name in a tab in the text editor on top of your screen. Indeed, this looks like items that should be in the kitchen, not in a living room.

Let's fix that by moving the directory `fridge` from `bedroom` to `living_room`. We'll want to do this by first positioning ourselves into the `apt1` directory. To see the entire path of where our current directory is now located type in `pwd` for "print working directory".

You'll see that were are located in `/root/sandbox/apt1/living_room`. This is the entire path from the root of our workspace. We want to go up one level. To do this, type in `cd ..`. The two dots mean go up one directory level higher.

{% next %}

## The `mv` Command

You should now be in the `apt1` directory. If you type in `ls` you should once again see `living_room kitchen`. We can now move the fridge directory by typing in:

```
mv living_room/fridge kitchen/
```

There are three parts to this statement. the `mv` stands for "move", `living_room/fridge` is the `fridge` directory inside the `living_room` directory, and `kitchen/` is the `kitechen` directory. This tells your terminal to move the  directory `fridge`, along with it's contents, from the `livingroom` to the `kitchen` directory.

The `fridge_contents` file may disappear from the text editor section on top of your screen, but no worries it's not deleted. You can see a graphical representation of the directory structure by clicking on the folder symbol to the left of `cabinet_contents.txt` tab. You can then click on each of these directories to see exactly what is inside. The `fridge` with it's `fridge_contents.txt` should now be where it belongs in the `kichen`!

The `mv` command is used both to move a file as well as to rename a file.

{% next %}

## Making a new directory with `mkdir`

Let's add a few new rooms to our apartment! First make sure you are positioned in the `apt1` directory. You can check with either `pwd` or `ls`.

Now you can use the command `mkdir` which means "make directory". It will make a new directory inside your current directory. Type in:

```
mkdir bedroom
mkdir bathroom
```

Now type in `ls` to see what's inside of `apt1`. you should the two new directories show up along with the two previously existig ones. Your apartment should now have four rooms!

{% next %}

## Creating a new file with `touch`

Before you are finished, let's make a new text file using `touch`.

First, let's create a `medicine_cabinet` directory inside of `bathroom`. Remember how to change your current directory? You'll want to first move into the `bathroom` directory and then type in:

```
touch medicine_cabinet.txt`
```













https://www.youtube.com/watch?v=BnJ013X02b8




