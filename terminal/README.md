# Terminal

## What is the Terminal?

![Terminal](http://labs.cs50nestm.net/terminal.gif)

On the bottom of your window on the right is a "terminal window", which is a text-based or "command-line" interface to your workspace. The command line is very useful in programming because it allows you to explore your workspace's files and directories, compile code, run programs and even install software. 

{% next %}

## Exploring your Workspace

Before we start, you may notive three text files open in the text editor on the upper right side of your screen. These files are located somewhere in your workspace, but they may not stored in the appropriate directories. Just ignore these files for now.

Under the tab that says `>_ Terminal`, is a window with a `$` prompt. This is the window you will use to interact with your terminal. Let's start exploring this workspace. Your workspace contains folders (ofter called directories) and files, in the same way as your computer does. Directories can be nested in other directories, just as you have folders stored in other folders on your computer.

Lets see what files are in the directory in which you are currently positioned (your current working directory). Type in `ls` for list at the `$` prompt. This will list out all the files (including directories) that are the direct children of your current directory. When you are using the command line, you can see only these files; you cannot see or access files which are inside of any child directories. 

You should see `apt1` in blue output under `ls`. Since this is in blue, it indicates that this is a directory. We can see what's insdide of `apt1` by changing your position of your working directory to be one level lower. Type in `cd apt1` for change directory, and you will be positioned one level lower, and if you type in `ls` again, you will see the files located directly inside of `apt1`. 

You should now see what looks like two rooms in an apartment, `bedroom` and `kitchen`. Now type `cd bedroom` to change your working directory to `bedroom` and take a look to see what is inside with `ls`.

Well clearly there is a mistake here! It looks like there is a directory named `fridge` inside of `bedroom`!








https://www.youtube.com/watch?v=BnJ013X02b8




