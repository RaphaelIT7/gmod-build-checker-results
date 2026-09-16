// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class DustTrail : public CBaseParticleEntity
{
public:
	virtual ~DustTrail() override; // vtable[0]
	virtual ~DustTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void GetBaseMap(); // size[10]
	DustTrail(); // size[228]
	void SetEmit(bool param_1); // size[65]
	void CreateDustTrail(); // size[77]
};
