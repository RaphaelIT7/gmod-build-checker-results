// Generated header

class CSpriteTrail : public CSprite
{
public:
	virtual ~CSpriteTrail() override; // vtable[0]
	virtual ~CSpriteTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	CSpriteTrail(); // size[172]
	void SetLifeTime(floatparam_1); // size[51]
	void SetStartWidth(floatparam_1); // size[51]
	void SetStartWidthVariance(floatparam_1); // size[51]
	void SetEndWidth(floatparam_1); // size[51]
	void SetTextureResolution(floatparam_1); // size[51]
	void SetMinFadeLength(floatparam_1); // size[51]
	void IsInSkybox(); // size[98]
	void SetSkybox(Vector *param_1, floatparam_2); // size[95]
	void SpriteTrailCreate(char *param_1, Vector *param_2, boolparam_3); // size[82]
};
