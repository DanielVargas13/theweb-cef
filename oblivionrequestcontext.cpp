#include "oblivionrequestcontext.h"

OblivionRequestContextHandler::OblivionRequestContextHandler() {
    cookieManager = CefCookieManager::CreateManager("", false, NULL);
}

void OblivionRequestContextHandler::AddRef() const {
    CefRefCount::AddRef();
}

bool OblivionRequestContextHandler::Release() const {
    return CefRefCount::Release();
}

bool OblivionRequestContextHandler::HasOneRef() const {
    return CefRefCount::HasOneRef();
}
