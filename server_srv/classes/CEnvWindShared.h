// Generated header

class CEnvWindShared
{
public:
	virtual void NetworkStateChanged(); // vtable[0]
	virtual void NetworkStateChanged(void *param_1); // vtable[1]

	_GLOBAL__sub_I_CEnvWindShared(); // size[113]
	void UpdateWindSound(float param_1); // size[76]
	void UpdateTreeSway(float param_1); // size[5]
	CEnvWindShared(); // size[552]
	~CEnvWindShared(); // size[180]
	void Init(int param_1, int param_2, float param_3, int param_4, float param_5); // size[106]
	void ComputeWindVariation(double param_1); // size[178]
	void WindThink(float param_1); // size[546]
};
