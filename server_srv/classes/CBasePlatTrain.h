// Generated header

class CBasePlatTrain : public CBaseToggle
{
public:
	virtual ~CBasePlatTrain() override; // vtable[0]
	virtual ~CBasePlatTrain() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void IsTogglePlat(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void StopMovingSound(); // size[31]
	void PlayMovingSound(); // size[47]
};
