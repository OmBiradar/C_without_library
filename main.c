void print(const char *str);
long scan(char *buffer, long max_length);

int main() {
    char buffer[100];

    print("Enter your name: ");
    scan(buffer, sizeof(buffer));
    print("Hello, ");
    print(buffer);
    print("!\n");

    return 0;
}
