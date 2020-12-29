![](https://st.suckless.org/st.svg)
###### patch set compatible with st-0.8.4 (2020-06-19)

###### this patch is the reason `libxft-bgra` is required!
st-fix_color_fonts.diff - support utf-8 colored emoji characters in fonts.

## Installation

After making any config changes that you want, but `make`, `sudo make install` it.

###### You must have `libxft-bgra` installed until the libxft upstream is fixed.

This build of st does not block color emoji, so you must install [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/) from the AUR, which fixes a libxft color emoji rendering problem, otherwise st will crash upon trying to render one. Hopefully this fix will be in all libxft soon enough.

## Configuration

After `make` command *config.h* file will be generated, based from *config.def.h*.\
You will definitely need to **remap the keys** because I'm using the colemak, not qwerty layout.\
Edit keyboard keys or default variable values in *config.h*.\
Make a backup of your *config.h* before `make clean`, as by default it removes *config.h* as well.\
`sudo make install` to apply config changes. Then test the functionality by creating a new instance of st.

## About .diff patch files included inside patch/ dir

Almost all patches contain changes and are not original, many .diff files are merged because the same parts of the files are being edited.

That is why I have included links to the original patch pages to make it easier to find them.

If you keep the original patching order and apply the command `patch -p1 -f -R` in reverse order to each.\
The files will revert to their original state, without failed hunks.

##### [The order of applying a set of patches - from the first to the last.](https://github.com/WANDEX/st/blob/master/patch/active_patch_list)

###### For more details visit official st page [st.suckless.org](https://st.suckless.org/).

