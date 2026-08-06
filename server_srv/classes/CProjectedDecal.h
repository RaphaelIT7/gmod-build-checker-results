// Generated header

class CProjectedDecal : public CPointEntity
{
public:
	virtual ~CProjectedDecal() override; // vtable[0]
	virtual ~CProjectedDecal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[10]
	void ProjectDecal(CRecipientFilter *param_1); // size[119]
	void TriggerDecal(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4); // size[22]
	void InputActivate(inputdata_t *param_1); // size[51]
	void StaticDecal(); // size[22]
};
