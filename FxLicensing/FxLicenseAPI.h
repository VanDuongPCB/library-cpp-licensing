#pragma once

#ifdef FxLicensing_EXPORTS
#define FX_LICENSING_API __declspec(dllexport)
#else
#define FX_LICENSING_API __declspec(dllimport)
#endif // FxCommonUI_EXPORTS
