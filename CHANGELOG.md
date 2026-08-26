# Changelog

## August 26, 2026

- Deprecated and archived the OneSignal C++ server SDK. It will receive no further feature, compatibility, or security updates.
- For C++ integrations, call the [OneSignal REST API](https://documentation.onesignal.com/reference) with [libcurl](https://curl.se/libcurl/) or migrate to the official [Go](https://github.com/OneSignal/onesignal-go-api) or [Rust](https://github.com/OneSignal/onesignal-rust-api) server SDK.

The SDK never progressed beyond beta distribution, and its cpprestsdk dependency is no longer maintained.