#ifdef CIMGUI_USE_DX11

typedef struct ID3D11Device ID3D11Device;
typedef struct ID3D11DeviceContext ID3D11DeviceContext;
struct ID3D11Device;
struct ID3D11DeviceContext;
CIMGUI_API bool ImGui_ImplDX11_Init(ID3D11Device* device,ID3D11DeviceContext* device_context);
CIMGUI_API void ImGui_ImplDX11_Shutdown(void);
CIMGUI_API void ImGui_ImplDX11_NewFrame(void);
CIMGUI_API void ImGui_ImplDX11_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API void ImGui_ImplDX11_InvalidateDeviceObjects(void);
CIMGUI_API bool ImGui_ImplDX11_CreateDeviceObjects(void);

#endif
