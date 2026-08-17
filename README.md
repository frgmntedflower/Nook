<img width="1254" height="1254" alt="9cb27459-d0fe-4874-a46d-d2f70148f01e" src="https://github.com/user-attachments/assets/27fa71cb-7ab8-43b7-a007-aaaef002dd42" />
# nook

A text editor. Terminal only. No plugins, no bloat, no electron.

## Why

Every editor either does too much or gets in your way. nano is simple but
dumb. vim is powerful but you have to remember what mode you're in. sublime
is fast but it's not yours and it's not even open.

## Philosophy

- No dependencies unless there is no other way.
- If you can write it in an afternoon, write it in an afternoon.
- The terminal is not a limitation.
- Fast beats fancy. A redraw should never be visible.
- If a feature needs a manual, it's the wrong feature.
- Read the source. It should be short enough to actually read.

## Status

Early. MVP is: open a file, move around, type, delete, save. Everything
else comes after that works and works well.

## Build

```
gcc nook.c -o nook -Wall -Wextra -O2
```
## Run

```
./nook file.txt
```

## Keys (so far)

| Key            | Action          |
|----------------|-----------------|
| Arrow keys     | Move cursor     |
| Ctrl+S         | Save            |
| Ctrl+Q         | Quit            |

More coming. Fast navigation, the command palette, and search-everywhere
land once the core is solid.

## License

Do what you want with it. Just don't call it yours if it isn't.
