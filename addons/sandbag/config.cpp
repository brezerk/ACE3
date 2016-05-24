#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Item_Sandbag", "ACE_Item_Sandbag_empty"};
        weapons[] = {"ACE_Sandbag", "ACE_Sandbag_empty"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author[] = {"Rocko", "Ruthberg"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
class ACE_newEvents {
    medical_onUnconscious = "ace_medical_onUnconscious";
    playerVehicleChanged = "ace_playerVehicleChanged";
    playerInventoryChanged = "ace_playerInventoryChanged";
    playerChanged = "ace_playerChanged";
    interactMenuOpened = "ace_interactMenuOpened";
    enableSimulationGlobal = "ace_enableSimulationGlobal";
};
