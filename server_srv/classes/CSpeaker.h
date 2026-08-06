// Generated header

class CSpeaker : public CPointEntity
{
public:
	virtual ~CSpeaker() override; // vtable[0]
	virtual ~CSpeaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Save(ISave *param_1) override; // vtable[41]
	virtual void Restore(IRestore *param_1) override; // vtable[42]
	virtual void GetResponseSystem() override; // vtable[53]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputTurnOn(inputdata_t *param_1); // size[51]
	void InputTurnOff(inputdata_t *param_1); // size[41]
	void InputToggle(inputdata_t *param_1); // size[118]
	void SpeakerThink(); // size[551]
	void GetBaseMap(); // size[10]
};
