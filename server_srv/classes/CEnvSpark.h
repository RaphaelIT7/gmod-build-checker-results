// Generated header

class CEnvSpark : public CPointEntity
{
public:
	virtual ~CEnvSpark() override; // vtable[0]
	virtual ~CEnvSpark() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void SparkThink(); // size[306]
	void InputSparkOnce(inputdata_t *param_1); // size[54]
	void GetBaseMap(); // size[10]
	CEnvSpark(); // size[26]
	void StartSpark(); // size[59]
	void InputStartSpark(inputdata_t *param_1); // size[9]
	void StopSpark(); // size[58]
	void InputStopSpark(inputdata_t *param_1); // size[9]
	void InputToggleSpark(inputdata_t *param_1); // size[69]
};
