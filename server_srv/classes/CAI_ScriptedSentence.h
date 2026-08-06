// Generated header

class CAI_ScriptedSentence : public CPointEntity
{
public:
	virtual ~CAI_ScriptedSentence() override; // vtable[0]
	virtual ~CAI_ScriptedSentence() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void DelayThink(); // size[116]
	void InputBeginSentence(inputdata_t *param_1); // size[110]
	void GetBaseMap(); // size[10]
	void AcceptableSpeaker(CAI_BaseNPC *param_1); // size[133]
	void FindEntity(); // size[381]
	void StartSentence(CAI_BaseNPC *param_1); // size[480]
	void FindThink(); // size[162]
};
