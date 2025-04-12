typedef unsigned int Uint32;
typedef unsigned short Uint16;
typedef unsigned char Uint8;

/* SDL_EventType enumeration */
enum SDL_EventType {
    SDL_FIRSTEVENT     = 0,
    SDL_QUIT           = 0x100,
    SDL_KEYDOWN        = 0x300,
    SDL_KEYUP          = 0x301,
    SDL_MOUSEMOTION    = 0x400,
    SDL_MOUSEBUTTONDOWN= 0x401,
    SDL_MOUSEBUTTONUP  = 0x402,
    SDL_MOUSEWHEEL     = 0x403,
    SDL_TEXTINPUT      = 0x303,
    SDL_LASTEVENT      = 0xFFFF
};

/* SDL_Keysym structure */
typedef struct SDL_Keysym {
    Uint32 scancode;
    Uint32 sym;
    Uint16 mod;
    Uint32 unused;
} SDL_Keysym;

/* SDL_KeyboardEvent structure */
typedef struct SDL_KeyboardEvent {
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint8  state;
    Uint8  repeat;
    Uint8  padding2;
    Uint8  padding3;
    SDL_Keysym keysym;
} SDL_KeyboardEvent;

/* SDL_Event union */
typedef union SDL_Event {
    Uint32 type;
    SDL_KeyboardEvent key;
} SDL_Event;

/* SDL_Keycode enum */
enum SDL_Keycode {
    SDLK_UNKNOWN = 0x00000000,
    SDLK_RETURN = 0x0000000d,
    SDLK_ESCAPE = 0x0000001b,
    SDLK_BACKSPACE = 0x00000008,
    SDLK_TAB = 0x00000009,
    SDLK_SPACE = 0x00000020,
    SDLK_EXCLAIM = 0x00000021,
    SDLK_QUOTEDBL = 0x00000022,
    SDLK_HASH = 0x00000023,
    SDLK_DOLLAR = 0x00000024,
    SDLK_PERCENT = 0x00000025,
    SDLK_AMPERSAND = 0x00000026,
    SDLK_QUOTE = 0x00000027,
    SDLK_LEFTPAREN = 0x00000028,
    SDLK_RIGHTPAREN = 0x00000029,
    SDLK_ASTERISK = 0x0000002a,
    SDLK_PLUS = 0x0000002b,
    SDLK_COMMA = 0x0000002c,
    SDLK_MINUS = 0x0000002d,
    SDLK_PERIOD = 0x0000002e,
    SDLK_SLASH = 0x0000002f,
    SDLK_0 = 0x00000030,
    SDLK_1 = 0x00000031,
    SDLK_2 = 0x00000032,
    SDLK_3 = 0x00000033,
    SDLK_4 = 0x00000034,
    SDLK_5 = 0x00000035,
    SDLK_6 = 0x00000036,
    SDLK_7 = 0x00000037,
    SDLK_8 = 0x00000038,
    SDLK_9 = 0x00000039,
    SDLK_COLON = 0x0000003a,
    SDLK_SEMICOLON = 0x0000003b,
    SDLK_LESS = 0x0000003c,
    SDLK_EQUALS = 0x0000003d,
    SDLK_GREATER = 0x0000003e,
    SDLK_QUESTION = 0x0000003f,
    SDLK_AT = 0x00000040,
    SDLK_LEFTBRACKET = 0x0000005b,
    SDLK_BACKSLASH = 0x0000005c,
    SDLK_RIGHTBRACKET = 0x0000005d,
    SDLK_CARET = 0x0000005e,
    SDLK_UNDERSCORE = 0x0000005f,
    SDLK_GRAVE = 0x00000060,
    SDLK_a = 0x00000061,
    SDLK_b = 0x00000062,
    SDLK_c = 0x00000063,
    SDLK_d = 0x00000064,
    SDLK_e = 0x00000065,
    SDLK_f = 0x00000066,
    SDLK_g = 0x00000067,
    SDLK_h = 0x00000068,
    SDLK_i = 0x00000069,
    SDLK_j = 0x0000006a,
    SDLK_k = 0x0000006b,
    SDLK_l = 0x0000006c,
    SDLK_m = 0x0000006d,
    SDLK_n = 0x0000006e,
    SDLK_o = 0x0000006f,
    SDLK_p = 0x00000070,
    SDLK_q = 0x00000071,
    SDLK_r = 0x00000072,
    SDLK_s = 0x00000073,
    SDLK_t = 0x00000074,
    SDLK_u = 0x00000075,
    SDLK_v = 0x00000076,
    SDLK_w = 0x00000077,
    SDLK_x = 0x00000078,
    SDLK_y = 0x00000079,
    SDLK_z = 0x0000007a,
    SDLK_RIGHT = 0x4000004f,
    SDLK_LEFT = 0x40000050,
    SDLK_DOWN = 0x40000051,
    SDLK_UP = 0x40000052,
    SDLK_F1 = 0x4000003a,
    SDLK_F2 = 0x4000003b,
    SDLK_F3 = 0x4000003c,
    SDLK_F4 = 0x4000003d,
    SDLK_F5 = 0x4000003e,
    SDLK_F6 = 0x4000003f,
    SDLK_F7 = 0x40000040,
    SDLK_F8 = 0x40000041,
    SDLK_F9 = 0x40000042,
    SDLK_F10 = 0x40000043,
    SDLK_F11 = 0x40000044,
    SDLK_F12 = 0x40000045,
};
