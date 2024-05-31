#include <stdio.h>
#define LOG_LOCAL_LEVEL      ESP_LOG_ERROR   //  ESP_LOG_ERROR  , ESP_LOG_VERBOSE
#include "esp_log.h"



#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char* TAG = "testLog";


void app_main(void)
{
    printf("Inicio la prueba de las funciones de log\n");

    while(1){
    ESP_LOGE(TAG,"mensaje de prueba\n");

    ESP_LOGW(TAG,"mensaje de prueba\n");

    ESP_LOGI(TAG,"mensaje de prueba\n");

    ESP_LOGD(TAG,"mensaje de prueba\n");

    ESP_LOGV(TAG,"mensaje de prueba\n");
    vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}