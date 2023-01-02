
struct ID3D11Device;
struct ID3D11DeviceContext;
 bool     ImGui_ImplDX11_Init(ID3D11Device* device, ID3D11DeviceContext* device_context);
 void     ImGui_ImplDX11_Shutdown();
 void     ImGui_ImplDX11_NewFrame();
 void     ImGui_ImplDX11_RenderDrawData(ImDrawData* draw_data);
 void     ImGui_ImplDX11_InvalidateDeviceObjects();
 bool     ImGui_ImplDX11_CreateDeviceObjects();