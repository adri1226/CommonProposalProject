

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonProposalProject.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CommonProposalProject.hpp"
#include "CommonProposalProjectPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- SendAction: 

SendAction::SendAction() :
    m_data_ (0)  {
}   

SendAction::SendAction (
    bool data)
    :
        m_data_( data ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
SendAction::SendAction(SendAction&& other_) OMG_NOEXCEPT  :m_data_ (std::move(other_.m_data_))
{
} 

SendAction& SendAction::operator=(SendAction&&  other_) OMG_NOEXCEPT {
    SendAction tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void SendAction::swap(SendAction& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}  

bool SendAction::operator == (const SendAction& other_) const {
    if (m_data_ != other_.m_data_) {
        return false;
    }
    return true;
}
bool SendAction::operator != (const SendAction& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const SendAction& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "data: " << sample.data() ;
    o <<"]";
    return o;
}

// ---- RecieveData: 

RecieveData::RecieveData() :
    m_data_ (0)  {
}   

RecieveData::RecieveData (
    int32_t data)
    :
        m_data_( data ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RecieveData::RecieveData(RecieveData&& other_) OMG_NOEXCEPT  :m_data_ (std::move(other_.m_data_))
{
} 

RecieveData& RecieveData::operator=(RecieveData&&  other_) OMG_NOEXCEPT {
    RecieveData tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RecieveData::swap(RecieveData& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}  

bool RecieveData::operator == (const RecieveData& other_) const {
    if (m_data_ != other_.m_data_) {
        return false;
    }
    return true;
}
bool RecieveData::operator != (const RecieveData& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RecieveData& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "data: " << sample.data() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< SendAction > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SendAction_g_tc_members[1]=
                {

                    {
                        (char *)"data",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SendAction_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"SendAction", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SendAction_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SendAction*/

                if (is_initialized) {
                    return &SendAction_g_tc;
                }

                SendAction_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SendAction_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                SendAction_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                SendAction_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                SendAction_g_tc._data._sampleAccessInfo = sample_access_info();
                SendAction_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SendAction_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                SendAction *sample;

                static RTIXCdrMemberAccessInfo SendAction_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SendAction_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SendAction_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    SendAction);
                if (sample == NULL) {
                    return NULL;
                }

                SendAction_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->data() - (char *)sample);

                SendAction_g_sampleAccessInfo.memberAccessInfos = 
                SendAction_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(SendAction);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SendAction_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SendAction_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SendAction_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SendAction_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< SendAction >;

                SendAction_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SendAction_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SendAction_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SendAction_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< SendAction >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< SendAction >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RecieveData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RecieveData_g_tc_members[1]=
                {

                    {
                        (char *)"data",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RecieveData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RecieveData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RecieveData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RecieveData*/

                if (is_initialized) {
                    return &RecieveData_g_tc;
                }

                RecieveData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RecieveData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                RecieveData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RecieveData_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                RecieveData_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RecieveData_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RecieveData_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RecieveData_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                RecieveData_g_tc._data._sampleAccessInfo = sample_access_info();
                RecieveData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RecieveData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RecieveData *sample;

                static RTIXCdrMemberAccessInfo RecieveData_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RecieveData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RecieveData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RecieveData);
                if (sample == NULL) {
                    return NULL;
                }

                RecieveData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->data() - (char *)sample);

                RecieveData_g_sampleAccessInfo.memberAccessInfos = 
                RecieveData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RecieveData);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RecieveData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RecieveData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RecieveData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RecieveData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RecieveData >;

                RecieveData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RecieveData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RecieveData_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &RecieveData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RecieveData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RecieveData >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< SendAction >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                SendActionPlugin_new,
                SendActionPlugin_delete);
        }

        std::vector<char>& topic_type_support< SendAction >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const SendAction& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SendActionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SendActionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< SendAction >::from_cdr_buffer(SendAction& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SendActionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create SendAction from cdr buffer");
        }

        void topic_type_support< SendAction >::reset_sample(SendAction& sample) 
        {
            sample.data(0);
        }

        void topic_type_support< SendAction >::allocate_sample(SendAction& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RecieveData >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                RecieveDataPlugin_new,
                RecieveDataPlugin_delete);
        }

        std::vector<char>& topic_type_support< RecieveData >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const RecieveData& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RecieveDataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RecieveDataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< RecieveData >::from_cdr_buffer(RecieveData& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RecieveDataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create RecieveData from cdr buffer");
        }

        void topic_type_support< RecieveData >::reset_sample(RecieveData& sample) 
        {
            sample.data(0);
        }

        void topic_type_support< RecieveData >::allocate_sample(RecieveData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

