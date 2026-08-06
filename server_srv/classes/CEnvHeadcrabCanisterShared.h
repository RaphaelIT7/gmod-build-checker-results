// Generated header

class CEnvHeadcrabCanisterShared
{
public:
	virtual void NetworkStateChanged(); // vtable[0]
	virtual void NetworkStateChanged(void *param_1); // vtable[1]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[7]
	CEnvHeadcrabCanisterShared(); // size[238]
	void InitInWorld(double param_1, Vector *param_2, QAngle *param_3, Vector *param_4, Vector *param_5, bool param_6); // size[298]
	void InitInSkybox(double param_1, Vector *param_2, QAngle *param_3, Vector *param_4, Vector *param_5, Vector *param_6, float param_7); // size[431]
	void ConvertFromSkyboxToWorld(); // size[41]
	void GetEnterWorldTime(); // size[24]
	void DidImpact(double param_1); // size[33]
	void GetPositionAtTime(double param_1, Vector *param_2, QAngle *param_3); // size[737]
	void IsInSkybox(); // size[12]
	void CalcEnterTime(Vector *param_1, Vector *param_2); // size[5]
};
