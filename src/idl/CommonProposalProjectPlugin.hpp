

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonProposalProject.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommonProposalProjectPlugin_1738084540_h
#define CommonProposalProjectPlugin_1738084540_h

#include "CommonProposalProject.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define SendActionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define SendActionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SendActionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define SendActionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SendActionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SendAction*
SendActionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SendAction*
SendActionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SendAction*
SendActionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SendActionPluginSupport_copy_data(
    SendAction *out,
    const SendAction *in);

NDDSUSERDllExport extern void 
SendActionPluginSupport_destroy_data_w_params(
    SendAction *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SendActionPluginSupport_destroy_data_ex(
    SendAction *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SendActionPluginSupport_destroy_data(
    SendAction *sample);

NDDSUSERDllExport extern void 
SendActionPluginSupport_print_data(
    const SendAction *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SendActionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SendActionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
SendActionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SendActionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
SendActionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SendAction *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
SendActionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SendAction *out,
    const SendAction *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
SendActionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SendAction *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
SendActionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SendAction **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SendActionPlugin_deserialize_from_cdr_buffer(
    SendAction *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
SendActionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
SendActionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SendActionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SendActionPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SendActionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SendAction ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SendActionPlugin_new(void);

NDDSUSERDllExport extern void
SendActionPlugin_delete(struct PRESTypePlugin *);

#define RecieveActionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RecieveActionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RecieveActionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RecieveActionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RecieveActionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RecieveAction*
RecieveActionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RecieveAction*
RecieveActionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RecieveAction*
RecieveActionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RecieveActionPluginSupport_copy_data(
    RecieveAction *out,
    const RecieveAction *in);

NDDSUSERDllExport extern void 
RecieveActionPluginSupport_destroy_data_w_params(
    RecieveAction *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RecieveActionPluginSupport_destroy_data_ex(
    RecieveAction *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RecieveActionPluginSupport_destroy_data(
    RecieveAction *sample);

NDDSUSERDllExport extern void 
RecieveActionPluginSupport_print_data(
    const RecieveAction *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RecieveActionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RecieveActionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RecieveActionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RecieveActionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RecieveActionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RecieveAction *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RecieveActionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RecieveAction *out,
    const RecieveAction *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RecieveActionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RecieveAction *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RecieveActionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RecieveAction **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RecieveActionPlugin_deserialize_from_cdr_buffer(
    RecieveAction *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RecieveActionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RecieveActionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RecieveActionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RecieveActionPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RecieveActionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RecieveAction ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RecieveActionPlugin_new(void);

NDDSUSERDllExport extern void
RecieveActionPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommonProposalProjectPlugin_1738084540_h */

