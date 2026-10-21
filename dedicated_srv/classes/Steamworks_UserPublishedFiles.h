// Generated header
// Estimated minimum size: 0x3C (60) bytes

class Steamworks_UserPublishedFiles
{
public:
	virtual void _ZN10Steamworks18UserPublishedFiles6FinishEv(); // vtable[0]
	virtual void GetMoreFiles(); // vtable[1]

	void OnReceiveFileDetails(SteamUGCQueryCompleted_t *param_1, bool param_2); // size[242]
	UserPublishedFiles(); // size[67]
	~UserPublishedFiles(); // size[105]
	void Refresh(); // size[148]
	void Ready(); // size[24]
	void GetCurrentAmount(); // size[11]
	void OnReceiveFileDetails(SteamUGCQueryCompleted_t *param_1, bool param_2); // size[688]
};
