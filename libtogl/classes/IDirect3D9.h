// Generated header

class IDirect3D9 : public IUnknown
{
public:
	virtual void ~IDirect3D9() override; // vtable[0]
	virtual void ~IDirect3D9() override; // vtable[1]

	void GetAdapterCount();
	void GetDeviceCaps();
	void GetAdapterIdentifier();
	void CheckDeviceFormat();
	void GetAdapterModeCount();
	void EnumAdapterModes();
	void CheckDeviceType();
	void GetAdapterDisplayMode();
	void CheckDepthStencilMatch();
	void CheckDeviceMultiSampleType();
	void CreateDevice();
};
