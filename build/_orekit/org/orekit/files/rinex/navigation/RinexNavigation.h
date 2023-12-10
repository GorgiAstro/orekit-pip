#ifndef org_orekit_files_rinex_navigation_RinexNavigation_H
#define org_orekit_files_rinex_navigation_RinexNavigation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class SystemTimeOffsetMessage;
          class EarthOrientationParameterMessage;
          class IonosphereBDGIMMessage;
          class RinexNavigationHeader;
          class IonosphereKlobucharMessage;
          class IonosphereNequickGMessage;
        }
      }
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouCivilianNavigationMessage;
            class GLONASSNavigationMessage;
            class GalileoNavigationMessage;
            class BeidouLegacyNavigationMessage;
            class QZSSCivilianNavigationMessage;
            class QZSSLegacyNavigationMessage;
            class SBASNavigationMessage;
            class IRNSSNavigationMessage;
            class GPSCivilianNavigationMessage;
            class GPSLegacyNavigationMessage;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class RinexNavigation : public ::org::orekit::files::rinex::RinexFile {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_addBDGIMMessage_48f35a9d59768764,
              mid_addBeidouCivilianNavigationMessage_9b7c3b8708cb60f0,
              mid_addBeidouLegacyNavigationMessage_1df5a8e3672c5ba9,
              mid_addEarthOrientationParameter_e5e3f383d80cbda5,
              mid_addGPSLegacyNavigationMessage_476f45cbe0a6ddd3,
              mid_addGPSLegacyNavigationMessage_5e4004300df49c74,
              mid_addGalileoNavigationMessage_712a4317d632ec13,
              mid_addGlonassNavigationMessage_9f037303855bf75b,
              mid_addIRNSSNavigationMessage_5a9c01f88c870dbb,
              mid_addKlobucharMessage_2654acbdecbca783,
              mid_addNequickGMessage_d7c89b2936167e22,
              mid_addQZSSCivilianNavigationMessage_9020d0332d2c932e,
              mid_addQZSSLegacyNavigationMessage_c40499bedaddc366,
              mid_addSBASNavigationMessage_fbb7b22707ec344c,
              mid_addSystemTimeOffset_368892e3a3cd8277,
              mid_getBDGIMMessages_a6156df500549a58,
              mid_getBeidouCivilianNavigationMessages_d6753b7055940a54,
              mid_getBeidouCivilianNavigationMessages_720e76ad3b86a46a,
              mid_getBeidouLegacyNavigationMessages_d6753b7055940a54,
              mid_getBeidouLegacyNavigationMessages_720e76ad3b86a46a,
              mid_getEarthOrientationParameters_a6156df500549a58,
              mid_getGPSCivilianNavigationMessages_d6753b7055940a54,
              mid_getGPSCivilianNavigationMessages_720e76ad3b86a46a,
              mid_getGPSLegacyNavigationMessages_d6753b7055940a54,
              mid_getGPSLegacyNavigationMessages_720e76ad3b86a46a,
              mid_getGalileoNavigationMessages_d6753b7055940a54,
              mid_getGalileoNavigationMessages_720e76ad3b86a46a,
              mid_getGlonassNavigationMessages_d6753b7055940a54,
              mid_getGlonassNavigationMessages_720e76ad3b86a46a,
              mid_getIRNSSNavigationMessages_d6753b7055940a54,
              mid_getIRNSSNavigationMessages_720e76ad3b86a46a,
              mid_getKlobucharAlpha_7cdc325af0834901,
              mid_getKlobucharBeta_7cdc325af0834901,
              mid_getKlobucharMessages_a6156df500549a58,
              mid_getNeQuickAlpha_7cdc325af0834901,
              mid_getNequickGMessages_a6156df500549a58,
              mid_getQZSSCivilianNavigationMessages_d6753b7055940a54,
              mid_getQZSSCivilianNavigationMessages_720e76ad3b86a46a,
              mid_getQZSSLegacyNavigationMessages_d6753b7055940a54,
              mid_getQZSSLegacyNavigationMessages_720e76ad3b86a46a,
              mid_getSBASNavigationMessages_d6753b7055940a54,
              mid_getSBASNavigationMessages_720e76ad3b86a46a,
              mid_getSystemTimeOffsets_a6156df500549a58,
              mid_setKlobucharAlpha_ebc26dcaf4761286,
              mid_setKlobucharBeta_ebc26dcaf4761286,
              mid_setNeQuickAlpha_ebc26dcaf4761286,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexNavigation(jobject obj) : ::org::orekit::files::rinex::RinexFile(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexNavigation(const RinexNavigation& obj) : ::org::orekit::files::rinex::RinexFile(obj) {}

            RinexNavigation();

            void addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage &) const;
            void addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage &) const;
            void addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage &) const;
            void addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage &) const;
            void addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage &) const;
            void addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage &) const;
            void addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage &) const;
            void addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage &) const;
            void addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage &) const;
            void addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage &) const;
            void addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage &) const;
            void addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage &) const;
            void addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage &) const;
            void addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage &) const;
            void addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage &) const;
            ::java::util::List getBDGIMMessages() const;
            ::java::util::Map getBeidouCivilianNavigationMessages() const;
            ::java::util::List getBeidouCivilianNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getBeidouLegacyNavigationMessages() const;
            ::java::util::List getBeidouLegacyNavigationMessages(const ::java::lang::String &) const;
            ::java::util::List getEarthOrientationParameters() const;
            ::java::util::Map getGPSCivilianNavigationMessages() const;
            ::java::util::List getGPSCivilianNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getGPSLegacyNavigationMessages() const;
            ::java::util::List getGPSLegacyNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getGalileoNavigationMessages() const;
            ::java::util::List getGalileoNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getGlonassNavigationMessages() const;
            ::java::util::List getGlonassNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getIRNSSNavigationMessages() const;
            ::java::util::List getIRNSSNavigationMessages(const ::java::lang::String &) const;
            JArray< jdouble > getKlobucharAlpha() const;
            JArray< jdouble > getKlobucharBeta() const;
            ::java::util::List getKlobucharMessages() const;
            JArray< jdouble > getNeQuickAlpha() const;
            ::java::util::List getNequickGMessages() const;
            ::java::util::Map getQZSSCivilianNavigationMessages() const;
            ::java::util::List getQZSSCivilianNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getQZSSLegacyNavigationMessages() const;
            ::java::util::List getQZSSLegacyNavigationMessages(const ::java::lang::String &) const;
            ::java::util::Map getSBASNavigationMessages() const;
            ::java::util::List getSBASNavigationMessages(const ::java::lang::String &) const;
            ::java::util::List getSystemTimeOffsets() const;
            void setKlobucharAlpha(const JArray< jdouble > &) const;
            void setKlobucharBeta(const JArray< jdouble > &) const;
            void setNeQuickAlpha(const JArray< jdouble > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(RinexNavigation);
          extern PyTypeObject *PY_TYPE(RinexNavigation);

          class t_RinexNavigation {
          public:
            PyObject_HEAD
            RinexNavigation object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RinexNavigation *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RinexNavigation&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RinexNavigation&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
