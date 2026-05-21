#ifndef USER_CONFIG_OVERRIDE_H
#define USER_CONFIG_OVERRIDE_H

#undef USE_SML        // ❗ GANZ WICHTIG (schaltet alte SML AUS)

#define USE_SML_M     // neue SML
#define USE_BERRY
#define USE_UFILESYS
#define USE_ETHERNET
#define USE_MQTT

#define FRIENDLY_NAME "SML-WT32"

#endif
