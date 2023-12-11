#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadata::class$ = NULL;
            jmethodID *CdmMetadata::mids$ = NULL;
            bool CdmMetadata::live$ = false;

            jclass CdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_23625b258f7a7479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                mids$[mid_getAdmMsgLink_3cffd47377eca18a] = env->getMethodID(cls, "getAdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getAltCovRefFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getAltCovRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getAltCovType_5aeefc0906cfef6a] = env->getMethodID(cls, "getAltCovType", "()Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_getAtmosphericModel_3cffd47377eca18a] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                mids$[mid_getCatalogName_3cffd47377eca18a] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                mids$[mid_getCovarianceMethod_c1451b820dbd159d] = env->getMethodID(cls, "getCovarianceMethod", "()Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_getCovarianceSource_3cffd47377eca18a] = env->getMethodID(cls, "getCovarianceSource", "()Ljava/lang/String;");
                mids$[mid_getEarthTides_ad3b3fcfed02fed8] = env->getMethodID(cls, "getEarthTides", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getEphemName_3cffd47377eca18a] = env->getMethodID(cls, "getEphemName", "()Ljava/lang/String;");
                mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGravityDegree_412668abc8d889e9] = env->getMethodID(cls, "getGravityDegree", "()I");
                mids$[mid_getGravityModel_3cffd47377eca18a] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                mids$[mid_getGravityOrder_412668abc8d889e9] = env->getMethodID(cls, "getGravityOrder", "()I");
                mids$[mid_getInternationalDes_3cffd47377eca18a] = env->getMethodID(cls, "getInternationalDes", "()Ljava/lang/String;");
                mids$[mid_getIntrackThrust_ad3b3fcfed02fed8] = env->getMethodID(cls, "getIntrackThrust", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getManeuverable_8901273111522254] = env->getMethodID(cls, "getManeuverable", "()Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getNBodyPerturbations_0d9551367f7ecdef] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                mids$[mid_getObject_3cffd47377eca18a] = env->getMethodID(cls, "getObject", "()Ljava/lang/String;");
                mids$[mid_getObjectDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                mids$[mid_getObjectName_3cffd47377eca18a] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_getObjectType_510913fffa0e993d] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                mids$[mid_getObsBeforeNextMessage_ad3b3fcfed02fed8] = env->getMethodID(cls, "getObsBeforeNextMessage", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getOdmMsgLink_3cffd47377eca18a] = env->getMethodID(cls, "getOdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getOperatorContactPosition_3cffd47377eca18a] = env->getMethodID(cls, "getOperatorContactPosition", "()Ljava/lang/String;");
                mids$[mid_getOperatorEmail_3cffd47377eca18a] = env->getMethodID(cls, "getOperatorEmail", "()Ljava/lang/String;");
                mids$[mid_getOperatorOrganization_3cffd47377eca18a] = env->getMethodID(cls, "getOperatorOrganization", "()Ljava/lang/String;");
                mids$[mid_getOperatorPhone_3cffd47377eca18a] = env->getMethodID(cls, "getOperatorPhone", "()Ljava/lang/String;");
                mids$[mid_getOrbitCenter_c642bce266d6d89a] = env->getMethodID(cls, "getOrbitCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getRefFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getRelativeMetadata_f5a8cae6e2267df4] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getSolarRadiationPressure_ad3b3fcfed02fed8] = env->getMethodID(cls, "getSolarRadiationPressure", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_setAdmMsgLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setAdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setAltCovRefFrame_f55eee1236275bb1] = env->getMethodID(cls, "setAltCovRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setAltCovType_8d933a696c0b5445] = env->getMethodID(cls, "setAltCovType", "(Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;)V");
                mids$[mid_setAtmosphericModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                mids$[mid_setCatalogName_f5ffdf29129ef90a] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                mids$[mid_setCovarianceMethod_3c9ac3d641022735] = env->getMethodID(cls, "setCovarianceMethod", "(Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;)V");
                mids$[mid_setCovarianceSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovarianceSource", "(Ljava/lang/String;)V");
                mids$[mid_setEarthTides_b56c5a309cda3011] = env->getMethodID(cls, "setEarthTides", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setEphemName_f5ffdf29129ef90a] = env->getMethodID(cls, "setEphemName", "(Ljava/lang/String;)V");
                mids$[mid_setGravityModel_96097c5e4aacac76] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                mids$[mid_setInternationalDes_f5ffdf29129ef90a] = env->getMethodID(cls, "setInternationalDes", "(Ljava/lang/String;)V");
                mids$[mid_setIntrackThrust_b56c5a309cda3011] = env->getMethodID(cls, "setIntrackThrust", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setManeuverable_0267cff740d16a1e] = env->getMethodID(cls, "setManeuverable", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");
                mids$[mid_setNBodyPerturbations_4ccaedadb068bdeb] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                mids$[mid_setObject_f5ffdf29129ef90a] = env->getMethodID(cls, "setObject", "(Ljava/lang/String;)V");
                mids$[mid_setObjectDesignator_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_setObjectType_bdc34300f6ac541f] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                mids$[mid_setObsBeforeNextMessage_b56c5a309cda3011] = env->getMethodID(cls, "setObsBeforeNextMessage", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setOdmMsgLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setOdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorContactPosition_f5ffdf29129ef90a] = env->getMethodID(cls, "setOperatorContactPosition", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorEmail_f5ffdf29129ef90a] = env->getMethodID(cls, "setOperatorEmail", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorOrganization_f5ffdf29129ef90a] = env->getMethodID(cls, "setOperatorOrganization", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorPhone_f5ffdf29129ef90a] = env->getMethodID(cls, "setOperatorPhone", "(Ljava/lang/String;)V");
                mids$[mid_setOrbitCenter_e6f755c267d91c26] = env->getMethodID(cls, "setOrbitCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setRefFrame_f55eee1236275bb1] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setRelativeMetadata_4640f597096c6377] = env->getMethodID(cls, "setRelativeMetadata", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_setSolarRadiationPressure_b56c5a309cda3011] = env->getMethodID(cls, "setSolarRadiationPressure", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadata::CdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            CdmMetadata::CdmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_23625b258f7a7479, a0.this$)) {}

            ::java::lang::String CdmMetadata::getAdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMsgLink_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getAltCovRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getAltCovRefFrame_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType CdmMetadata::getAltCovType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType(env->callObjectMethod(this$, mids$[mid_getAltCovType_5aeefc0906cfef6a]));
            }

            ::java::lang::String CdmMetadata::getAtmosphericModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getCatalogName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod CdmMetadata::getCovarianceMethod() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod(env->callObjectMethod(this$, mids$[mid_getCovarianceMethod_c1451b820dbd159d]));
            }

            ::java::lang::String CdmMetadata::getCovarianceSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovarianceSource_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getEarthTides() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getEarthTides_ad3b3fcfed02fed8]));
            }

            ::java::lang::String CdmMetadata::getEphemName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEphemName_3cffd47377eca18a]));
            }

            ::org::orekit::frames::Frame CdmMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
            }

            jint CdmMetadata::getGravityDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityDegree_412668abc8d889e9]);
            }

            ::java::lang::String CdmMetadata::getGravityModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_3cffd47377eca18a]));
            }

            jint CdmMetadata::getGravityOrder() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityOrder_412668abc8d889e9]);
            }

            ::java::lang::String CdmMetadata::getInternationalDes() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDes_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getIntrackThrust() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getIntrackThrust_ad3b3fcfed02fed8]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable CdmMetadata::getManeuverable() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable(env->callObjectMethod(this$, mids$[mid_getManeuverable_8901273111522254]));
            }

            ::java::util::List CdmMetadata::getNBodyPerturbations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_0d9551367f7ecdef]));
            }

            ::java::lang::String CdmMetadata::getObject() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObject_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getObjectDesignator() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType CdmMetadata::getObjectType() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_510913fffa0e993d]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getObsBeforeNextMessage() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getObsBeforeNextMessage_ad3b3fcfed02fed8]));
            }

            ::java::lang::String CdmMetadata::getOdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMsgLink_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getOperatorContactPosition() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorContactPosition_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getOperatorEmail() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorEmail_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getOperatorOrganization() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorOrganization_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMetadata::getOperatorPhone() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorPhone_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade CdmMetadata::getOrbitCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getOrbitCenter_c642bce266d6d89a]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getRefFrame_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata CdmMetadata::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_f5a8cae6e2267df4]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getSolarRadiationPressure() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getSolarRadiationPressure_ad3b3fcfed02fed8]));
            }

            void CdmMetadata::setAdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdmMsgLink_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovRefFrame_f55eee1236275bb1], a0.this$);
            }

            void CdmMetadata::setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovType_8d933a696c0b5445], a0.this$);
            }

            void CdmMetadata::setAtmosphericModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setCatalogName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCatalogName_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMethod_3c9ac3d641022735], a0.this$);
            }

            void CdmMetadata::setCovarianceSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceSource_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEarthTides_b56c5a309cda3011], a0.this$);
            }

            void CdmMetadata::setEphemName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemName_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setGravityModel_96097c5e4aacac76], a0.this$, a1, a2);
            }

            void CdmMetadata::setInternationalDes(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInternationalDes_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntrackThrust_b56c5a309cda3011], a0.this$);
            }

            void CdmMetadata::setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setManeuverable_0267cff740d16a1e], a0.this$);
            }

            void CdmMetadata::setNBodyPerturbations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_4ccaedadb068bdeb], a0.this$);
            }

            void CdmMetadata::setObject(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObject_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectDesignator_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectType_bdc34300f6ac541f], a0.this$);
            }

            void CdmMetadata::setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsBeforeNextMessage_b56c5a309cda3011], a0.this$);
            }

            void CdmMetadata::setOdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdmMsgLink_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setOperatorContactPosition(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorContactPosition_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setOperatorEmail(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorEmail_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setOperatorOrganization(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorOrganization_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setOperatorPhone(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorPhone_f5ffdf29129ef90a], a0.this$);
            }

            void CdmMetadata::setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOrbitCenter_e6f755c267d91c26], a0.this$);
            }

            void CdmMetadata::setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRefFrame_f55eee1236275bb1], a0.this$);
            }

            void CdmMetadata::setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeMetadata_4640f597096c6377], a0.this$);
            }

            void CdmMetadata::setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadiationPressure_b56c5a309cda3011], a0.this$);
            }

            void CdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMetadata, admMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovRefFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, atmosphericModel),
              DECLARE_GETSET_FIELD(t_CdmMetadata, catalogName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceMethod),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceSource),
              DECLARE_GETSET_FIELD(t_CdmMetadata, earthTides),
              DECLARE_GETSET_FIELD(t_CdmMetadata, ephemName),
              DECLARE_GET_FIELD(t_CdmMetadata, frame),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityDegree),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityModel),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityOrder),
              DECLARE_GETSET_FIELD(t_CdmMetadata, internationalDes),
              DECLARE_GETSET_FIELD(t_CdmMetadata, intrackThrust),
              DECLARE_GETSET_FIELD(t_CdmMetadata, maneuverable),
              DECLARE_GETSET_FIELD(t_CdmMetadata, nBodyPerturbations),
              DECLARE_GETSET_FIELD(t_CdmMetadata, object),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectDesignator),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, obsBeforeNextMessage),
              DECLARE_GETSET_FIELD(t_CdmMetadata, odmMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorContactPosition),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorEmail),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorOrganization),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorPhone),
              DECLARE_GETSET_FIELD(t_CdmMetadata, orbitCenter),
              DECLARE_GETSET_FIELD(t_CdmMetadata, refFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, relativeMetadata),
              DECLARE_GETSET_FIELD(t_CdmMetadata, solarRadiationPressure),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, getAdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAtmosphericModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCatalogName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceSource, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEarthTides, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEphemName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityDegree, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityOrder, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getInternationalDes, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getIntrackThrust, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getManeuverable, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getNBodyPerturbations, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObject, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectDesignator, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObsBeforeNextMessage, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorContactPosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorEmail, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorOrganization, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorPhone, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOrbitCenter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getSolarRadiationPressure, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, setAdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAtmosphericModel, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCatalogName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceMethod, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceSource, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEarthTides, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEphemName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setGravityModel, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadata, setInternationalDes, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setIntrackThrust, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setManeuverable, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setNBodyPerturbations, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObject, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectDesignator, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObsBeforeNextMessage, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorContactPosition, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorEmail, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorOrganization, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorPhone, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOrbitCenter, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRelativeMetadata, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setSolarRadiationPressure, METH_O),
              DECLARE_METHOD(t_CdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadata)[] = {
              { Py_tp_methods, t_CdmMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmMetadata_init_ },
              { Py_tp_getset, t_CdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(CdmMetadata, t_CdmMetadata, CdmMetadata);

            void t_CdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadata), &PY_TYPE_DEF(CdmMetadata), module, "CdmMetadata", 0);
            }

            void t_CdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "class_", make_descriptor(CdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "wrapfn_", make_descriptor(t_CdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmMetadata::wrap_Object(CdmMetadata(((t_CdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  CdmMetadata object((jobject) NULL);

                  INT_CALL(object = CdmMetadata());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  CdmMetadata object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    INT_CALL(object = CdmMetadata(a0));
                    self->object = object;
                    break;
                  }
                }
               default:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphericModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCatalogName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceSource());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getGravityModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityOrder());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInternationalDes());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable result((jobject) NULL);
              OBJ_CALL(result = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
            }

            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObject());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectDesignator());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorContactPosition());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorEmail());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorOrganization());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorPhone());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAltCovRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::parameters_))
              {
                OBJ_CALL(self->object.setAltCovType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAtmosphericModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCatalogName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::parameters_))
              {
                OBJ_CALL(self->object.setCovarianceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovarianceSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceSource", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setEarthTides(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEarthTides", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setEphemName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInternationalDes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInternationalDes", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setIntrackThrust(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntrackThrust", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.setManeuverable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setManeuverable", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setNBodyPerturbations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObject(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObject", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectDesignator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
              {
                OBJ_CALL(self->object.setObjectType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setObsBeforeNextMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsBeforeNextMessage", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorContactPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorContactPosition", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorEmail(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorEmail", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorOrganization(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorOrganization", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorPhone(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorPhone", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOrbitCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOrbitCenter", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRelativeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeMetadata", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setSolarRadiationPressure(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadiationPressure", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "admMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovRefFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphericModel());
              return j2p(value);
            }
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAtmosphericModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCatalogName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCatalogName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(value);
            }
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMethod", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceSource());
              return j2p(value);
            }
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovarianceSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceSource", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setEarthTides(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "earthTides", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setEphemName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityDegree());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getGravityModel());
              return j2p(value);
            }

            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityOrder());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInternationalDes());
              return j2p(value);
            }
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInternationalDes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "internationalDes", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntrackThrust(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "intrackThrust", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
              OBJ_CALL(value = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(value);
            }
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &value))
                {
                  INT_CALL(self->object.setManeuverable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maneuverable", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setNBodyPerturbations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObject());
              return j2p(value);
            }
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObject(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "object", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectDesignator());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectDesignator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                {
                  INT_CALL(self->object.setObjectType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setObsBeforeNextMessage(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsBeforeNextMessage", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odmMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorContactPosition());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorContactPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorContactPosition", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorEmail());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorEmail(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorEmail", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorOrganization());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorOrganization(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorOrganization", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorPhone());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorPhone(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorPhone", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setOrbitCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "orbitCenter", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &value))
                {
                  INT_CALL(self->object.setRelativeMetadata(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeMetadata", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setSolarRadiationPressure(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadiationPressure", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaTurnAroundRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaTurnAroundRangeModifier::mids$ = NULL;
          bool OnBoardAntennaTurnAroundRangeModifier::live$ = false;

          jclass OnBoardAntennaTurnAroundRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaTurnAroundRangeModifier::OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

          ::java::util::List OnBoardAntennaTurnAroundRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OnBoardAntennaTurnAroundRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaTurnAroundRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaTurnAroundRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaTurnAroundRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaTurnAroundRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaTurnAroundRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaTurnAroundRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaTurnAroundRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaTurnAroundRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaTurnAroundRangeModifier, t_OnBoardAntennaTurnAroundRangeModifier, OnBoardAntennaTurnAroundRangeModifier);

          void t_OnBoardAntennaTurnAroundRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), &PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier), module, "OnBoardAntennaTurnAroundRangeModifier", 0);
          }

          void t_OnBoardAntennaTurnAroundRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "class_", make_descriptor(OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaTurnAroundRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaTurnAroundRangeModifier::wrap_Object(OnBoardAntennaTurnAroundRangeModifier(((t_OnBoardAntennaTurnAroundRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            OnBoardAntennaTurnAroundRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = OnBoardAntennaTurnAroundRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizer::class$ = NULL;
        jmethodID *StepNormalizer::mids$ = NULL;
        bool StepNormalizer::live$ = false;

        jclass StepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5c00afcec1667f9] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;)V");
            mids$[mid_init$_f7bc224b2347e0ad] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_473336e8029e5846] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_3faa9635cbf6921f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_b79fdee299d79fcc] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_b272ebb5ead79c81] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5c00afcec1667f9, a0, a1.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7bc224b2347e0ad, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_473336e8029e5846, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3faa9635cbf6921f, a0, a1.this$, a2.this$, a3.this$)) {}

        void StepNormalizer::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b79fdee299d79fcc], a0.this$);
        }

        void StepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_b272ebb5ead79c81], a0.this$);
        }

        void StepNormalizer::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args);

        static PyMethodDef t_StepNormalizer__methods_[] = {
          DECLARE_METHOD(t_StepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_StepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_StepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizer)[] = {
          { Py_tp_methods, t_StepNormalizer__methods_ },
          { Py_tp_init, (void *) t_StepNormalizer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepNormalizer, t_StepNormalizer, StepNormalizer);

        void t_StepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizer), &PY_TYPE_DEF(StepNormalizer), module, "StepNormalizer", 0);
        }

        void t_StepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "class_", make_descriptor(StepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "wrapfn_", make_descriptor(t_StepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizer::initializeClass, 1)))
            return NULL;
          return t_StepNormalizer::wrap_Object(StepNormalizer(((t_StepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkKK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationWriter::class$ = NULL;
          jmethodID *RinexObservationWriter::mids$ = NULL;
          bool RinexObservationWriter::live$ = false;

          jclass RinexObservationWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07ec9ab68c2ac844] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;)V");
              mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
              mids$[mid_prepareComments_4ccaedadb068bdeb] = env->getMethodID(cls, "prepareComments", "(Ljava/util/List;)V");
              mids$[mid_writeCompleteFile_e605781ac255bbd3] = env->getMethodID(cls, "writeCompleteFile", "(Lorg/orekit/files/rinex/observation/RinexObservation;)V");
              mids$[mid_writeHeader_3d74ba4f9e2b8c95] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/rinex/observation/RinexObservationHeader;)V");
              mids$[mid_writeObservationDataSet_7cae3eafa8e6978c] = env->getMethodID(cls, "writeObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_writePendingRinex2Observations_0640e6acf969ed28] = env->getMethodID(cls, "writePendingRinex2Observations", "()V");
              mids$[mid_writePendingRinex34Observations_0640e6acf969ed28] = env->getMethodID(cls, "writePendingRinex34Observations", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationWriter::RinexObservationWriter(const ::java::lang::Appendable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07ec9ab68c2ac844, a0.this$, a1.this$)) {}

          void RinexObservationWriter::close() const
          {
            env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
          }

          void RinexObservationWriter::prepareComments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_prepareComments_4ccaedadb068bdeb], a0.this$);
          }

          void RinexObservationWriter::writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeCompleteFile_e605781ac255bbd3], a0.this$);
          }

          void RinexObservationWriter::writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeHeader_3d74ba4f9e2b8c95], a0.this$);
          }

          void RinexObservationWriter::writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeObservationDataSet_7cae3eafa8e6978c], a0.this$);
          }

          void RinexObservationWriter::writePendingRinex2Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex2Observations_0640e6acf969ed28]);
          }

          void RinexObservationWriter::writePendingRinex34Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex34Observations_0640e6acf969ed28]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self);

          static PyMethodDef t_RinexObservationWriter__methods_[] = {
            DECLARE_METHOD(t_RinexObservationWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, close, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, prepareComments, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeCompleteFile, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeHeader, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex2Observations, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex34Observations, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationWriter)[] = {
            { Py_tp_methods, t_RinexObservationWriter__methods_ },
            { Py_tp_init, (void *) t_RinexObservationWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationWriter, t_RinexObservationWriter, RinexObservationWriter);

          void t_RinexObservationWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationWriter), &PY_TYPE_DEF(RinexObservationWriter), module, "RinexObservationWriter", 0);
          }

          void t_RinexObservationWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "class_", make_descriptor(RinexObservationWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "wrapfn_", make_descriptor(t_RinexObservationWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationWriter::initializeClass, 1)))
              return NULL;
            return t_RinexObservationWriter::wrap_Object(RinexObservationWriter(((t_RinexObservationWriter *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::Appendable a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            RinexObservationWriter object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::Appendable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RinexObservationWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.close());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.prepareComments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "prepareComments", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservation a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::observation::RinexObservation::initializeClass, &a0, &p0, ::org::orekit::files::rinex::observation::t_RinexObservation::parameters_))
            {
              OBJ_CALL(self->object.writeCompleteFile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeCompleteFile", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservationHeader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::RinexObservationHeader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeHeader", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex2Observations());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex34Observations());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeState::class$ = NULL;
              jmethodID *AttitudeState::mids$ = NULL;
              bool AttitudeState::live$ = false;

              jclass AttitudeState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3588a6527012f382] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getAttitudeType_5db4fed82a3253b8] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_a53a7513ecedada2] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getRateElementsType_232ed199566358d9] = env->getMethodID(cls, "getRateElementsType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_toAngular_dae83a7678180add] = env->getMethodID(cls, "toAngular", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeState::AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3588a6527012f382, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeState::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_5db4fed82a3253b8]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              JArray< jdouble > AttitudeState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_a53a7513ecedada2]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeState::getRateElementsType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateElementsType_232ed199566358d9]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeState::toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_dae83a7678180add], a0.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg);
              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data);
              static PyGetSetDef t_AttitudeState__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeState, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeState, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeState, date),
                DECLARE_GET_FIELD(t_AttitudeState, elements),
                DECLARE_GET_FIELD(t_AttitudeState, rateElementsType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeState__methods_[] = {
                DECLARE_METHOD(t_AttitudeState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getRateElementsType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, toAngular, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeState)[] = {
                { Py_tp_methods, t_AttitudeState__methods_ },
                { Py_tp_init, (void *) t_AttitudeState_init_ },
                { Py_tp_getset, t_AttitudeState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeState, t_AttitudeState, AttitudeState);

              void t_AttitudeState::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeState), &PY_TYPE_DEF(AttitudeState), module, "AttitudeState", 0);
              }

              void t_AttitudeState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "class_", make_descriptor(AttitudeState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "wrapfn_", make_descriptor(t_AttitudeState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeState::initializeClass, 1)))
                  return NULL;
                return t_AttitudeState::wrap_Object(AttitudeState(((t_AttitudeState *) arg)->object.this$));
              }
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                AttitudeState object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = AttitudeState(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(result = self->object.toAngular(a0));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", arg);
                return NULL;
              }

              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeCrossingDetector::class$ = NULL;
        jmethodID *LongitudeCrossingDetector::mids$ = NULL;
        bool LongitudeCrossingDetector::live$ = false;

        jclass LongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cee3325573481ef4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_732c94d692efbcdf] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_08e20d34148f61f0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeCrossingDetector::LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cee3325573481ef4, a0.this$, a1)) {}

        LongitudeCrossingDetector::LongitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_732c94d692efbcdf, a0, a1, a2.this$, a3)) {}

        jdouble LongitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
        }

        jdouble LongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
        }

        void LongitudeCrossingDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args);
        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeCrossingDetector, t_LongitudeCrossingDetector, LongitudeCrossingDetector);
        PyObject *t_LongitudeCrossingDetector::wrap_Object(const LongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeCrossingDetector), &PY_TYPE_DEF(LongitudeCrossingDetector), module, "LongitudeCrossingDetector", 0);
        }

        void t_LongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "class_", make_descriptor(LongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "wrapfn_", make_descriptor(t_LongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeCrossingDetector::wrap_Object(LongitudeCrossingDetector(((t_LongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEclipseDetector::class$ = NULL;
        jmethodID *FieldEclipseDetector::mids$ = NULL;
        bool FieldEclipseDetector::live$ = false;

        jclass FieldEclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9b6fc1cd358f2cd2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_aa9a75272aa75b60] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMargin_613c8f46c659f636] = env->getMethodID(cls, "getMargin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOccultationEngine_fed7baa95ffa6698] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_89b302893bdbe1f1] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_51df47e11579db04] = env->getMethodID(cls, "withMargin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withPenumbra_e6d3ee8fd4b41dad] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withUmbra_e6d3ee8fd4b41dad] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_create_9e9987a8275a8085] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::OccultationEngine & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9b6fc1cd358f2cd2, a0.this$, a1.this$)) {}

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aa9a75272aa75b60, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::getMargin() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMargin_613c8f46c659f636]));
        }

        ::org::orekit::utils::OccultationEngine FieldEclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_fed7baa95ffa6698]));
        }

        jboolean FieldEclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_89b302893bdbe1f1]);
        }

        FieldEclipseDetector FieldEclipseDetector::withMargin(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_51df47e11579db04], a0.this$));
        }

        FieldEclipseDetector FieldEclipseDetector::withPenumbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_e6d3ee8fd4b41dad]));
        }

        FieldEclipseDetector FieldEclipseDetector::withUmbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_e6d3ee8fd4b41dad]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args);
        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args);
        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data);
        static PyGetSetDef t_FieldEclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEclipseDetector, margin),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEclipseDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_FieldEclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEclipseDetector)[] = {
          { Py_tp_methods, t_FieldEclipseDetector__methods_ },
          { Py_tp_init, (void *) t_FieldEclipseDetector_init_ },
          { Py_tp_getset, t_FieldEclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEclipseDetector, t_FieldEclipseDetector, FieldEclipseDetector);
        PyObject *t_FieldEclipseDetector::wrap_Object(const FieldEclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEclipseDetector), &PY_TYPE_DEF(FieldEclipseDetector), module, "FieldEclipseDetector", 0);
        }

        void t_FieldEclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "class_", make_descriptor(FieldEclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "wrapfn_", make_descriptor(t_FieldEclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEclipseDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEclipseDetector::wrap_Object(FieldEclipseDetector(((t_FieldEclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::OccultationEngine a1((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::OccultationEngine::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "KkDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMargin());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMargin());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenZonalLinear::class$ = NULL;
              jmethodID *FieldHansenZonalLinear::mids$ = NULL;
              bool FieldHansenZonalLinear::live$ = false;

              jclass FieldHansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_aa34f9974068bcd4] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_1ee4bed350fde589] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_d7f69d00c9b191e9] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_d7f69d00c9b191e9] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenZonalLinear::FieldHansenZonalLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa34f9974068bcd4, a0, a1, a2.this$)) {}

              void FieldHansenZonalLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_1ee4bed350fde589], a0.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d7f69d00c9b191e9], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_d7f69d00c9b191e9], a0, a1.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args);
              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data);
              static PyGetSetDef t_FieldHansenZonalLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenZonalLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenZonalLinear)[] = {
                { Py_tp_methods, t_FieldHansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenZonalLinear_init_ },
                { Py_tp_getset, t_FieldHansenZonalLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenZonalLinear, t_FieldHansenZonalLinear, FieldHansenZonalLinear);
              PyObject *t_FieldHansenZonalLinear::wrap_Object(const FieldHansenZonalLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenZonalLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenZonalLinear), &PY_TYPE_DEF(FieldHansenZonalLinear), module, "FieldHansenZonalLinear", 0);
              }

              void t_FieldHansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "class_", make_descriptor(FieldHansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "wrapfn_", make_descriptor(t_FieldHansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenZonalLinear::wrap_Object(FieldHansenZonalLinear(((t_FieldHansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenZonalLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LaplaceDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LaplaceDistribution::class$ = NULL;
        jmethodID *LaplaceDistribution::mids$ = NULL;
        bool LaplaceDistribution::live$ = false;

        jclass LaplaceDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LaplaceDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_557b8123390d8d0c] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaplaceDistribution::LaplaceDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble LaplaceDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble LaplaceDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble LaplaceDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble LaplaceDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean LaplaceDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data);
        static PyGetSetDef t_LaplaceDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LaplaceDistribution, location),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LaplaceDistribution, scale),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaplaceDistribution__methods_[] = {
          DECLARE_METHOD(t_LaplaceDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaplaceDistribution)[] = {
          { Py_tp_methods, t_LaplaceDistribution__methods_ },
          { Py_tp_init, (void *) t_LaplaceDistribution_init_ },
          { Py_tp_getset, t_LaplaceDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaplaceDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LaplaceDistribution, t_LaplaceDistribution, LaplaceDistribution);

        void t_LaplaceDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LaplaceDistribution), &PY_TYPE_DEF(LaplaceDistribution), module, "LaplaceDistribution", 0);
        }

        void t_LaplaceDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "class_", make_descriptor(LaplaceDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "wrapfn_", make_descriptor(t_LaplaceDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaplaceDistribution::initializeClass, 1)))
            return NULL;
          return t_LaplaceDistribution::wrap_Object(LaplaceDistribution(((t_LaplaceDistribution *) arg)->object.this$));
        }
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaplaceDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LaplaceDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LaplaceDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaFieldIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaFieldIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_613c8f46c659f636] = env->getMethodID(cls, "getMaxGrowth", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMinReduction_613c8f46c659f636] = env->getMethodID(cls, "getMinReduction", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_613c8f46c659f636] = env->getMethodID(cls, "getSafety", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_dd582e1c9ef253c9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_1ee4bed350fde589] = env->getMethodID(cls, "setMaxGrowth", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setMinReduction_1ee4bed350fde589] = env->getMethodID(cls, "setMinReduction", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setSafety_1ee4bed350fde589] = env->getMethodID(cls, "setSafety", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_fraction_b42a276fbe83c342] = env->getMethodID(cls, "fraction", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_f548ed78c2486137] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_estimateError_db5b00c957704bb3] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_createInterpolator_8980964ba972ab77] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMaxGrowth() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMaxGrowth_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMinReduction() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMinReduction_613c8f46c659f636]));
        }

        jint EmbeddedRungeKuttaFieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getSafety() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSafety_613c8f46c659f636]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative EmbeddedRungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_dd582e1c9ef253c9], a0.this$, a1.this$, a2.this$));
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMaxGrowth(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_1ee4bed350fde589], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMinReduction(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_1ee4bed350fde589], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setSafety(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_1ee4bed350fde589], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, safety),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaFieldIntegrator, t_EmbeddedRungeKuttaFieldIntegrator, EmbeddedRungeKuttaFieldIntegrator);
        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(const EmbeddedRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator), module, "EmbeddedRungeKuttaFieldIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(EmbeddedRungeKuttaFieldIntegrator(((t_EmbeddedRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxGrowth());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinReduction());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSafety());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxGrowth());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinReduction());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSafety());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleBounds::class$ = NULL;
      jmethodID *SimpleBounds::mids$ = NULL;
      bool SimpleBounds::live$ = false;

      jclass SimpleBounds::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleBounds");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_getLower_a53a7513ecedada2] = env->getMethodID(cls, "getLower", "()[D");
          mids$[mid_getUpper_a53a7513ecedada2] = env->getMethodID(cls, "getUpper", "()[D");
          mids$[mid_unbounded_b6474a35bb12cf70] = env->getStaticMethodID(cls, "unbounded", "(I)Lorg/hipparchus/optim/SimpleBounds;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleBounds::SimpleBounds(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

      JArray< jdouble > SimpleBounds::getLower() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLower_a53a7513ecedada2]));
      }

      JArray< jdouble > SimpleBounds::getUpper() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpper_a53a7513ecedada2]));
      }

      SimpleBounds SimpleBounds::unbounded(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleBounds(env->callStaticObjectMethod(cls, mids$[mid_unbounded_b6474a35bb12cf70], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data);
      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data);
      static PyGetSetDef t_SimpleBounds__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleBounds, lower),
        DECLARE_GET_FIELD(t_SimpleBounds, upper),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleBounds__methods_[] = {
        DECLARE_METHOD(t_SimpleBounds, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, getLower, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, getUpper, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, unbounded, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleBounds)[] = {
        { Py_tp_methods, t_SimpleBounds__methods_ },
        { Py_tp_init, (void *) t_SimpleBounds_init_ },
        { Py_tp_getset, t_SimpleBounds__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleBounds)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleBounds, t_SimpleBounds, SimpleBounds);

      void t_SimpleBounds::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleBounds), &PY_TYPE_DEF(SimpleBounds), module, "SimpleBounds", 0);
      }

      void t_SimpleBounds::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "class_", make_descriptor(SimpleBounds::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "wrapfn_", make_descriptor(t_SimpleBounds::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleBounds::initializeClass, 1)))
          return NULL;
        return t_SimpleBounds::wrap_Object(SimpleBounds(((t_SimpleBounds *) arg)->object.this$));
      }
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleBounds::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleBounds object((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          INT_CALL(object = SimpleBounds(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLower());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpper());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        SimpleBounds result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::SimpleBounds::unbounded(a0));
          return t_SimpleBounds::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unbounded", arg);
        return NULL;
      }

      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLower());
        return value.wrap();
      }

      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpper());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *HermiteRuleFactory::class$ = NULL;
          jmethodID *HermiteRuleFactory::mids$ = NULL;
          bool HermiteRuleFactory::live$ = false;

          jclass HermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/HermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HermiteRuleFactory::HermiteRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_HermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_HermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HermiteRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HermiteRuleFactory)[] = {
            { Py_tp_methods, t_HermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_HermiteRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(HermiteRuleFactory, t_HermiteRuleFactory, HermiteRuleFactory);

          void t_HermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(HermiteRuleFactory), &PY_TYPE_DEF(HermiteRuleFactory), module, "HermiteRuleFactory", 0);
          }

          void t_HermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "class_", make_descriptor(HermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "wrapfn_", make_descriptor(t_HermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_HermiteRuleFactory::wrap_Object(HermiteRuleFactory(((t_HermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            HermiteRuleFactory object((jobject) NULL);

            INT_CALL(object = HermiteRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianAnomalyUtility.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianAnomalyUtility::class$ = NULL;
      jmethodID *FieldKeplerianAnomalyUtility::mids$ = NULL;
      bool FieldKeplerianAnomalyUtility::live$ = false;

      jclass FieldKeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticEccentricToTrue_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToEccentric_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToTrue_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToEccentric_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToMean_d5f58731bcb8a011] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToMean_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToTrue_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToEccentric_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToTrue_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToEccentric_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToMean_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToMean_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToTrue_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToEccentric_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToTrue_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToEccentric_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToMean_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToMean_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToTrue_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToEccentric_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToTrue_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToEccentric_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToMean_d5f58731bcb8a011], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FieldKeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_FieldKeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianAnomalyUtility, t_FieldKeplerianAnomalyUtility, FieldKeplerianAnomalyUtility);

      void t_FieldKeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianAnomalyUtility), &PY_TYPE_DEF(FieldKeplerianAnomalyUtility), module, "FieldKeplerianAnomalyUtility", 0);
      }

      void t_FieldKeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "class_", make_descriptor(FieldKeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_FieldKeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianAnomalyUtility::wrap_Object(FieldKeplerianAnomalyUtility(((t_FieldKeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IgnoreDEMAlgorithm::class$ = NULL;
        jmethodID *IgnoreDEMAlgorithm::mids$ = NULL;
        bool IgnoreDEMAlgorithm::live$ = false;

        jclass IgnoreDEMAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IgnoreDEMAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_2268d18be49a6087] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_bffffb02b1b74895] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_5fc8cb427a1ada2e] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IgnoreDEMAlgorithm::IgnoreDEMAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::rugged::api::AlgorithmId IgnoreDEMAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
        }

        jdouble IgnoreDEMAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_2268d18be49a6087], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_bffffb02b1b74895], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_5fc8cb427a1ada2e], a0.this$, a1.this$, a2.this$, a3.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self);
        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data);
        static PyGetSetDef t_IgnoreDEMAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IgnoreDEMAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IgnoreDEMAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IgnoreDEMAlgorithm)[] = {
          { Py_tp_methods, t_IgnoreDEMAlgorithm__methods_ },
          { Py_tp_init, (void *) t_IgnoreDEMAlgorithm_init_ },
          { Py_tp_getset, t_IgnoreDEMAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IgnoreDEMAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IgnoreDEMAlgorithm, t_IgnoreDEMAlgorithm, IgnoreDEMAlgorithm);

        void t_IgnoreDEMAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IgnoreDEMAlgorithm), &PY_TYPE_DEF(IgnoreDEMAlgorithm), module, "IgnoreDEMAlgorithm", 0);
        }

        void t_IgnoreDEMAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "class_", make_descriptor(IgnoreDEMAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "wrapfn_", make_descriptor(t_IgnoreDEMAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IgnoreDEMAlgorithm::wrap_Object(IgnoreDEMAlgorithm(((t_IgnoreDEMAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          IgnoreDEMAlgorithm object((jobject) NULL);

          INT_CALL(object = IgnoreDEMAlgorithm());
          self->object = object;

          return 0;
        }

        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OpsStatus::class$ = NULL;
              jmethodID *OpsStatus::mids$ = NULL;
              bool OpsStatus::live$ = false;
              OpsStatus *OpsStatus::BACKUP = NULL;
              OpsStatus *OpsStatus::DECAYED = NULL;
              OpsStatus *OpsStatus::EXTENDED_MISSION = NULL;
              OpsStatus *OpsStatus::NONOPERATIONAL = NULL;
              OpsStatus *OpsStatus::OPERATIONAL = NULL;
              OpsStatus *OpsStatus::PARTIALLY_OPERATIONAL = NULL;
              OpsStatus *OpsStatus::REENTRY_MODE = NULL;
              OpsStatus *OpsStatus::STANBY = NULL;
              OpsStatus *OpsStatus::UNKNOWN = NULL;

              jclass OpsStatus::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_894f582b47104270] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_values_3802b0e8fc69057e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  BACKUP = new OpsStatus(env->getStaticObjectField(cls, "BACKUP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  DECAYED = new OpsStatus(env->getStaticObjectField(cls, "DECAYED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  EXTENDED_MISSION = new OpsStatus(env->getStaticObjectField(cls, "EXTENDED_MISSION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  NONOPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "NONOPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  PARTIALLY_OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "PARTIALLY_OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  REENTRY_MODE = new OpsStatus(env->getStaticObjectField(cls, "REENTRY_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  STANBY = new OpsStatus(env->getStaticObjectField(cls, "STANBY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  UNKNOWN = new OpsStatus(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OpsStatus::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
              }

              OpsStatus OpsStatus::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OpsStatus(env->callStaticObjectMethod(cls, mids$[mid_valueOf_894f582b47104270], a0.this$));
              }

              JArray< OpsStatus > OpsStatus::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OpsStatus >(env->callStaticObjectMethod(cls, mids$[mid_values_3802b0e8fc69057e]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OpsStatus_values(PyTypeObject *type);
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data);
              static PyGetSetDef t_OpsStatus__fields_[] = {
                DECLARE_GET_FIELD(t_OpsStatus, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpsStatus__methods_[] = {
                DECLARE_METHOD(t_OpsStatus, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, toString, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpsStatus)[] = {
                { Py_tp_methods, t_OpsStatus__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpsStatus__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpsStatus)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OpsStatus, t_OpsStatus, OpsStatus);
              PyObject *t_OpsStatus::wrap_Object(const OpsStatus& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OpsStatus::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OpsStatus::install(PyObject *module)
              {
                installType(&PY_TYPE(OpsStatus), &PY_TYPE_DEF(OpsStatus), module, "OpsStatus", 0);
              }

              void t_OpsStatus::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "class_", make_descriptor(OpsStatus::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "wrapfn_", make_descriptor(t_OpsStatus::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpsStatus::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "BACKUP", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::BACKUP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "DECAYED", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::DECAYED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "EXTENDED_MISSION", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::EXTENDED_MISSION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "NONOPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::NONOPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "PARTIALLY_OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::PARTIALLY_OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "REENTRY_MODE", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::REENTRY_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "STANBY", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::STANBY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "UNKNOWN", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::UNKNOWN)));
              }

              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpsStatus::initializeClass, 1)))
                  return NULL;
                return t_OpsStatus::wrap_Object(OpsStatus(((t_OpsStatus *) arg)->object.this$));
              }
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpsStatus::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OpsStatus), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OpsStatus result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::valueOf(a0));
                  return t_OpsStatus::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OpsStatus_values(PyTypeObject *type)
              {
                JArray< OpsStatus > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::values());
                return JArray<jobject>(result.this$).wrap(t_OpsStatus::wrap_jobject);
              }
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Max::class$ = NULL;
        jmethodID *Max::mids$ = NULL;
        bool Max::live$ = false;

        jclass Max::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Max");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Max::Max() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Max::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Max_value(t_Max *self, PyObject *args);

        static PyMethodDef t_Max__methods_[] = {
          DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
          { Py_tp_methods, t_Max__methods_ },
          { Py_tp_init, (void *) t_Max_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Max)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Max, t_Max, Max);

        void t_Max::install(PyObject *module)
        {
          installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
        }

        void t_Max::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Max::initializeClass, 1)))
            return NULL;
          return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
        }
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Max::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
        {
          Max object((jobject) NULL);

          INT_CALL(object = Max());
          self->object = object;

          return 0;
        }

        static PyObject *t_Max_value(t_Max *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Mesh$Node.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Mesh$Node::class$ = NULL;
          jmethodID *Mesh$Node::mids$ = NULL;
          bool Mesh$Node::live$ = false;

          jclass Mesh$Node::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Mesh$Node");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcross_f88961cca75a2c0a] = env->getMethodID(cls, "getAcross", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcrossIndex_412668abc8d889e9] = env->getMethodID(cls, "getAcrossIndex", "()I");
              mids$[mid_getAlong_f88961cca75a2c0a] = env->getMethodID(cls, "getAlong", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAlongIndex_412668abc8d889e9] = env->getMethodID(cls, "getAlongIndex", "()I");
              mids$[mid_getS2P_0ba7e0560ff59fd8] = env->getMethodID(cls, "getS2P", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getV_f88961cca75a2c0a] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isEnabled_89b302893bdbe1f1] = env->getMethodID(cls, "isEnabled", "()Z");
              mids$[mid_isInside_89b302893bdbe1f1] = env->getMethodID(cls, "isInside", "()Z");
              mids$[mid_move_0ed238223dd4eabc] = env->getMethodID(cls, "move", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_setEnabled_0640e6acf969ed28] = env->getMethodID(cls, "setEnabled", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAcross() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcross_f88961cca75a2c0a]));
          }

          jint Mesh$Node::getAcrossIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAcrossIndex_412668abc8d889e9]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAlong() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAlong_f88961cca75a2c0a]));
          }

          jint Mesh$Node::getAlongIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlongIndex_412668abc8d889e9]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::getS2P() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getS2P_0ba7e0560ff59fd8]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_f88961cca75a2c0a]));
          }

          jboolean Mesh$Node::isEnabled() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEnabled_89b302893bdbe1f1]);
          }

          jboolean Mesh$Node::isInside() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInside_89b302893bdbe1f1]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_move_0ed238223dd4eabc], a0.this$));
          }

          void Mesh$Node::setEnabled() const
          {
            env->callVoidMethod(this$, mids$[mid_setEnabled_0640e6acf969ed28]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg);
          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data);
          static PyGetSetDef t_Mesh$Node__fields_[] = {
            DECLARE_GET_FIELD(t_Mesh$Node, across),
            DECLARE_GET_FIELD(t_Mesh$Node, acrossIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, along),
            DECLARE_GET_FIELD(t_Mesh$Node, alongIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, enabled),
            DECLARE_GET_FIELD(t_Mesh$Node, inside),
            DECLARE_GET_FIELD(t_Mesh$Node, s2P),
            DECLARE_GET_FIELD(t_Mesh$Node, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mesh$Node__methods_[] = {
            DECLARE_METHOD(t_Mesh$Node, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, getAcross, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAcrossIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlong, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlongIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getS2P, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getV, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isEnabled, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isInside, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, move, METH_O),
            DECLARE_METHOD(t_Mesh$Node, setEnabled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mesh$Node)[] = {
            { Py_tp_methods, t_Mesh$Node__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Mesh$Node__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mesh$Node)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Mesh$Node, t_Mesh$Node, Mesh$Node);

          void t_Mesh$Node::install(PyObject *module)
          {
            installType(&PY_TYPE(Mesh$Node), &PY_TYPE_DEF(Mesh$Node), module, "Mesh$Node", 0);
          }

          void t_Mesh$Node::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "class_", make_descriptor(Mesh$Node::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "wrapfn_", make_descriptor(t_Mesh$Node::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mesh$Node::initializeClass, 1)))
              return NULL;
            return t_Mesh$Node::wrap_Object(Mesh$Node(((t_Mesh$Node *) arg)->object.this$));
          }
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mesh$Node::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAcrossIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlongIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEnabled());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInside());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.move(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "move", arg);
            return NULL;
          }

          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self)
          {
            OBJ_CALL(self->object.setEnabled());
            Py_RETURN_NONE;
          }

          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAcrossIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlongIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEnabled());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInside());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGooding::class$ = NULL;
        jmethodID *IodGooding::mids$ = NULL;
        bool IodGooding::live$ = false;

        jclass IodGooding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGooding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_0e8246cd2bf5a092] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_aeed4500e99e945e] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_12e348f8c50cde24] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a6ce26518bf6712c] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_24ec2b6d24d65f1f] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_b48f6346e0ac5fe4] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getRange1_557b8123390d8d0c] = env->getMethodID(cls, "getRange1", "()D");
            mids$[mid_getRange2_557b8123390d8d0c] = env->getMethodID(cls, "getRange2", "()D");
            mids$[mid_getRange3_557b8123390d8d0c] = env->getMethodID(cls, "getRange3", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGooding::IodGooding(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_0e8246cd2bf5a092], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_aeed4500e99e945e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_12e348f8c50cde24], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a6ce26518bf6712c], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_24ec2b6d24d65f1f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11, jint a12, jboolean a13) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_b48f6346e0ac5fe4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11, a12, a13));
        }

        jdouble IodGooding::getRange1() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange1_557b8123390d8d0c]);
        }

        jdouble IodGooding::getRange2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange2_557b8123390d8d0c]);
        }

        jdouble IodGooding::getRange3() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange3_557b8123390d8d0c]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {
        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args);
        static PyObject *t_IodGooding_getRange1(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange2(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange3(t_IodGooding *self);
        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data);
        static PyGetSetDef t_IodGooding__fields_[] = {
          DECLARE_GET_FIELD(t_IodGooding, range1),
          DECLARE_GET_FIELD(t_IodGooding, range2),
          DECLARE_GET_FIELD(t_IodGooding, range3),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IodGooding__methods_[] = {
          DECLARE_METHOD(t_IodGooding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, estimate, METH_VARARGS),
          DECLARE_METHOD(t_IodGooding, getRange1, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange2, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange3, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGooding)[] = {
          { Py_tp_methods, t_IodGooding__methods_ },
          { Py_tp_init, (void *) t_IodGooding_init_ },
          { Py_tp_getset, t_IodGooding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGooding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGooding, t_IodGooding, IodGooding);

        void t_IodGooding::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGooding), &PY_TYPE_DEF(IodGooding), module, "IodGooding", 0);
        }

        void t_IodGooding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "class_", make_descriptor(IodGooding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "wrapfn_", make_descriptor(t_IodGooding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGooding::initializeClass, 1)))
            return NULL;
          return t_IodGooding::wrap_Object(IodGooding(((t_IodGooding *) arg)->object.this$));
        }
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGooding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGooding object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGooding(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDD", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 14:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              jint a12;
              jboolean a13;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_IodGooding_getRange1(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange1());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange2(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange3(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange3());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange1());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange3());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LinearInterpolator::class$ = NULL;
        jmethodID *LinearInterpolator::mids$ = NULL;
        bool LinearInterpolator::live$ = false;

        jclass LinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_c07bcf24349320f1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_9d9c0e5a6bca3c07] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearInterpolator::LinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c07bcf24349320f1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction LinearInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_9d9c0e5a6bca3c07], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args);

        static PyMethodDef t_LinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_LinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearInterpolator)[] = {
          { Py_tp_methods, t_LinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_LinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearInterpolator, t_LinearInterpolator, LinearInterpolator);

        void t_LinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearInterpolator), &PY_TYPE_DEF(LinearInterpolator), module, "LinearInterpolator", 0);
        }

        void t_LinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "class_", make_descriptor(LinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "wrapfn_", make_descriptor(t_LinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_LinearInterpolator::wrap_Object(LinearInterpolator(((t_LinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          LinearInterpolator object((jobject) NULL);

          INT_CALL(object = LinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultIterativeLinearSolverEvent::class$ = NULL;
      jmethodID *DefaultIterativeLinearSolverEvent::mids$ = NULL;
      bool DefaultIterativeLinearSolverEvent::live$ = false;

      jclass DefaultIterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultIterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7f1e32704a8c666f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_init$_159adc8a950af05f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_getNormOfResidual_557b8123390d8d0c] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_75d50d73180655b4] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_75d50d73180655b4] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_75d50d73180655b4] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_89b302893bdbe1f1] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_7f1e32704a8c666f, a0.this$, a1, a2.this$, a3.this$, a4)) {}

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, const ::org::hipparchus::linear::RealVector & a4, jdouble a5) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_159adc8a950af05f, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5)) {}

      jdouble DefaultIterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_75d50d73180655b4]));
      }

      jboolean DefaultIterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_89b302893bdbe1f1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_DefaultIterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultIterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getNormOfResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getRightHandSideVector, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getSolution, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, providesResidual, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultIterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_DefaultIterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_DefaultIterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_DefaultIterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultIterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolverEvent),
        NULL
      };

      DEFINE_TYPE(DefaultIterativeLinearSolverEvent, t_DefaultIterativeLinearSolverEvent, DefaultIterativeLinearSolverEvent);

      void t_DefaultIterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultIterativeLinearSolverEvent), &PY_TYPE_DEF(DefaultIterativeLinearSolverEvent), module, "DefaultIterativeLinearSolverEvent", 0);
      }

      void t_DefaultIterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "class_", make_descriptor(DefaultIterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_DefaultIterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_DefaultIterativeLinearSolverEvent::wrap_Object(DefaultIterativeLinearSolverEvent(((t_DefaultIterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jdouble a4;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector a4((jobject) NULL);
            jdouble a5;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormOfResidual());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getNormOfResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getResidual());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRightHandSideVector());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getRightHandSideVector", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getSolution", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.providesResidual());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "providesResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceKeplerianHermiteInterpolator::class$ = NULL;
      jmethodID *StateCovarianceKeplerianHermiteInterpolator::mids$ = NULL;
      bool StateCovarianceKeplerianHermiteInterpolator::live$ = false;

      jclass StateCovarianceKeplerianHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_48a6dcb8ba1e206b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_5dfeb67fd2988885] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_596de125d0bf1d0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_7b6e4e34795f1add] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_e635f69f6b718ce6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_215b0fc7a61130fd] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_22e3762927839869] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_06156d6cf98e4c27] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::LOFType & a1) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_48a6dcb8ba1e206b, a0.this$, a1.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5dfeb67fd2988885, a0, a1.this$, a2.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_596de125d0bf1d0a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7b6e4e34795f1add, a0, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e635f69f6b718ce6, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::LOFType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_215b0fc7a61130fd, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_22e3762927839869, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::Frame & a4, const ::org::orekit::orbits::OrbitType & a5, const ::org::orekit::orbits::PositionAngleType & a6) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_06156d6cf98e4c27, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter StateCovarianceKeplerianHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args);
      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyGetSetDef t_StateCovarianceKeplerianHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceKeplerianHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceKeplerianHermiteInterpolator)[] = {
        { Py_tp_methods, t_StateCovarianceKeplerianHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceKeplerianHermiteInterpolator_init_ },
        { Py_tp_getset, t_StateCovarianceKeplerianHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceKeplerianHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceKeplerianHermiteInterpolator, t_StateCovarianceKeplerianHermiteInterpolator, StateCovarianceKeplerianHermiteInterpolator);
      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(const StateCovarianceKeplerianHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), &PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator), module, "StateCovarianceKeplerianHermiteInterpolator", 0);
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "class_", make_descriptor(StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "wrapfn_", make_descriptor(t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(StateCovarianceKeplerianHermiteInterpolator(((t_StateCovarianceKeplerianHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::orbits::OrbitType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::LOFType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::Frame a4((jobject) NULL);
            ::org::orekit::orbits::OrbitType a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &a5, &p5, ::org::orekit::orbits::t_OrbitType::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureProcessingState::class$ = NULL;
          jmethodID *XmlStructureProcessingState::mids$ = NULL;
          bool XmlStructureProcessingState::live$ = false;

          jclass XmlStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ed900d53b0c7c76b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          XmlStructureProcessingState::XmlStructureProcessingState(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed900d53b0c7c76b, a0.this$, a1.this$)) {}

          jboolean XmlStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_XmlStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_XmlStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureProcessingState)[] = {
            { Py_tp_methods, t_XmlStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_XmlStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(XmlStructureProcessingState, t_XmlStructureProcessingState, XmlStructureProcessingState);

          void t_XmlStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureProcessingState), &PY_TYPE_DEF(XmlStructureProcessingState), module, "XmlStructureProcessingState", 0);
          }

          void t_XmlStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "class_", make_descriptor(XmlStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "wrapfn_", make_descriptor(t_XmlStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_XmlStructureProcessingState::wrap_Object(XmlStructureProcessingState(((t_XmlStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            XmlStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = XmlStructureProcessingState(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *AtmosphericRefractionModel::class$ = NULL;
      jmethodID *AtmosphericRefractionModel::mids$ = NULL;
      bool AtmosphericRefractionModel::live$ = false;

      jclass AtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/AtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRefraction_7e960cd6eee376d8] = env->getMethodID(cls, "getRefraction", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble AtmosphericRefractionModel::getRefraction(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRefraction_7e960cd6eee376d8], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg);

      static PyMethodDef t_AtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_AtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, getRefraction, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_AtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(AtmosphericRefractionModel, t_AtmosphericRefractionModel, AtmosphericRefractionModel);

      void t_AtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(AtmosphericRefractionModel), &PY_TYPE_DEF(AtmosphericRefractionModel), module, "AtmosphericRefractionModel", 0);
      }

      void t_AtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "class_", make_descriptor(AtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "wrapfn_", make_descriptor(t_AtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_AtmosphericRefractionModel::wrap_Object(AtmosphericRefractionModel(((t_AtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRefraction(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter::class$ = NULL;
              jmethodID *StreamingAemWriter::mids$ = NULL;
              bool StreamingAemWriter::live$ = false;

              jclass StreamingAemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e1c8ed482aa88f16] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)V");
                  mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_12e8ecfdac00357e] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter::StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a2, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1c8ed482aa88f16, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              void StreamingAemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter StreamingAemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_12e8ecfdac00357e]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self);
              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self);

              static PyMethodDef t_StreamingAemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingAemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter, t_StreamingAemWriter, StreamingAemWriter);

              void t_StreamingAemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter), &PY_TYPE_DEF(StreamingAemWriter), module, "StreamingAemWriter", 0);
              }

              void t_StreamingAemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "class_", make_descriptor(StreamingAemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter::wrap_Object(StreamingAemWriter(((t_StreamingAemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a3((jobject) NULL);
                StreamingAemWriter object((jobject) NULL);

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a2, &a3))
                {
                  INT_CALL(object = StreamingAemWriter(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::adm::aem::t_StreamingAemWriter$SegmentWriter::wrap_Object(result);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06::class$ = NULL;
              jmethodID *SsrIgm06::mids$ = NULL;
              bool SsrIgm06::live$ = false;

              jclass SsrIgm06::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e0d6d300a8360b8e] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm06Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm06Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06::SsrIgm06(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_e0d6d300a8360b8e, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm06::getSsrIgm06Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm06Data_1e62c2f73fbdd1c4]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args);
              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self);
              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data);
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data);
              static PyGetSetDef t_SsrIgm06__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06, ssrIgm06Data),
                DECLARE_GET_FIELD(t_SsrIgm06, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm06, getSsrIgm06Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06)[] = {
                { Py_tp_methods, t_SsrIgm06__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06_init_ },
                { Py_tp_getset, t_SsrIgm06__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm06, t_SsrIgm06, SsrIgm06);
              PyObject *t_SsrIgm06::wrap_Object(const SsrIgm06& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm06::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm06::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06), &PY_TYPE_DEF(SsrIgm06), module, "SsrIgm06", 0);
              }

              void t_SsrIgm06::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "class_", make_descriptor(SsrIgm06::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "wrapfn_", make_descriptor(t_SsrIgm06::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06::wrap_Object(SsrIgm06(((t_SsrIgm06 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm06 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm06(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractEopParser::class$ = NULL;
      jmethodID *PythonAbstractEopParser::mids$ = NULL;
      bool PythonAbstractEopParser::live$ = false;

      jclass PythonAbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eee9e9c4fcd9f951] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_b37b9ef659753c44] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractEopParser::PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::frames::AbstractEopParser(env->newObject(initializeClass, &mids$, mid_init$_eee9e9c4fcd9f951, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractEopParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractEopParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractEopParser::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self);
      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data);
      static PyGetSetDef t_PythonAbstractEopParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractEopParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractEopParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEopParser)[] = {
        { Py_tp_methods, t_PythonAbstractEopParser__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractEopParser_init_ },
        { Py_tp_getset, t_PythonAbstractEopParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractEopParser)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractEopParser),
        NULL
      };

      DEFINE_TYPE(PythonAbstractEopParser, t_PythonAbstractEopParser, PythonAbstractEopParser);

      void t_PythonAbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractEopParser), &PY_TYPE_DEF(PythonAbstractEopParser), module, "PythonAbstractEopParser", 1);
      }

      void t_PythonAbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "class_", make_descriptor(PythonAbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "wrapfn_", make_descriptor(t_PythonAbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractEopParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;", (void *) t_PythonAbstractEopParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractEopParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractEopParser::wrap_Object(PythonAbstractEopParser(((t_PythonAbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        PythonAbstractEopParser object((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractEopParser(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("parse", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGammaMnsFunction::class$ = NULL;
            jmethodID *FieldGammaMnsFunction::mids$ = NULL;
            bool FieldGammaMnsFunction::live$ = false;

            jclass FieldGammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_351c8a208f94d0d9] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getDerivative_1e72c6fa8f42834d] = env->getMethodID(cls, "getDerivative", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getValue_1e72c6fa8f42834d] = env->getMethodID(cls, "getValue", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGammaMnsFunction::FieldGammaMnsFunction(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::hipparchus::Field & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_351c8a208f94d0d9, a0, a1.this$, a2, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_1e72c6fa8f42834d], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_1e72c6fa8f42834d], a0, a1, a2));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args);
            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data);
            static PyGetSetDef t_FieldGammaMnsFunction__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGammaMnsFunction, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_FieldGammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGammaMnsFunction)[] = {
              { Py_tp_methods, t_FieldGammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_FieldGammaMnsFunction_init_ },
              { Py_tp_getset, t_FieldGammaMnsFunction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGammaMnsFunction, t_FieldGammaMnsFunction, FieldGammaMnsFunction);
            PyObject *t_FieldGammaMnsFunction::wrap_Object(const FieldGammaMnsFunction& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGammaMnsFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGammaMnsFunction), &PY_TYPE_DEF(FieldGammaMnsFunction), module, "FieldGammaMnsFunction", 0);
            }

            void t_FieldGammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "class_", make_descriptor(FieldGammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "wrapfn_", make_descriptor(t_FieldGammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_FieldGammaMnsFunction::wrap_Object(FieldGammaMnsFunction(((t_FieldGammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::Field a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGammaMnsFunction(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
              return NULL;
            }
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolatingFunction::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolatingFunction::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolatingFunction::live$ = false;

        jclass PiecewiseBicubicSplineInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa8d638c79b33265] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_isValidPoint_41fce65646328eb2] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_d5f58731bcb8a011] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolatingFunction::PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa8d638c79b33265, a0.this$, a1.this$, a2.this$)) {}

        jboolean PiecewiseBicubicSplineInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_41fce65646328eb2], a0, a1);
        }

        jdouble PiecewiseBicubicSplineInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement PiecewiseBicubicSplineInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d5f58731bcb8a011], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolatingFunction, t_PiecewiseBicubicSplineInterpolatingFunction, PiecewiseBicubicSplineInterpolatingFunction);

        void t_PiecewiseBicubicSplineInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolatingFunction), module, "PiecewiseBicubicSplineInterpolatingFunction", 0);
        }

        void t_PiecewiseBicubicSplineInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "class_", make_descriptor(PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(PiecewiseBicubicSplineInterpolatingFunction(((t_PiecewiseBicubicSplineInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          PiecewiseBicubicSplineInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = PiecewiseBicubicSplineInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"
#include "java/io/IOException.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages$UTF8Control::class$ = NULL;
        jmethodID *RuggedMessages$UTF8Control::mids$ = NULL;
        bool RuggedMessages$UTF8Control::live$ = false;

        jclass RuggedMessages$UTF8Control::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages$UTF8Control");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newBundle_c5caa61954589488] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedMessages$UTF8Control::RuggedMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::util::ResourceBundle RuggedMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
        {
          return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_c5caa61954589488], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data);
        static PyGetSetDef t_RuggedMessages$UTF8Control__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages$UTF8Control, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages$UTF8Control__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, newBundle, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages$UTF8Control)[] = {
          { Py_tp_methods, t_RuggedMessages$UTF8Control__methods_ },
          { Py_tp_init, (void *) t_RuggedMessages$UTF8Control_init_ },
          { Py_tp_getset, t_RuggedMessages$UTF8Control__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages$UTF8Control)[] = {
          &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
          NULL
        };

        DEFINE_TYPE(RuggedMessages$UTF8Control, t_RuggedMessages$UTF8Control, RuggedMessages$UTF8Control);
        PyObject *t_RuggedMessages$UTF8Control::wrap_Object(const RuggedMessages$UTF8Control& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages$UTF8Control::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages$UTF8Control), &PY_TYPE_DEF(RuggedMessages$UTF8Control), module, "RuggedMessages$UTF8Control", 0);
        }

        void t_RuggedMessages$UTF8Control::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "class_", make_descriptor(RuggedMessages$UTF8Control::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "wrapfn_", make_descriptor(t_RuggedMessages$UTF8Control::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages$UTF8Control::wrap_Object(RuggedMessages$UTF8Control(((t_RuggedMessages$UTF8Control *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
        {
          RuggedMessages$UTF8Control object((jobject) NULL);

          INT_CALL(object = RuggedMessages$UTF8Control());
          self->object = object;
          self->parameters[0] = ::org::orekit::rugged::errors::PY_TYPE(RuggedMessages);

          return 0;
        }

        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::ClassLoader a3((jobject) NULL);
          jboolean a4;
          ::java::util::ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
            return ::java::util::t_ResourceBundle::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RuggedMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
        }
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedFieldHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedFieldHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_3a224c6b5964096d] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedField;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldHermiteInterpolator, t_TimeStampedFieldHermiteInterpolator, TimeStampedFieldHermiteInterpolator);
      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_Object(const TimeStampedFieldHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator), module, "TimeStampedFieldHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldHermiteInterpolator::wrap_Object(TimeStampedFieldHermiteInterpolator(((t_TimeStampedFieldHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ShiftingTransformProvider::class$ = NULL;
      jmethodID *ShiftingTransformProvider::mids$ = NULL;
      bool ShiftingTransformProvider::live$ = false;

      jclass ShiftingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ShiftingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eb9cd2c2bb77ce9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_412668abc8d889e9] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_5b1059d129debef8] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getStep_557b8123390d8d0c] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ShiftingTransformProvider::ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb9cd2c2bb77ce9f, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint ShiftingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_412668abc8d889e9]);
      }

      ::org::orekit::frames::TransformProvider ShiftingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_5b1059d129debef8]));
      }

      ::org::orekit::frames::StaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      jdouble ShiftingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Transform ShiftingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ShiftingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data);
      static PyGetSetDef t_ShiftingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ShiftingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_ShiftingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ShiftingTransformProvider)[] = {
        { Py_tp_methods, t_ShiftingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_ShiftingTransformProvider_init_ },
        { Py_tp_getset, t_ShiftingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ShiftingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ShiftingTransformProvider, t_ShiftingTransformProvider, ShiftingTransformProvider);

      void t_ShiftingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ShiftingTransformProvider), &PY_TYPE_DEF(ShiftingTransformProvider), module, "ShiftingTransformProvider", 0);
      }

      void t_ShiftingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "class_", make_descriptor(ShiftingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "wrapfn_", make_descriptor(t_ShiftingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ShiftingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_ShiftingTransformProvider::wrap_Object(ShiftingTransformProvider(((t_ShiftingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ShiftingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        ShiftingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = ShiftingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
