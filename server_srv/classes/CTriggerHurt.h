// Generated header

class CTriggerHurt : public CBaseTrigger
{
public:
	virtual ~CTriggerHurt() override; // vtable[0]
	virtual ~CTriggerHurt() override; // vtable[1]
	virtual void _ZN12CTriggerHurt14GetDataDescMapEv() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void Touch() override; // vtable[102]
	virtual void EndTouch() override; // vtable[103]

	void GetBaseMap(); // size[0]
	void HurtEntity(); // size[0]
	void HurtAllTouchers(); // size[0]
	void RadiationThink(); // size[0]
	void HurtThink(); // size[0]
};
