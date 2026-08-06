// Generated header

class CTankTrainAI : public CPointEntity
{
public:
	virtual ~CTankTrainAI() override; // vtable[0]
	virtual ~CTankTrainAI() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void SoundEngineStop(); // size[15]
	void InputTargetEntity(inputdata_t *param_1); // size[168]
	void GetBaseMap(); // size[10]
	void FindTarget(string_t param_1, CBaseEntity *param_2); // size[67]
	void SoundEnginePitch(); // size[134]
	void SoundEngineStop(); // size[24]
	void SoundShutdown(); // size[16]
	void SoundEngineStart(); // size[15]
};
