#include "script_component.hpp"
/*
 * Author: Glowbal
 * Local callback for applying a tourniquet to a patient.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "LeftLeg"] call ace_medical_treatment_fnc_tourniquetLocal
 *
 * Public: No
 */

params ["_patient", "_bodyPart"];

private _partIndex = ALL_BODY_PARTS find toLower _bodyPart;

private _tourniquets = GET_TOURNIQUETS(_patient);
_tourniquets set [_partIndex, CBA_missionTime];
_patient setVariable [VAR_TOURNIQUET, _tourniquets, true];