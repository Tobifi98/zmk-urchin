/**
 * This file includes custom keycodes for the German input language setting.
 * If you only type in English, you can delete this file and its import.
 * If you wish to replace this file with your preferred language, use
 * the QMK version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │ Tab │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │Shift│ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │ Shift    │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │ Ctrl│Win│Alt │                        │ Alt│Win │Menu│Ctrl│
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CARET GRAVE           // ^
#define DE_SS MINUS              // ß
#define DE_ACUT EQUAL            // ´
// Row 2
#define DE_UDIA LBKT             // Ü
#define DE_PLUS RBKT             // +
// Row 3
#define DE_ODIA SEMI             // Ö
#define DE_ADIA APOS             // Ä
#define DE_HASH NON_US_BSLH      // #
// Row 4
#define DE_LABK NON_US_HASH      // <
#define DE_MINS SLASH            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │Shift│ > │ Y │ X │ C │ V │ B │ N │ M │ ; │ : │ _ │ Shift    │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │ Ctrl│Win│Alt │                        │ Alt│Win │Menu│Ctrl│
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG LS(GRAVE)         // °
#define DE_EXCL LS(N1)           // !
#define DE_DQUO LS(N2)           // "
#define DE_SECT LS(N3)           // §
#define DE_DOLL LS(N4)           // $
#define DE_PERC LS(N5)           // %
#define DE_AMPS LS(N6)           // &
#define DE_SLSH LS(N7)           // /
#define DE_LPAR LS(N8)           // (
#define DE_RPAR LS(N9)           // )
#define DE_EQL  LS(N0)           // =
#define DE_QUES LS(MINUS)        // ?
#define DE_GRV  LS(EQUAL)        // `
// Row 2
#define DE_ASTR LS(RBKT)         // *
// Row 3
#define DE_QUOT LS(APOS)         // '
// Row 4
#define DE_RABK LS(NON_US_HASH)  // >
#define DE_UNDS LS(SLASH)        // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ¹ │ ² │ ³ │ € │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │ ¨ │ ´ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ | │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_TILD RA(GRAVE)        // ~
#define DE_EURO RA(E)            // €
// Row 2
#define DE_LBRK RA(N7)           // {
#define DE_LBRC RA(LBKT)         // [
#define DE_RBRC RA(RBKT)         // ]
#define DE_RBRK RA(N0)           // }
// Row 4
#define DE_PIPE RA(NON_US_BSLH)  // |

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ° │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ~ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define DE_DEG2 LS(RA(RBKT))     // °
#define DE_CIRC LS(RA(LBKT))     // ^

/** 
 * Personalized symbols.
 * 
 * These symbols are not part of the default German input.
 * I use a custom Windows keymap to input them.
*/
#define DE_BKTK RA(MINUS)        // `
#define DE_TLD RA(EQUAL)         // ~
#define DE_CEGR RA(N3)           // €