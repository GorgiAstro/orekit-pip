#ifndef org_orekit_files_rinex_navigation_RinexNavigation_H
#define org_orekit_files_rinex_navigation_RinexNavigation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphereKlobucharMessage;
          class SystemTimeOffsetMessage;
          class IonosphereNequickGMessage;
          class RinexNavigationHeader;
          class EarthOrientationParameterMessage;
          class IonosphereBDGIMMessage;
        }
      }
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSNavigationMessage;
            class SBASNavigationMessage;
            class GPSCivilianNavigationMessage;
            class QZSSLegacyNavigationMessage;
            class QZSSCivilianNavigationMessage;
            class BeidouLegacyNavigationMessage;
            class IRNSSNavigationMessage;
            class GalileoNavigationMessage;
            class BeidouCivilianNavigationMessage;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_addBDGIMMessage_e0cc60ecaf228f26,
              mid_addBeidouCivilianNavigationMessage_dc4b2b87521f0d2f,
              mid_addBeidouLegacyNavigationMessage_3bdf636f6ee36324,
              mid_addEarthOrientationParameter_ec3134e016f50825,
              mid_addGPSLegacyNavigationMessage_a6d83e70838563e9,
              mid_addGPSLegacyNavigationMessage_cfa2ffa15867e7bd,
              mid_addGalileoNavigationMessage_4e33736c19a56ff8,
              mid_addGlonassNavigationMessage_1538465e20a8ec53,
              mid_addIRNSSNavigationMessage_993e2ed3b326e678,
              mid_addKlobucharMessage_0187013ef57837e3,
              mid_addNequickGMessage_c5d10c9ee17a794f,
              mid_addQZSSCivilianNavigationMessage_e3e4e4fc9a7a0633,
              mid_addQZSSLegacyNavigationMessage_a62013e28777a8da,
              mid_addSBASNavigationMessage_cd2240912f930701,
              mid_addSystemTimeOffset_78d212e8e726d9aa,
              mid_getBDGIMMessages_e62d3bb06d56d7e3,
              mid_getBeidouCivilianNavigationMessages_810bed48fafb0b9a,
              mid_getBeidouCivilianNavigationMessages_abe6e889bc24795d,
              mid_getBeidouLegacyNavigationMessages_810bed48fafb0b9a,
              mid_getBeidouLegacyNavigationMessages_abe6e889bc24795d,
              mid_getEarthOrientationParameters_e62d3bb06d56d7e3,
              mid_getGPSCivilianNavigationMessages_810bed48fafb0b9a,
              mid_getGPSCivilianNavigationMessages_abe6e889bc24795d,
              mid_getGPSLegacyNavigationMessages_810bed48fafb0b9a,
              mid_getGPSLegacyNavigationMessages_abe6e889bc24795d,
              mid_getGalileoNavigationMessages_810bed48fafb0b9a,
              mid_getGalileoNavigationMessages_abe6e889bc24795d,
              mid_getGlonassNavigationMessages_810bed48fafb0b9a,
              mid_getGlonassNavigationMessages_abe6e889bc24795d,
              mid_getIRNSSNavigationMessages_810bed48fafb0b9a,
              mid_getIRNSSNavigationMessages_abe6e889bc24795d,
              mid_getKlobucharAlpha_25e1757a36c4dde2,
              mid_getKlobucharBeta_25e1757a36c4dde2,
              mid_getKlobucharMessages_e62d3bb06d56d7e3,
              mid_getNeQuickAlpha_25e1757a36c4dde2,
              mid_getNequickGMessages_e62d3bb06d56d7e3,
              mid_getQZSSCivilianNavigationMessages_810bed48fafb0b9a,
              mid_getQZSSCivilianNavigationMessages_abe6e889bc24795d,
              mid_getQZSSLegacyNavigationMessages_810bed48fafb0b9a,
              mid_getQZSSLegacyNavigationMessages_abe6e889bc24795d,
              mid_getSBASNavigationMessages_810bed48fafb0b9a,
              mid_getSBASNavigationMessages_abe6e889bc24795d,
              mid_getSystemTimeOffsets_e62d3bb06d56d7e3,
              mid_setKlobucharAlpha_ab69da052b88f50c,
              mid_setKlobucharBeta_ab69da052b88f50c,
              mid_setNeQuickAlpha_ab69da052b88f50c,
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
