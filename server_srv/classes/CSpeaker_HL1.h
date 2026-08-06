// Generated header

class CSpeaker_HL1 : public CPointEntity
{
public:
	virtual ~CSpeaker_HL1() override; // vtable[0]
	virtual ~CSpeaker_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void ToggleUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[180]
	void SpeakerThink(); // size[657]
	void GetBaseMap(); // size[10]
};
