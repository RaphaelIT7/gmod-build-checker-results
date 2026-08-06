// Generated header

class CMultiSource : public CLogicalEntity
{
public:
	virtual ~CMultiSource() override; // vtable[0]
	virtual ~CMultiSource() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void IsTriggered(CBaseEntity *param_1) override; // vtable[71]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void Register(); // size[88]
	void GetBaseMap(); // size[10]
};
