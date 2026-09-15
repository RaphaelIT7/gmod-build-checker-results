// Generated header

class CGrenadeBeamChaser : public CBaseAnimating
{
public:
	virtual ~CGrenadeBeamChaser() override; // vtable[0]
	virtual ~CGrenadeBeamChaser() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void ChaserCreate(CGrenadeBeam *param_1); // size[76]
	void ChaserThink(); // size[659]
};
