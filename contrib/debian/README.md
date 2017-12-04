
Debian
====================
This directory contains files used to package sagbitd/sagbit-qt
for Debian-based Linux systems. If you compile sagbitd/sagbit-qt yourself, there are some useful files here.

## sagbit: URI support ##


sagbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sagbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sagbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/sagbit128.png` to `/usr/share/pixmaps`

sagbit-qt.protocol (KDE)

