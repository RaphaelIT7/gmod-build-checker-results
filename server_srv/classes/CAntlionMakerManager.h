// Generated header
// Estimated minimum size: 0x20 (32) bytes, no debug info available

class CAntlionMakerManager : public CAutoGameSystem
{
public:
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CAntlionMakerManager() override; // vtable[13]
	virtual ~CAntlionMakerManager() override; // vtable[14]

	void BroadcastFightGoal(Vector *param_1); // size[144]
	void BroadcastFightGoal(CBaseEntity *param_1); // size[158]
	void BroadcastFollowGoal(CBaseEntity *param_1); // size[208]
	void GatherMakers(); // size[192]
};
