#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_weather"};
        author[] = {ECSTRING(common,ACETeam), "Glowbal", "Ruthberg"};
        authorUrl = "http://ace3mod.com/";
        VERSION_CONFIG;
    };
};

class CfgAddons {
    class PreloadAddons {
       class ADDON {
          list[] = {QUOTE(ADDON)};
       };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Settings.hpp"

class ACE_newEvents {
    SettingsInitialized = "ace_settingsInitialized";
    firedPlayerVehicleNonLocal = "ace_firedPlayerVehicleNonLocal";
    firedPlayerVehicle = "ace_firedPlayerVehicle";
    firedPlayerNonLocal = "ace_firedPlayerNonLocal";
    firedPlayer = "ace_firedPlayer";
};
