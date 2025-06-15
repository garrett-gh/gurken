# Dactyl Gurken

Essentially a Dactyl Kinesis physical key layout without the bottom pinky and unreachable thumbs and with extra inner finger column.

* Keyboard Maintainer: [Garrett](https://github.com/garrett)

Make example for this keyboard (after setting up your build environment):

    make handwired/gurken:default

Flashing example for this keyboard:

    make handwired/gurken:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Gurken Keymap

### About

This keymap is designed for me, programmers DVORAK:
 
 The keymap file also contains RAISE layer but it is currently equivalent to LOWER layer and does
 not have an activation key mapped. It is intended for possible extensions.

### Keymap

       Main QUERTY layer:
       ,--------------------------------------------------.             .--------------------------------------------------.
       | =      |   1  |   2  |   3  |   4  |   5  |      |             |      |   6  |   7  |   8  |   9  |   0  |   -    |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       | Tab    |   Q  |   W  |   E  |   R  |   T  |      |             |      |   Y  |   U  |   I  |   O  |   P  |   \    |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       | LCtl   |   A  |   S  |   D  |   F  |   G  |      |             |      |   H  |   J  |   K  |   L  |   ;  |   '    |
       |--------+------+------+------+------+------|------'             '------|------+------+------+------+------+--------|
       | LShift |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |   ,  |   .  |   /  | RShift |
       '--------+------+------+------+------+------'                           `------+------+------+------+---------------'
                       | (1)  |Lft(2)|Rght(3)|                                        |   Up |  Dn  |      |
                       '--------------------'                                         `--------------------'
                                        .--------------------.      .------------------------.
                                        |      |      |LwR(7)|      | LwR(9) |       |       |
                                        | BkSp | Alt  |------|      |--------| Enter | Space |
                                        |  (4) | (5)  |CMND(6)|     | Ctrl(8)| (10)  |  (11) |
                                        '--------------------'      '------------------------'

       DVORAK layer:
       ,--------------------------------------------------.             .--------------------------------------------------.
       |   `    |   1  |   2  |   3  |   4  |   5  |      |             |      |   6  |   7  |   8  |   9  |   0  |   -    |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       | Tab    |   '  |   ,  |   .  |   p  |   y  |      |             |      |   f  |   g  |   c  |   r  |   l  |   /    |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       | ESC    |   a  |   o  |   e  |   u  |   i  |      |             |      |   d  |   h  |   t  |   n  |   s  |   \    |
       |--------+------+------+------+------+------|------'             '------|------+------+------+------+------+--------|
       | LShift |   ;  |   q  |   j  |   k  |   x  |                           |   b  |   m  |   w  |   v  |   z  | RShift |
       '--------+------+------+------+------+------'                           `------+------+------+------+---------------'
                       |      | Left | Rght |                                         |  Up  |  Dn  |      |
                       '--------------------'                                         `--------------------'
                                        .--------------------.      .--------------------.
                                        |      |      | Cmd  |      | Alt  |      |      |
                                        | BkSp |LOWER |------|      |------|Enter |Space |
                                        |      |      |      |      | Ctrl |      |      |
                                        '--------------------'      '--------------------'
                                        
       LOWER layer;
       ,--------------------------------------------------.             .--------------------------------------------------.
       |        |      |      |      |      |      |      |             |      |      |      |      |      |      |        |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       |        |   1  |   2  |   3  |   4  |   5  |      |             |      |   6  |   7  |   8  |   9  |   0  |   -    |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       |    `   |   !  |   @  |   #  |   $  |   %  |      |             |      |   ^  |   &  |   *  |   <  |   ;  |   :    |
       |--------+------+------+------+------+------|------'             '------|------+------+------+------+------+--------|
       |   F1   |  F2  |  F3  |  F4  |  F5  |  F6  |                           |  F7  |  F8  |  F9  | F10  | F10  | F12    |
       '--------+------+------+------+------+------'                           `------+------+------+------+---------------'
                       |      | Left | Rght |                                         |  Up  |  Dn  |      |
                       '--------------------'                                         `--------------------'
                                        .--------------------.      .--------------------.
                                        |      |      | Cmd  |      | Alt  |      |      |
                                        | BkSp |LOWER |------|      |------|Enter |Space |
                                        |      |      |      |      | Ctrl |      |      |
                                        '--------------------'      '--------------------'                                        
### Key Matrix Wiring

The below picture shows correspondence between the keys and the row/column wires of the left and
right halves:

       .--------------------------------------------------.             .--------------------------------------------------.
       |  L10   | L11  | L12  | L13  | L14  | L15  | L16  |             | R16  | R15  | R14  | R13  | R12  | R11  |  R10   |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       |  L20   | L21  | L22  | L23  | L24  | L25  | L26  |             | R26  | R25  | R24  | R23  | R22  | R21  |  R20   |
       |--------+------+------+------+------+------|------|             |------|------+------+------+------+------+--------|
       |  L30   | L31  | L32  | L33  | L34  | L35  | L36  |             | R36  | R35  | R34  | R33  | R32  | R31  |  R30   |
       |--------+------+------+------+------+-------------'             '------|------+------+------+------+------+--------|
       |  L40   | L41  | L42  | L43  | L44  | L45  |                           | R45  | R44  | R43  | R42  | R41  |  R40   |
       `---------------+------+------+------+------'                           `------+------+------+------+---------------'
                       | L50  | L51  | L52  |                                         | R52  | R51  | R50  |
                       '--------------------'                                         `--------------------'
                                        .--------------------.      .--------------------.
                                        |      |      | L55  |      | R55  |      |      |
                                        | L53  | L54  |------|      |------| R54  | R53  |
                                        |      |      | L56  |      | R56  |      |      |
                                        '--------------------'      '--------------------'

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


"ws2812": {
        "pin": ""
    }, 
    "rgb_matrix": {
        "driver": "ws2812",
        "split": true,
        "split_count":[34, 34]
    },
    