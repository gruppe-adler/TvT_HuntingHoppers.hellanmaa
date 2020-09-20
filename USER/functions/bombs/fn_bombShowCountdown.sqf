 [{

    params ["_args", "_handle"];

    if (!alive player) then {

        // handled in waverespawn hint

    } else {
            
        if (side player == east) then {
            private _countdown = missionNamespace getVariable ["hoppers_countdown", -1];

            if (_countdown < 0) exitWith {
                [_handle] call CBA_fnc_removePerFrameHandler;
            };
            private _string = "Bomb can be detonated in " + str _countdown + " s";
            hintSilent _string;
        };
    };

}, 1, []] call CBA_fnc_addPerFrameHandler;