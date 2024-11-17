#include <stdio.h>
#include "pico/cyw43_arch.h" // Required for Wi-Fi functions

class WIFI
{

    public:

        WIFI();

        ~WIFI();
        char *SSID;
        char *PASSWORD;
        char *SERVER_IP;
        int SERVER_PORT;

        bool connect_to_wifi();
};