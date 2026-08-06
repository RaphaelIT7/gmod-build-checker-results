// Generated header

class CEffectsServer : public IEffects
{
public:
	virtual ~CEffectsServer() override; // vtable[0]
	virtual ~CEffectsServer() override; // vtable[1]
	virtual void Beam(Vector *param_1, Vector *param_2, intparam_3, intparam_4, ucharparam_5, ucharparam_6, floatparam_7, ucharparam_8, ucharparam_9, ucharparam_10, ucharparam_11, ucharparam_12, ucharparam_13, ucharparam_14, ucharparam_15, ucharparam_16); // vtable[2]
	virtual void Smoke(Vector *param_1, intparam_2, floatparam_3, floatparam_4); // vtable[3]
	virtual void Sparks(Vector *param_1, intparam_2, intparam_3, Vector *param_4); // vtable[4]
	virtual void Dust(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4); // vtable[5]
	virtual void MuzzleFlash(Vector *param_1, QAngle *param_2, floatparam_3, intparam_4); // vtable[6]
	virtual void MetalSparks(Vector *param_1, Vector *param_2); // vtable[7]
	virtual void EnergySplash(Vector *param_1, Vector *param_2, boolparam_3); // vtable[8]
	virtual void Ricochet(Vector *param_1, Vector *param_2); // vtable[9]
	virtual void Time(); // vtable[10]
	virtual void IsServer(); // vtable[11]
	virtual void SuppressEffectsSounds(boolparam_1) override; // vtable[12]

	CEffectsServer(); // size[52]
};
