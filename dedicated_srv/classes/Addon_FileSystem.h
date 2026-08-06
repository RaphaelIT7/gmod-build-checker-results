// Generated header

class Addon_FileSystem : public IAddonSystem
{
public:
	virtual void Clear(); // vtable[0]
	virtual void Refresh(); // vtable[1]
	virtual void MountFile(); // vtable[2]
	virtual void ShouldMount(); // vtable[3]
	virtual void SetShouldMount(); // vtable[4]
	virtual void Save(); // vtable[5]
	virtual void GetList(); // vtable[6]
	virtual void GetUGCList(); // vtable[7]
	virtual void ScanForSubscriptions(); // vtable[8]
	virtual void Think(); // vtable[9]
	virtual void SetDownloadNotify(); // vtable[10]
	virtual void Notify(); // vtable[11]
	virtual void IsSubscribed(); // vtable[12]
	virtual void FindFileOwner(); // vtable[13]
	virtual void AddAddon(); // vtable[14]
	virtual void ClearUnusedGMAs(); // vtable[15]
	virtual void GetAddonFilepath(); // vtable[16]
	virtual void UnmountAddon(); // vtable[17]
	virtual void UnmountServerAddons(); // vtable[18]
	virtual void IsAddonValidPreInstall() override; // vtable[19]
	virtual void Shutdown(); // vtable[20]
	virtual void AddJob(); // vtable[21]
	virtual void GetSubList(); // vtable[22]
	virtual void MountFloatingAddons(); // vtable[23]
	virtual void AddAddonFromSteamDetails(); // vtable[24]
	virtual void OnAddonSubscribed(); // vtable[25]
	virtual void AddUnloadedSubscription(); // vtable[26]
	virtual void EnableLoadingUnloadedAddons(); // vtable[27]
	virtual void HasChanges(); // vtable[28]
	virtual void MarkChanged(); // vtable[29]
	virtual void OnAddonDownloaded(); // vtable[30]
	virtual void OnAddonDownloadFailed(); // vtable[31]
	virtual void Load(); // vtable[32]

	void UpdateModPath();
	void IsOfflineMode();
	void OnRemoteStoragePublishedFileSubscribed();
	void GetAddonType();
	void NormalizePath();
	void SendUGCListUpdate();
	void AddUGCFile();
	void FileSystem();
	void ~FileSystem();
	void UnmountPackFile();
	void UnmountFile();
	void OnRemoteStoragePublishedFileUnsubscribed();
	void GetFolder();
	void CreateEmptyParentFolders();
	void FindFirst();
	void FindInAddon();
	void IsDirectory();
	void GetFile();
	void ResolveFile();
	void GetFileSize();
	void GetFileEntry();
	void MountAddon();
};
