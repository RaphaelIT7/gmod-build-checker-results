// Generated header

class CAI_LookTarget : public CPointEntity
{
public:
	virtual ~CAI_LookTarget() override; // vtable[0]
	virtual ~CAI_LookTarget() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void IsEligible(CBaseEntity *param_1); // size[245]
	void Reserve(float param_1); // size[59]
	void GetFirstLookTarget(); // size[101]
	void GetNextLookTarget(CAI_LookTarget *param_1); // size[101]
};
