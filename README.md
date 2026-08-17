# nook

A text editor. Yours. Terminal only. No plugins, no bloat, no electron.

## Why

Every editor either does too much or gets in your way. nano is simple but
dumb. vim is powerful but you have to remember what mode you're in. sublime
is fast but it's not yours and it's not even open.

nook is nano's brain with better legs. Always insert mode, so you never
have to think about what mode you're in, you just type. But it moves fast:
word jumps, block jumps, jump-to-line, all without ever leaving insert.
On top of that: a command palette, and instant full-text search across
your whole project. Two keystrokes and you're at the line you wanted.

That's it. That's the whole idea.

## Philosophy

- No dependencies unless there is no other way.
- If you can write it in an afternoon, write it in an afternoon.
- The terminal is not a limitation. It's the whole point.
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

No libraries. No package manager. No excuses.

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
land once the core is solid. Not before.

## License

Do what you want with it. Just don't call it yours if it isn't.
