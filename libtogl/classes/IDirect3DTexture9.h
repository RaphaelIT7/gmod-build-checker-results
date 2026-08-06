// Generated header

class IDirect3DTexture9 : public IDirect3DBaseTexture9
{
public:
	virtual ~IDirect3DTexture9() override; // vtable[0]
	virtual ~IDirect3DTexture9() override; // vtable[1]

	void LockRect(uint param_1, _D3DLOCKED_RECT *param_2, _RECT *param_3, uint param_4); // size[54]
	void UnlockRect(uint param_1); // size[54]
	void GetSurfaceLevel(uint param_1, IDirect3DSurface9 * *param_2); // size[203]
};
