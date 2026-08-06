// Generated header

class IDirect3D9 : public IUnknown
{
public:
	virtual ~IDirect3D9() override; // vtable[0]
	virtual ~IDirect3D9() override; // vtable[1]

	void GetAdapterCount(); // size[35]
	void GetDeviceCaps(uint param_1, _D3DDEVTYPE param_2, _D3DCAPS9 *param_3); // size[151]
	void GetAdapterIdentifier(uint param_1, uint param_2, _D3DADAPTER_IDENTIFIER9 *param_3); // size[627]
	void CheckDeviceFormat(uint param_1, _D3DDEVTYPE param_2, _D3DFORMAT param_3, uint param_4, _D3DRESOURCETYPE param_5, _D3DFORMAT param_6); // size[305]
	void GetAdapterModeCount(uint param_1, _D3DFORMAT param_2); // size[165]
	void EnumAdapterModes(uint param_1, _D3DFORMAT param_2, uint param_3, _D3DDISPLAYMODE *param_4); // size[236]
	void CheckDeviceType(uint param_1, _D3DDEVTYPE param_2, _D3DFORMAT param_3, _D3DFORMAT param_4, int param_5); // size[7]
	void GetAdapterDisplayMode(uint param_1, _D3DDISPLAYMODE *param_2); // size[238]
	void CheckDepthStencilMatch(uint param_1, _D3DDEVTYPE param_2, _D3DFORMAT param_3, _D3DFORMAT param_4, _D3DFORMAT param_5); // size[32]
	void CheckDeviceMultiSampleType(uint param_1, _D3DDEVTYPE param_2, _D3DFORMAT param_3, int param_4, _D3DMULTISAMPLE_TYPE param_5, uint *param_6); // size[277]
	void CreateDevice(uint param_1, _D3DDEVTYPE param_2, void *param_3, uint param_4, _D3DPRESENT_PARAMETERS_ *param_5, IDirect3DDevice9 * *param_6); // size[314]
};
