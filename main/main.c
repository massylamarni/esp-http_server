#include "esp_wifi.h"
#include "nvs_flash.h"

#include "wifi_app.h"

//#define adr_gen_n_alea 0x3ff75144

extern void register_ethernet(void);

void app_main(void) {
    //Init NVS (Non Volatile Storage)
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    //wifi_app_start();
    register_ethernet();
}
