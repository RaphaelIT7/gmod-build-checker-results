// Generated header

class CAI_Spotlight : public CAI_Component
{
public:
	virtual ~CAI_Spotlight() override; // vtable[0]
	virtual ~CAI_Spotlight() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[7]
	CAI_Spotlight(); // size[68]
	void Precache(); // size[26]
	void Init(CAI_BaseNPC *param_1, intparam_2, floatparam_3, floatparam_4); // size[191]
	void ComputeEndpoint(Vector *param_1, Vector *param_2); // size[341]
	void SpotlightDestroy(); // size[110]
	void CreateSpotlightEntities(); // size[323]
	void SpotlightCreate(intparam_1, Vector *param_2); // size[234]
	void SetSpotlightTargetPos(Vector *param_1); // size[40]
	void SetSpotlightTargetDirection(Vector *param_1); // size[202]
	void ConstrainToCone(Vector *param_1); // size[1017]
	void UpdateSpotlightDirection(); // size[1400]
	void UpdateSpotlightEndpoint(); // size[556]
	void Update(); // size[83]
};
