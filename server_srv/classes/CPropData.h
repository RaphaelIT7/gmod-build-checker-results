// Generated header

class CPropData : public CAutoGameSystem
{
public:
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CPropData() override; // vtable[13]
	virtual ~CPropData() override; // vtable[14]

	void GetRandomChunkModel(char *param_1, int param_2); // size[138]
	CPropData(); // size[84]
	void ParsePropFromBase(CBaseEntity *param_1, char *param_2); // size[93]
	void ParsePropFromKV(CBaseEntity *param_1, KeyValues *param_2, KeyValues *param_3); // size[65]
	void GetRandomChunkModel(char *param_1, int param_2); // size[31]
	void ParsePropDataFile(); // size[392]
};
