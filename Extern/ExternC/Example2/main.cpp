// --- main.cpp ---
extern "C" {
    void addNumbers(int a, int b); // Forward Declaration
}

int main() {

    addNumbers(10, 20);

    return 0;
}