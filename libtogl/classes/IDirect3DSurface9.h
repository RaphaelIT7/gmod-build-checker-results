// Generated header

class IDirect3DSurface9 : public IDirect3DResource9
{
public:
	virtual ~IDirect3DSurface9() override; // vtable[0]
	virtual ~IDirect3DSurface9() override; // vtable[1]

	void LockRect(_D3DLOCKED_RECT *param_1, _RECT *param_2, uint param_3); // size[144]
	void UnlockRect(); // size[64]
	void GetDesc(_D3DSURFACE_DESC *param_1); // size[60]
};
