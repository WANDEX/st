![](https://st.suckless.org/st.svg)
###### patch set compatible with st-0.8.4 (2020-06-19)

## Extra stuff added to vanilla st:
- [Alpha Focus Highlight](https://st.suckless.org/patches/alpha_focus_highlight/)
- [anysize](https://st.suckless.org/patches/anysize/)
- [bold is not bright](https://st.suckless.org/patches/bold-is-not-bright/)
- [boxdraw](https://st.suckless.org/patches/boxdraw/)
- [defaultfontsize](https://st.suckless.org/patches/defaultfontsize/)
- [externalpipe](https://st.suckless.org/patches/externalpipe/)
- [font2](https://st.suckless.org/patches/font2/)
- [newterm](https://st.suckless.org/patches/newterm/)
- [vim_browse](https://st.suckless.org/patches/vim_browse/)
- [workingdir](https://st.suckless.org/patches/workingdir/)
- [xresources](https://st.suckless.org/patches/xresources/)

###### this patch is the reason `libxft-bgra` is required!
st-fix_color_fonts.diff - support utf-8 colored emoji characters in fonts.

## Installation

After making any config changes that you want, but `make`, `sudo make install` it.

###### You must have `libxft-bgra` installed until the libxft upstream is fixed.

This build of st does not block color emoji in the fonts, so you must install [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/) from the AUR, which fixes a libxft color emoji rendering problem, otherwise st will crash upon trying to render one. Hopefully this fix will be in all libxft soon enough.

## Configuration

After `make` command *config.h* file will be generated, based from *config.def.h*.\
You will definitely need to **remap the keys** because I'm using the colemak, not qwerty layout.\
Edit default variable values in *config.h*.

Make a backup of your *config.h* before `make clean`, as by default it removes *config.h* as well.\
`sudo make install` to apply config changes.

#### About configuration structure

`patch/`-- all dirs except `patch/include/` dir, contain **.diff** files.\
`patch/include/`--  there is some patch specific **.[c|h]** files with recognizable patch name.\
`patch/include/config/`-- parts of config code. So, if you want to edit keyboard keys - edit them in **keys.h** etc.

**include.[c|h]** -- includes all separate patch specific files. Those files contain separate patch specific functions.
**include.c & include.h** -- the files themselves are the only files that is included inside **st.c**.

This makes **st.c** more readable, and **.diff** files contain only changes that directly affect the main code.

## About .diff patch files included inside patch/ dir

Almost all patches contain changes and are not original, many **.diff** files are merged because the same parts of the files are being edited.

That is why I have included links to the original patch pages to make it easier to find them.

If you keep the original patching order and apply the command `patch -p1 -f -R` in reverse order to each.\
The files will revert to their original state, without failed hunks.

Do not forget to remove from **include.c & include.h** patch specific files for patches that you are reversed,\
and update config files in `patch/include/config/`, as they are not affected by **.diff** files.

##### [The order of applying a set of patches - from the first to the last.](https://github.com/WANDEX/st/blob/master/patch/active_patch_list)

###### For more details visit official st page [st.suckless.org](https://st.suckless.org/).

