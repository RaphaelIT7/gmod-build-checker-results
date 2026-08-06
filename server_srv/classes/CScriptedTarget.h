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

	void GetBaseMap(); // size[0]
	void TurnOn(); // size[0]
	void InputEnable(); // size[0]
	void TurnOff(); // size[0]
	void InputDisable(); // size[0]
	void NextScriptedTarget(); // size[0]
	void FindEntity(); // size[0]
	void ScriptThink(); // size[0]
};
