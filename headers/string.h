struct string {
    union {
        char *data;
        char sso_buffer[16];
    };
    int size;
    int capacity;
};