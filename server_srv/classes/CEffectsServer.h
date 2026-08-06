// Generated header

class CEffectsServer : public IEffects
{
public:
	virtual ~CEffectsServer() override; // vtable[0]
	virtual ~CEffectsServer() override; // vtable[1]
	virtual void Beam(Vector *param_1, Vector *param_2, int param_3, int param_4, uchar param_5, uchar param_6, float param_7, uchar param_8, uchar param_9, uchar param_10, uchar param_11, uchar param_12, uchar param_13, uchar param_14, uchar param_15, uchar param_16); // vtable[2]
	virtual void Smoke(Vector *param_1, int param_2, float param_3, float param_4); // vtable[3]
	virtual void Sparks(Vector *param_1, int param_2, int param_3, Vector *param_4); // vtable[4]
	virtual void Dust(Vector *param_1, Vector *param_2, float param_3, float param_4); // vtable[5]
	virtual void MuzzleFlash(Vector *param_1, QAngle *param_2, float param_3, int param_4); // vtable[6]
	virtual void MetalSparks(Vector *param_1, Vector *param_2); // vtable[7]
	virtual void EnergySplash(Vector *param_1, Vector *param_2, bool param_3); // vtable[8]
	virtual void Ricochet(Vector *param_1, Vector *param_2); // vtable[9]
	virtual void Time(); // vtable[10]
	virtual void IsServer(); // vtable[11]
	virtual void SuppressEffectsSounds(bool param_1) override; // vtable[12]

	CEffectsServer(); // size[52]
};
