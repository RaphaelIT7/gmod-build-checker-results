// Generated header

class CWaterLODControl : public CBaseEntity
{
public:
	virtual ~CWaterLODControl() override; // vtable[0]
	virtual ~CWaterLODControl() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	CWaterLODControl(); // size[28]
	void SetCheapWaterStartDistance(inputdata_t *param_1); // size[63]
	void SetCheapWaterEndDistance(inputdata_t *param_1); // size[63]
};
