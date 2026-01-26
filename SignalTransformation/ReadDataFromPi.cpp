#include <gpiod.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int Auslesen() {
    //geklaut, muss noch jetzt angepasst werden
    const char* chipname = "gpiochip0";
    const unsigned int line_num = 17;

    gpiod_chip* chip = gpiod_chip_open_by_name(chipname);
    if (!chip) {
        cerr << "GPIO chip konnte nicht geöffnet werden\n";
        return 1;
    }

    gpiod_line* line = gpiod_chip_get_line(chip, line_num);
    if (!line) {
        cerr << "GPIO Line nicht gefunden\n";
        return 1;
    }

    if (gpiod_line_request_input(line, "rpi-zero2-input") < 0) {
        cerr << "GPIO konnte nicht als Input gesetzt werden\n";
        return 1;
    }

    while (true) {
        int value = gpiod_line_get_value(line);
        cout << "GPIO 17: " << value << endl;
        sleep(1);
    }

    gpiod_chip_close(chip);
    return 0;
}