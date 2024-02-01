#ifndef org_orekit_files_rinex_navigation_RinexNavigation_H
#define org_orekit_files_rinex_navigation_RinexNavigation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphereBDGIMMessage;
          class EarthOrientationParameterMessage;
          class RinexNavigationHeader;
          class SystemTimeOffsetMessage;
          class IonosphereKlobucharMessage;
          class IonosphereNequickGMessage;
        }
      }
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSNavigationMessage;
            class BeidouLegacyNavigationMessage;
            class GPSLegacyNavigationMessage;
            class SBASNavigationMessage;
            class BeidouCivilianNavigationMessage;
            class IRNSSNavigationMessage;
            class QZSSLegacyNavigationMessage;
            class GPSCivilianNavigationMessage;
            class GalileoNavigationMessage;
            class QZSSCivilianNavigationMessage;
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
              mid_init$_ff7cb6c242604316,
              mid_addBDGIMMessage_6ce9686adc14557f,
              mid_addBeidouCivilianNavigationMessage_876f2a21eb0b6ec4,
              mid_addBeidouLegacyNavigationMessage_2d17a52d9df6bdec,
              mid_addEarthOrientationParameter_6c5f52b4cabfc186,
              mid_addGPSLegacyNavigationMessage_7232c35e235089a5,
              mid_addGPSLegacyNavigationMessage_721b6091f6242c29,
              mid_addGalileoNavigationMessage_88a615ad5e35af17,
              mid_addGlonassNavigationMessage_7b95c4ccc6c58ac9,
              mid_addIRNSSNavigationMessage_28ac94277aa496d9,
              mid_addKlobucharMessage_0dbcfe8ee74f6ef7,
              mid_addNequickGMessage_6ae337b62ecd9dd9,
              mid_addQZSSCivilianNavigationMessage_1b7da76f5f7f28f1,
              mid_addQZSSLegacyNavigationMessage_6f75ae7b1b0acd17,
              mid_addSBASNavigationMessage_337e93bc229d00a6,
              mid_addSystemTimeOffset_28d8ee0ce10a3af3,
              mid_getBDGIMMessages_d751c1a57012b438,
              mid_getBeidouCivilianNavigationMessages_dbcb8bbac6b35e0d,
              mid_getBeidouCivilianNavigationMessages_7a823e7285fdf3d6,
              mid_getBeidouLegacyNavigationMessages_dbcb8bbac6b35e0d,
              mid_getBeidouLegacyNavigationMessages_7a823e7285fdf3d6,
              mid_getEarthOrientationParameters_d751c1a57012b438,
              mid_getGPSCivilianNavigationMessages_dbcb8bbac6b35e0d,
              mid_getGPSCivilianNavigationMessages_7a823e7285fdf3d6,
              mid_getGPSLegacyNavigationMessages_dbcb8bbac6b35e0d,
              mid_getGPSLegacyNavigationMessages_7a823e7285fdf3d6,
              mid_getGalileoNavigationMessages_dbcb8bbac6b35e0d,
              mid_getGalileoNavigationMessages_7a823e7285fdf3d6,
              mid_getGlonassNavigationMessages_dbcb8bbac6b35e0d,
              mid_getGlonassNavigationMessages_7a823e7285fdf3d6,
              mid_getIRNSSNavigationMessages_dbcb8bbac6b35e0d,
              mid_getIRNSSNavigationMessages_7a823e7285fdf3d6,
              mid_getKlobucharAlpha_be783177b060994b,
              mid_getKlobucharBeta_be783177b060994b,
              mid_getKlobucharMessages_d751c1a57012b438,
              mid_getNeQuickAlpha_be783177b060994b,
              mid_getNequickGMessages_d751c1a57012b438,
              mid_getQZSSCivilianNavigationMessages_dbcb8bbac6b35e0d,
              mid_getQZSSCivilianNavigationMessages_7a823e7285fdf3d6,
              mid_getQZSSLegacyNavigationMessages_dbcb8bbac6b35e0d,
              mid_getQZSSLegacyNavigationMessages_7a823e7285fdf3d6,
              mid_getSBASNavigationMessages_dbcb8bbac6b35e0d,
              mid_getSBASNavigationMessages_7a823e7285fdf3d6,
              mid_getSystemTimeOffsets_d751c1a57012b438,
              mid_setKlobucharAlpha_a71c45509eaf92d1,
              mid_setKlobucharBeta_a71c45509eaf92d1,
              mid_setNeQuickAlpha_a71c45509eaf92d1,
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
