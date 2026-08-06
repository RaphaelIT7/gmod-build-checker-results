// Generated header

class CBaseProp : public CBaseAnimating
{
public:
	virtual ~CBaseProp() override; // vtable[0]
	virtual ~CBaseProp() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void IsAlive() override; // vtable[67]
	virtual void OverridePropdata(); // vtable[282]

	void CalculateBlockLOS(); // size[182]
	void ParsePropData(); // size[60]
};
