["CAManBase", "HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo"];
	if (acre_radiodamage_prc117 == 0) exitWith {};
	_hasRadio = [_target, "ACRE_PRC117F"] call acre_api_fnc_hasKindOfRadio;
	_selectionName = _selection select 0;
	if ((_selectionName == "spine" or _selectionName == "spine1" or _selectionName == "spine2" or _selectionName == "spine3") && _hasRadio) then {
		_radioIds = ["ACRE_PRC117F", _target] call acre_api_fnc_getAllRadiosByType;
		{
			_chance = round(random 100);
			if (_chance < acre_radiodamage_prc117) then
			{
				if (toUpper(_radioIds select _forEachIndex) in uniformItems _target) then
				{
					_target removeItem (_radioIds select _forEachIndex);
					_target addItemToUniform "ACRE_PRC117F_DAMAGED";
				};
				if (toUpper(_radioIds select _forEachIndex) in vestItems _target) then
				{
					_target removeItem (_radioIds select _forEachIndex);
					_target addItemToVest "ACRE_PRC117F_DAMAGED";
				};
				if (toUpper(_radioIds select _forEachIndex) in backpackItems _target) then
				{
					_target removeItem (_radioIds select _forEachIndex);
					_target addItemToBackpack "ACRE_PRC117F_DAMAGED";
				};
			};
		} forEach _radioIds;
	};
}] call CBA_fnc_addClassEventHandler;