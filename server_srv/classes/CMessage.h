// Generated header

class CMessage : public CPointEntity
{
public:
	virtual ~CMessage() override; // vtable[0]
	virtual ~CMessage() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void InputShowMessage(inputdata_t *param_1); // size[306]
};
