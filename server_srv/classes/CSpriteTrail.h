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
	void SetLifeTime(float param_1); // size[51]
	void SetStartWidth(float param_1); // size[51]
	void SetStartWidthVariance(float param_1); // size[51]
	void SetEndWidth(float param_1); // size[51]
	void SetTextureResolution(float param_1); // size[51]
	void SetMinFadeLength(float param_1); // size[51]
	void IsInSkybox(); // size[98]
	void SetSkybox(Vector *param_1, float param_2); // size[95]
	void SpriteTrailCreate(char *param_1, Vector *param_2, bool param_3); // size[82]
};
