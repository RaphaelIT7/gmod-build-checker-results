// Generated header
// Estimated minimum size: 0x14E0 (5344) bytes

class CTriggerMultiple : public CBaseTrigger
{
public:
	virtual ~CTriggerMultiple() override; // vtable[0]
	virtual ~CTriggerMultiple() override; // vtable[1]
	virtual void _ZN16CTriggerMultiple14GetDataDescMapEv() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void GetBaseMap(); // size[10]
	void ActivateMultiTrigger(CBaseEntity *param_1); // size[269]
	void MultiTouch(CBaseEntity *param_1); // size[57]
};
