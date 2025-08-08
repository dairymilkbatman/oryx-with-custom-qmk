#define ONESHOT_TIMEOUT 5000

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 240000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "VRA4J/m5Owvm"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 2
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60
