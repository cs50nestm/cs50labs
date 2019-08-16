# Images

In this lab you will learn:

- How images are stored on computers
- How colors are represented in images
- How to access images in C

## Bitmaps

An **image** is basically a grid of **pixels**, which are little dots, each of which can be a different color. In a black and white image, we need one bit per pixel. We can visualize this with 0 representing black and 1 representing white.

<img src="http://labs.cs50nestm.net/bitmap.png" width="300px">

This grid of pixels is called a **bitmap**.

{% next %}

## RGB Triples

There are several different image formats, with different numbers of bits per pixel, but the most common is 24 bits per pixel or 24-bit color: eight bits representing red values, eight bits for green and eight bits for blue.

Since each color uses eight bits or one byte, we can use a number in the range of 0 to 255 to represent its color value. In hexadecimal, this is represented by 0x00 to 0xff. By mixing together these red, green and blue values, we can create millions of possible colors.

In the CS50 image problems, we'll be working with 24-bit BMP image files, which are essentially just a sequence of bits, most of which represent some pixel’s color. But a BMP file also contains some **metadata**, information like an image’s height and width. That metadata is stored at the beginning of the file and are referred to as headers.

Immediately following these headers is the actual bitmap: an array of bytes, or **RGB triples** of which represent a pixel’s color. We can use a struct in C to encapsulate the three bytes in each triple. Since BMP files store RGB triples backwards the struct could look like this:

```c
typedef struct
{
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
}
RGBTRIPLE;
```

where BYTE is defined as an 8-bit integer.

Since the bitmap is an array of bytes, we can visualize it as a two dimensional array as ` image[height][width]`. If we were to save the first triple as:

```c
RBGTRIPLE pixel = image[0][0];
```

we could then access each of the individual colors of `pixel` as `pixel.rbgtBlue`, `pixel.rbgtGreen`, and `pixel.rbgtRed`.

If a pixel were pure red, its values would be `0xff` for red, and `0x00` for blue and green.

We could change the value of a pixel to blue by:

```c
pixel.rgbtRed = 0x00;
pixel.rgbtBlue = 0xff;
pixel.rgbtGreen = 0x00;
```

{% next %}

## Your Turn

Included on the right are several files that will read a given image and write another version of the image to a new file. In between reading and writing these images, a function, `colorize()` will be called, which you will complete, to modify the values of the RGB triples in the given image.

The function `colorize()` which you'll find in the program, `helpers.c`, takes a 2D array called image as an argument, where image is an array of height many rows, and each row is itself another array of width many `RGBTRIPLE`s. So if image represents the whole picture, then image[0] represents the first row, and image[0][0] represents the pixel in the upper-left corner of the image.

The `main` function which reads and writes these files and calls your function is `colorize.c`. In addition there is `bmp.h`, a header file which contains the definitions of the structs used to read and write to the image file, and `helpers.h`, which defines your function prototype.

There is additionally a `Makefile` included to make sure all files are included when compiling the program.

Don't worry if you don't understand all of the distribution code. You'll learn more about these other programs as you work on the CS50 image problems. Your job is to experiment with just the `colorize()` function and see if you can change the colors in an image. We are giving you a very small file, `smiley.bmp`, which you can use as an input. See if you can output a new file, `output.bmp`, which changes the red pixels to green pixels.

You'll compile the program by typing in your terminal:

```
make colorize
```

Then, you can run your program by typing:

```
./colorize smiley.bmp output.bmp
```

where `argv[1]` is the input file, and `argv[2]` is the name of your new output file.

Once you get your function to work, try changing around other colors, and create other color combinations. You can even import your own image file (make sure it's saved first as a `.bmp`) and try to `colorize` it to see what happens!
