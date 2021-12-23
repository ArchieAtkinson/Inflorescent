# Inflorescent

Inflorescent is a 40% flowerstatic PCB keyboard made with KiCAD.

This repo has three folders:
- mCAD
- eCAD
- QMK
- Graphics

The mCAD Folder contains STLs for the spacer. There are two types of spacers, standard and complete. These can be 3D printed and either can be used.

The eCAD folder contains the three PCBs that make up the Inflorescent keyboard. The base, mainboard (inflorescent board) and plate. The base and plate are just PCBs whilst the inflorescent board contains the pads and PTH for mounting switches, Kailh hot-swappable sockets and a microcontroller. If you would like to make one your self you can generate the gerbers and have them made yourself. The recommended microcontroller is an Elite C but any Pro Micro equivalent should work. 

The QMK folder contains the files for the QMK firmware. You can compile it your self with QMK or you can flash the inflorescent_lavender.hex with QMK Toolbox. Just select the inflorescent_lavender.hex and atmega32u4 as the MUC.

The Graphics folder contains the orignal art files. Please do not distribute these files seperate from this repo. 

## TODO 

Move mounted holes so they don't collide with the keys.
Change switch footprint to allow for 5 pin switches.

## Pictures

![A Inflorescent keyboard](keyboard.jpg)
![The PCBs](PCBs.jpg)

## Layout

  /* Basic layer (L0)
   *  q      w      e      r      t        ||       y      u      i      o      p
   *  a      s      d      f      g        ||       h      j      k      l      ;
   *  z      x      c      v      b   del  || >/||  n      m      ,      .      /
   * esc    tab   super  shift  bksp  ctrl || alt  space   RS     LW     '     ret
   */


  /* Raised layer (RS)
   *  !       @     {      }      |        ||       -      7      8      9      *
   *  #       $     (      )      `        ||       .      4      5      6      +
   *  %       ^     [      ]      ~        ||       &      1      2      3      \
   * menu    caps   <      >     del       ||       _                    0      =
   */

  /* Lower layer (LW)
   * insert  home   up    end    pgup      ||      vol+    F7     F8     F9    F10
   *  del    left  down  right   pgdn      ||      vol-    F4     F5     F6    F11
   *                                       ||      mute    F1     F2     F3    F12
   *                                  ||        –                    ¨    	   reset
   */