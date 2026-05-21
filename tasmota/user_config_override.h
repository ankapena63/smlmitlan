#ifndef USER_CONFIG_OVERRIDE_H
#define USER_CONFIG_OVERRIDE_H

// ❗ Konflikt lösen
#ifdef USE_RULES
#undef USE_RULES
#endif

// ✅ SML + Script
#define USE_SCRIPT
#define USE_SML

// ✅ optional
#define USE_ETHERNET
#define USE_MQTT
#define USE_BERRY

#define FRIENDLY_NAME "SML-WT32"

#endif
