///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Tavendo GmbH
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

namespace autobahn {

inline std::string to_string(message_type type)
{
    static std::map<message_type, std::string> type_names = {
        { message_type::HELLO, "hello" },
        { message_type::WELCOME, "welcome" },
        { message_type::ABORT, "abort" },
        { message_type::CHALLENGE, "challenge" },
        { message_type::AUTHENTICATE, "authenticate" },
        { message_type::GOODBYE, "goodbye" },
        { message_type::HEARTBEAT, "heartbeat" },
        { message_type::ERROR, "error" },
        { message_type::PUBLISH, "publish" },
        { message_type::PUBLISHED, "published" },
        { message_type::SUBSCRIBE, "subscribe" },
        { message_type::SUBSCRIBED, "subscribed" },
        { message_type::UNSUBSCRIBE, "unsubscribe" },
        { message_type::UNSUBSCRIBED, "unsubscribed" },
        { message_type::EVENT, "event" },
        { message_type::CALL, "call" },
        { message_type::CANCEL, "cancel" },
        { message_type::RESULT, "result" },
        { message_type::REGISTER, "register" },
        { message_type::REGISTERED, "registered" },
        { message_type::UNREGISTER, "unregister" },
        { message_type::UNREGISTERED, "unregistered" },
        { message_type::INVOCATION, "invocation" },
        { message_type::INTERRUPT, "interrupt" },
        { message_type::YIELD, "yield" }
    };

    auto result = type_names.find(type);
    if (result == type_names.end()) {
        return std::string("unknown");
    }

    return result->second;
}

} // namespace autobahn