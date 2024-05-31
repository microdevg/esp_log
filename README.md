## Prueba de la api de LOG

Para utilizar la funcionalidad de LOG en sus diferentes niveles debemos incluir 
```
#define LOG_LOCAL_LEVEL      ESP_LOG_ERROR   //  ESP_LOG_ERROR  , ESP_LOG_VERBOSE
#include "esp_log.h"
```
Donde en caso de no definir LOG_LOCAL_LEVEL su valor es `ESP_LOG_VERBOSE`. Los distintos niveles son:
```
typedef enum {
    ESP_LOG_NONE,      // Sin Logs
    ESP_LOG_ERROR,     // Errores críticos, el sistema no se recupera.
    ESP_LOG_WARN,      // Condición de error, el sistema puede recuperarse.
    ESP_LOG_INFO,      // Mensaje del tipo informativo
    ESP_LOG_DEBUG,     // Mensajes de debug
    ESP_LOG_VERBOSE    // Mensaje de debug profundo
} esp_log_level_t;

``` 


Si quiero tener solo los log de error y advertencias, poner 
`#define LOG_LOCAL_LEVEL ESP_LOG_WARN `

Para realizar una impresion utilizamos los siguientes macros:
```
static const char* TAG = "testLog";

 ESP_LOGE(TAG,"mensaje de prueba\n");
 ESP_LOGW(TAG,"mensaje de prueba\n");
 ESP_LOGI(TAG,"mensaje de prueba\n");
 ESP_LOGD(TAG,"mensaje de prueba\n");
 ESP_LOGV(TAG,"mensaje de prueba\n");

```
donde TAG es el tópico del mensaje.