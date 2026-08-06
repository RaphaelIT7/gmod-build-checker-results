// Generated header

class IDirect3DVolumeTexture9 : public IDirect3DBaseTexture9
{
public:
	virtual ~IDirect3DVolumeTexture9() override; // vtable[0]
	virtual ~IDirect3DVolumeTexture9() override; // vtable[1]

	void LockBox(uintparam_1, _D3DLOCKED_BOX *param_2, _D3DBOX *param_3, uintparam_4); // size[136]
	void UnlockBox(uintparam_1); // size[56]
	void GetLevelDesc(uintparam_1, _D3DVOLUME_DESC *param_2); // size[193]
};
