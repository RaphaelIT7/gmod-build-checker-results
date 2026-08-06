// Generated header

class CDecal : public CPointEntity
{
public:
	virtual ~CDecal() override; // vtable[0]
	virtual ~CDecal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void StaticDecal(); // size[119]
	void TriggerDecal(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4); // size[366]
	void InputActivate(inputdata_t *param_1); // size[51]
	void GetBaseMap(); // size[10]
	void ShouldHitEntity(IHandleEntity *param_1, intparam_2); // size[8]
};
