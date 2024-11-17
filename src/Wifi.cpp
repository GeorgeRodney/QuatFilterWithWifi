#include "Wifi.hpp"

WIFI::WIFI()
{
    char *SSID = "SETUP-1D9B";
    char *PASSWORD = "coast9460animal";
    char *SERVER_IP = "127.0.0.1";
    int SERVER_PORT = 65432;
}

WIFI::~WIFI()
{

}
        // Function to connect to WiFi
bool WIFI::connect_to_wifi()
{
    if (cyw43_arch_init()) {
        printf("Failed to initialize WiFi\n");
        return false;
    }

    cyw43_arch_enable_sta_mode();
    printf("Connecting to WiFi...\n");
    if (cyw43_arch_wifi_connect_blocking("SETUP-1D9B", "coast9460animal", CYW43_AUTH_WPA2_MIXED_PSK))
    {
        printf("Failed to connect to WiFi\n");
        return false;
    }

    printf("Connected to SETUP-1D9B!\n");
    return true;
}
