// Generated header

class CAI_Spotlight : public CAI_Component
{
public:
	virtual void ~CAI_Spotlight() override; // vtable[0]
	virtual void ~CAI_Spotlight() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void CAI_Spotlight();
	void Precache();
	void Init();
	void ComputeEndpoint();
	void SpotlightDestroy();
	void CreateSpotlightEntities();
	void SpotlightCreate();
	void SetSpotlightTargetPos();
	void SetSpotlightTargetDirection();
	void ConstrainToCone();
	void UpdateSpotlightDirection();
	void UpdateSpotlightEndpoint();
	void Update();
};
