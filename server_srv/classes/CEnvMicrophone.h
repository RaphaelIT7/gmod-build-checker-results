// Generated header

class CEnvMicrophone : public CPointEntity
{
public:
	virtual ~CEnvMicrophone() override; // vtable[0]
	virtual ~CEnvMicrophone() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void CanHearSound(CSound *param_1, float *param_2); // size[540]
	void CanHearSound(intparam_1, soundlevel_tparam_2, float *param_3, Vector *param_4); // size[722]
	void SetSensitivity(floatparam_1); // size[21]
	void InputDisable(inputdata_t *param_1); // size[184]
	void ActivateSpeaker(); // size[350]
	void InputEnable(inputdata_t *param_1); // size[72]
	void SetSpeakerName(string_tparam_1); // size[31]
	void InputSetSpeakerName(inputdata_t *param_1); // size[45]
	void SoundPlayed(intparam_1, char *param_2, soundlevel_tparam_3, floatparam_4, intparam_5, intparam_6, Vector *param_7, doubleparam_8, CUtlVector *param_9); // size[584]
	void OnSoundPlayed(intparam_1, char *param_2, soundlevel_tparam_3, floatparam_4, intparam_5, intparam_6, Vector *param_7, doubleparam_8, CUtlVector *param_9); // size[305]
};
