// Generated header

class CRagdollBoogie : public CBaseEntity
{
public:
	virtual ~CRagdollBoogie() override; // vtable[0]
	virtual ~CRagdollBoogie() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void ZapThink(); // size[877]
	void BoogieThink(); // size[105]
	void GetBaseMap(); // size[10]
	void IncrementSuppressionCount(CBaseEntity *param_1); // size[99]
	void DecrementSuppressionCount(CBaseEntity *param_1); // size[139]
	void AttachToEntity(CBaseEntity *param_1); // size[174]
	void Create(CBaseEntity *param_1, float param_2, float param_3, float param_4, int param_5); // size[62]
	void SetBoogieTime(float param_1, float param_2); // size[34]
	void SetMagnitude(float param_1); // size[21]
};
