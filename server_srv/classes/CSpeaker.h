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
	virtual void Save() override; // vtable[41]
	virtual void Restore() override; // vtable[42]
	virtual void GetResponseSystem() override; // vtable[53]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputTurnOn(); // size[0]
	void InputTurnOff(); // size[0]
	void InputToggle(); // size[0]
	void SpeakerThink(); // size[0]
	void GetBaseMap(); // size[0]
};
