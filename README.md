# Pixul

An ultra-lightweight pixel rendering engine for C, built using SDL2

Pixul allows you to put pixels on the screen as easily and quickly as possible. By simplifying the process to spawn windows, allocate pixel memory, etc. it's incredibly easy to begin rendering 2D applications.

# How to use

Because the engine is contained in only a header file, just include pixul.h in your project and begin using it.

Note that because Pixul uses SDL2, you have to include the -lSDL2 flag in your gcc compilation command.

# Examples

This repository includes an example main.c, and an example Makefile, for super simple uses.

In addition to this simple use-case that doesn't even include a rendering loop, I have a few other projects that implement this library for rendering, including [cellular-automata](https://github.com/connormdoane/cellular-automata), [snake](https://github.com/connormdoane/snake), and [worm](https://github.com/connormdoane/worm).

Note if any of the above links 404, those projects are still private repos in development. Stay tuned!

# TODO
There's a few things I'd like to do to improve this project in the future

- Add additional functions for timing so logic timing can be separated from frame redrawing (to allow for better keybinds)
- Create simplified functions for windows where pixels are 1:1 with screen pixels
- Explore storing the pixels in a single array instead of a 2D array, since this may be faster for low-resolution renderings
