<img width="220" height="220" alt="9cb27459-d0fe-4874-a46d-d2f70148f01e" src="https://github.com/user-attachments/assets/95661d43-bdf5-4176-ac9a-3220f1ed8dd2" />


# nook (角落)

A simple text editor. Terminal only. No plugins, no bloat, no electron.

## Philosophy

- No dependencies unless there is no other way.
- If you can write it in an afternoon, write it in an afternoon.
- Fast beats fancy. A redraw should never be visible.
- If a feature needs a manual, it's the wrong feature.
- Read the source. It should be short enough to actually read.

## Status

Early. MVP is: open a file, move around, type, delete, save. Everything
else comes after that works and works well.

## Roadmap

Beyond the MVP, nook is aimed at becoming a fast, portable notes editor
with a pentesting/security focus:

- **Search everywhere** — fuzzy file and content search without leaving
  the editor.
- **Security mode** — per-project or per-file encryption. Notes are
  encrypted at rest and transparently decrypted on open with a
  passphrase (Argon2id key derivation + AES-256-GCM, no external
  keyring required).
- **Integrity utilities** — quick SHA-256 hashing of buffers/files for
  verifying payloads and evidence during engagements.

The goal: something you can carry on a USB stick between boxes during
an assessment or OSCP lab, without leaving sensitive notes lying
around in plaintext.

## Build

```
gcc nook.c -o nook -Wall -Wextra -O2
```

## Run

```
./nook file.txt
```

## Keys (so far)

| Key        | Action      |
| ---------- | ----------- |
| Arrow keys | Move cursor |
| Ctrl+S     | Save        |
| Ctrl+Q     | Quit        |

More coming. Fast navigation, the command palette, and search-everywhere
land once the core is solid.

## License

Do what you want with it. Just don't call it yours if it isn't.

## License

Do what you want with it. Just don't call it yours if it isn't.
