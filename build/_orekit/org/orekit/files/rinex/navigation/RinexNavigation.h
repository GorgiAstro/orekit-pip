#ifndef org_orekit_files_rinex_navigation_RinexNavigation_H
#define org_orekit_files_rinex_navigation_RinexNavigation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouLegacyNavigationMessage;
            class GPSCivilianNavigationMessage;
            class IRNSSNavigationMessage;
            class GPSLegacyNavigationMessage;
            class GLONASSNavigationMessage;
            class SBASNavigationMessage;
            class QZSSCivilianNavigationMessage;
            class BeidouCivilianNavigationMessage;
            class QZSSLegacyNavigationMessage;
            class GalileoNavigationMessage;
          }
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class SystemTimeOffsetMessage;
          class IonosphereBDGIMMessage;
          class IonosphereNequickGMessage;
          class RinexNavigationHeader;
          class EarthOrientationParameterMessage;
          class IonosphereKlobucharMessage;
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
              mid_init$_0640e6acf969ed28,
              mid_addBDGIMMessage_17edee189478da4a,
              mid_addBeidouCivilianNavigationMessage_51d66a128545ab32,
              mid_addBeidouLegacyNavigationMessage_b3ed48b5bc32689f,
              mid_addEarthOrientationParameter_564a583497363346,
              mid_addGPSLegacyNavigationMessage_c20e2b5181601e79,
              mid_addGPSLegacyNavigationMessage_32ebc1a815392aa5,
              mid_addGalileoNavigationMessage_91f1ae10feea1e6d,
              mid_addGlonassNavigationMessage_2ccd3101dfe293f5,
              mid_addIRNSSNavigationMessage_3c046d1961be1d76,
              mid_addKlobucharMessage_1cd22f0da01d5ade,
              mid_addNequickGMessage_7bf843147ff865a6,
              mid_addQZSSCivilianNavigationMessage_54e5819ce49f4f51,
              mid_addQZSSLegacyNavigationMessage_0219a485357a5d22,
              mid_addSBASNavigationMessage_ae80c234e2f5a759,
              mid_addSystemTimeOffset_761b1cc460d40e17,
              mid_getBDGIMMessages_0d9551367f7ecdef,
              mid_getBeidouCivilianNavigationMessages_1e62c2f73fbdd1c4,
              mid_getBeidouCivilianNavigationMessages_112f9b169ddc4fbe,
              mid_getBeidouLegacyNavigationMessages_1e62c2f73fbdd1c4,
              mid_getBeidouLegacyNavigationMessages_112f9b169ddc4fbe,
              mid_getEarthOrientationParameters_0d9551367f7ecdef,
              mid_getGPSCivilianNavigationMessages_1e62c2f73fbdd1c4,
              mid_getGPSCivilianNavigationMessages_112f9b169ddc4fbe,
              mid_getGPSLegacyNavigationMessages_1e62c2f73fbdd1c4,
              mid_getGPSLegacyNavigationMessages_112f9b169ddc4fbe,
              mid_getGalileoNavigationMessages_1e62c2f73fbdd1c4,
              mid_getGalileoNavigationMessages_112f9b169ddc4fbe,
              mid_getGlonassNavigationMessages_1e62c2f73fbdd1c4,
              mid_getGlonassNavigationMessages_112f9b169ddc4fbe,
              mid_getIRNSSNavigationMessages_1e62c2f73fbdd1c4,
              mid_getIRNSSNavigationMessages_112f9b169ddc4fbe,
              mid_getKlobucharAlpha_a53a7513ecedada2,
              mid_getKlobucharBeta_a53a7513ecedada2,
              mid_getKlobucharMessages_0d9551367f7ecdef,
              mid_getNeQuickAlpha_a53a7513ecedada2,
              mid_getNequickGMessages_0d9551367f7ecdef,
              mid_getQZSSCivilianNavigationMessages_1e62c2f73fbdd1c4,
              mid_getQZSSCivilianNavigationMessages_112f9b169ddc4fbe,
              mid_getQZSSLegacyNavigationMessages_1e62c2f73fbdd1c4,
              mid_getQZSSLegacyNavigationMessages_112f9b169ddc4fbe,
              mid_getSBASNavigationMessages_1e62c2f73fbdd1c4,
              mid_getSBASNavigationMessages_112f9b169ddc4fbe,
              mid_getSystemTimeOffsets_0d9551367f7ecdef,
              mid_setKlobucharAlpha_cc18240f4a737f14,
              mid_setKlobucharBeta_cc18240f4a737f14,
              mid_setNeQuickAlpha_cc18240f4a737f14,
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
