#include "App.h"
#include "TextFileInfoSupplier.h" 
int main() {
    App app;

    cout << "Select mode: 1 (Manual Input) or 2 (File Input): ";
    int mode;
    cin >> mode;

    if (mode == 1) {
        app.collectInput();
    } else {
        string filename;
        cout << "Enter filename: ";
        cin >> filename;

        App fileApp(new TextFileInfoSupplier(filename));
        fileApp.runFromFile(filename);
    }

    return 0;
}