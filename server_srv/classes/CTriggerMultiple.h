// Generated header
// Estimated minimum size: 0x14E0 (5344) bytes

class CTriggerMultiple : public CBaseTrigger
{
public:
	virtual ~CTriggerMultiple() override; // vtable[0]
	virtual ~CTriggerMultiple() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void MultiWaitOver(); // size[58]
	void GetBaseMap(); // size[10]
	void ActivateMultiTrigger(CBaseEntity *param_1); // size[173]
	void MultiTouch(CBaseEntity *param_1); // size[29]
};
