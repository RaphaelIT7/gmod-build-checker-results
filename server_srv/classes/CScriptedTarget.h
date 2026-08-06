// Generated header

class CScriptedTarget : public CAI_BaseNPC
{
public:
	virtual ~CScriptedTarget() override; // vtable[0]
	virtual ~CScriptedTarget() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void GetBaseMap(); // size[10]
	void TurnOn(); // size[82]
	void InputEnable(inputdata_t *param_1); // size[9]
	void TurnOff(); // size[59]
	void InputDisable(inputdata_t *param_1); // size[9]
	void NextScriptedTarget(); // size[287]
	void FindEntity(); // size[233]
	void ScriptThink(); // size[133]
};
