// Generated header

class CAI_ScriptedSentence : public CPointEntity
{
public:
	virtual ~CAI_ScriptedSentence() override; // vtable[0]
	virtual ~CAI_ScriptedSentence() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void DelayThink(); // size[0]
	void InputBeginSentence(); // size[0]
	void GetBaseMap(); // size[0]
	void AcceptableSpeaker(); // size[0]
	void FindEntity(); // size[0]
	void StartSentence(); // size[0]
	void FindThink(); // size[0]
};
