

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonProposalProject.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommonProposalProject_1738084540_hpp
#define CommonProposalProject_1738084540_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

static const std::string SEND_ACTION_TOPIC = "SendAction";

static const std::string RECIEVE_ACTION_TOPIC = "RecieveAction";

class NDDSUSERDllExport SendAction {
  public:
    SendAction();

    explicit SendAction(
        bool data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SendAction (SendAction&&) = default;
    SendAction& operator=(SendAction&&) = default;
    SendAction& operator=(const SendAction&) = default;
    SendAction(const SendAction&) = default;
    #else
    SendAction(SendAction&& other_) OMG_NOEXCEPT;  
    SendAction& operator=(SendAction&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    bool& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const bool& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(bool value) {
        m_data_ = value;
    }

    bool operator == (const SendAction& other_) const;
    bool operator != (const SendAction& other_) const;

    void swap(SendAction& other_) OMG_NOEXCEPT ;

  private:

    bool m_data_;

};

inline void swap(SendAction& a, SendAction& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SendAction& sample);

class NDDSUSERDllExport RecieveAction {
  public:
    RecieveAction();

    explicit RecieveAction(
        int32_t data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RecieveAction (RecieveAction&&) = default;
    RecieveAction& operator=(RecieveAction&&) = default;
    RecieveAction& operator=(const RecieveAction&) = default;
    RecieveAction(const RecieveAction&) = default;
    #else
    RecieveAction(RecieveAction&& other_) OMG_NOEXCEPT;  
    RecieveAction& operator=(RecieveAction&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const int32_t& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(int32_t value) {
        m_data_ = value;
    }

    bool operator == (const RecieveAction& other_) const;
    bool operator != (const RecieveAction& other_) const;

    void swap(RecieveAction& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_data_;

};

inline void swap(RecieveAction& a, RecieveAction& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RecieveAction& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< SendAction > {
            NDDSUSERDllExport static std::string value() {
                return "SendAction";
            }
        };

        template<>
        struct is_topic_type< SendAction > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< SendAction > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const SendAction& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(SendAction& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(SendAction& sample);

            NDDSUSERDllExport 
            static void allocate_sample(SendAction& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RecieveAction > {
            NDDSUSERDllExport static std::string value() {
                return "RecieveAction";
            }
        };

        template<>
        struct is_topic_type< RecieveAction > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< RecieveAction > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const RecieveAction& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(RecieveAction& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(RecieveAction& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RecieveAction& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< SendAction > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< SendAction > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RecieveAction > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RecieveAction > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // CommonProposalProject_1738084540_hpp

