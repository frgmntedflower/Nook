# Nook

A lightweight, terminal-based text editor written in C with ncurses. Designed for distraction-free writing and coding.

## Building

Requirements: GCC, ncurses.

```sh
./compile.sh
```

Or to build and run in one step:

```sh
./compile_run.sh
```

The binary is placed in `build/nook`.

## Usage

```sh
./build/nook [file]
```

If a file path is provided, Nook loads its contents into the editor buffer. Arrow keys navigate, printable characters insert text, backspace deletes, and ESC exits.

## Configuration

- `config/default.nookrc` — Editor configuration (empty placeholder).
- `assets/themes/default.theme` — Theme file (empty placeholder).

## Status

Early stage. Basic editing and file loading work. Saving is functional but needs review. Config and theme systems are placeholders for future development.

## License

Unlicense. See [LICENSE](LICENSE).
