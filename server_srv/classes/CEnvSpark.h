// Generated header

class CEnvSpark : public CPointEntity
{
public:
	virtual ~CEnvSpark() override; // vtable[0]
	virtual ~CEnvSpark() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void SparkThink(); // size[0]
	void InputSparkOnce(); // size[0]
	void GetBaseMap(); // size[0]
	CEnvSpark(); // size[0]
	void StartSpark(); // size[0]
	void InputStartSpark(); // size[0]
	void StopSpark(); // size[0]
	void InputStopSpark(); // size[0]
	void InputToggleSpark(); // size[0]
};
