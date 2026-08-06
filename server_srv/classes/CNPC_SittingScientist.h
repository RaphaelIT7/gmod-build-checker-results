// Generated header

class CNPC_SittingScientist : public CNPC_Scientist
{
public:
	virtual ~CNPC_SittingScientist() override; // vtable[0]
	virtual ~CNPC_SittingScientist() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SetAnswerQuestion(CNPCSimpleTalker *param_1) override; // vtable[731]
	virtual void FriendNumber(intparam_1) override; // vtable[732]

	void SittingThink(); // size[420]
	void GetBaseMap(); // size[10]
};
