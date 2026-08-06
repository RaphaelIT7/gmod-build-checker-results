// Generated header

class CEnvSoundscapeTriggerable : public CEnvSoundscape
{
public:
	virtual ~CEnvSoundscapeTriggerable() override; // vtable[0]
	virtual ~CEnvSoundscapeTriggerable() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Think() override; // vtable[48]

	void GetBaseMap(); // size[10]
	CEnvSoundscapeTriggerable(); // size[30]
	void DelegateEndTouch(CBaseEntity *param_1); // size[61]
	void DelegateStartTouch(CBaseEntity *param_1); // size[63]
};
