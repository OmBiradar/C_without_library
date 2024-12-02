// Define syscall numbers for Linux x86-64
#define SYS_READ  0
#define SYS_WRITE 1

// Write function: Prints to stdout
void my_write(const char *str, long length) {
    long syscall(long number, ...);
    syscall(SYS_WRITE, 1, str, length); // 1 = stdout
}

// Read function: Reads from stdin
long my_read(char *buffer, long length) {
    long syscall(long number, ...);
    return syscall(SYS_READ, 0, buffer, length); // 0 = stdin
}

// Helper: String length
long my_strlen(const char *str) {
    long len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Print a null-terminated string
void my_print(const char *str) {
    my_write(str, my_strlen(str));
}

// Read and print input (basic scanf-style)
long my_scan(char *buffer, long max_length) {
    long bytes_read = my_read(buffer, max_length - 1);
    if (bytes_read > 0) {
        buffer[bytes_read] = '\0'; // Null-terminate input
    }
    return bytes_read;
}

