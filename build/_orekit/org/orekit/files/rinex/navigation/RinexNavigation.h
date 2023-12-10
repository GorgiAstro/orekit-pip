#ifndef org_orekit_files_rinex_navigation_RinexNavigation_H
#define org_orekit_files_rinex_navigation_RinexNavigation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSNavigationMessage;
            class IRNSSNavigationMessage;
            class BeidouCivilianNavigationMessage;
            class QZSSLegacyNavigationMessage;
            class GPSLegacyNavigationMessage;
            class GalileoNavigationMessage;
            class QZSSCivilianNavigationMessage;
            class SBASNavigationMessage;
            class GPSCivilianNavigationMessage;
            class BeidouLegacyNavigationMessage;
          }
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphereKlobucharMessage;
          class IonosphereNequickGMessage;
          class SystemTimeOffsetMessage;
          class RinexNavigationHeader;
          class IonosphereBDGIMMessage;
          class EarthOrientationParameterMessage;
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
              mid_init$_0fa09c18fee449d5,
              mid_addBDGIMMessage_6db30441c35d6fb7,
              mid_addBeidouCivilianNavigationMessage_6a3700b4f65d21b8,
              mid_addBeidouLegacyNavigationMessage_68d319561ad57af5,
              mid_addEarthOrientationParameter_b13bf812cc8c3997,
              mid_addGPSLegacyNavigationMessage_8e193a05a4675db9,
              mid_addGPSLegacyNavigationMessage_16aa3ee67a4aead2,
              mid_addGalileoNavigationMessage_4a80ac1fbe917041,
              mid_addGlonassNavigationMessage_03382bf5f212b94b,
              mid_addIRNSSNavigationMessage_17e1d776ff5f1ae7,
              mid_addKlobucharMessage_e2f6e204ebbd1a99,
              mid_addNequickGMessage_da1804d087bca47e,
              mid_addQZSSCivilianNavigationMessage_2c9642098f9593c6,
              mid_addQZSSLegacyNavigationMessage_ee4b9dd29db0df25,
              mid_addSBASNavigationMessage_d0cb5c4df227efb9,
              mid_addSystemTimeOffset_eb8e31ddda72aa89,
              mid_getBDGIMMessages_2afa36052df4765d,
              mid_getBeidouCivilianNavigationMessages_6f5a75ccd8c04465,
              mid_getBeidouCivilianNavigationMessages_aade4ea8882e7a2c,
              mid_getBeidouLegacyNavigationMessages_6f5a75ccd8c04465,
              mid_getBeidouLegacyNavigationMessages_aade4ea8882e7a2c,
              mid_getEarthOrientationParameters_2afa36052df4765d,
              mid_getGPSCivilianNavigationMessages_6f5a75ccd8c04465,
              mid_getGPSCivilianNavigationMessages_aade4ea8882e7a2c,
              mid_getGPSLegacyNavigationMessages_6f5a75ccd8c04465,
              mid_getGPSLegacyNavigationMessages_aade4ea8882e7a2c,
              mid_getGalileoNavigationMessages_6f5a75ccd8c04465,
              mid_getGalileoNavigationMessages_aade4ea8882e7a2c,
              mid_getGlonassNavigationMessages_6f5a75ccd8c04465,
              mid_getGlonassNavigationMessages_aade4ea8882e7a2c,
              mid_getIRNSSNavigationMessages_6f5a75ccd8c04465,
              mid_getIRNSSNavigationMessages_aade4ea8882e7a2c,
              mid_getKlobucharAlpha_60c7040667a7dc5c,
              mid_getKlobucharBeta_60c7040667a7dc5c,
              mid_getKlobucharMessages_2afa36052df4765d,
              mid_getNeQuickAlpha_60c7040667a7dc5c,
              mid_getNequickGMessages_2afa36052df4765d,
              mid_getQZSSCivilianNavigationMessages_6f5a75ccd8c04465,
              mid_getQZSSCivilianNavigationMessages_aade4ea8882e7a2c,
              mid_getQZSSLegacyNavigationMessages_6f5a75ccd8c04465,
              mid_getQZSSLegacyNavigationMessages_aade4ea8882e7a2c,
              mid_getSBASNavigationMessages_6f5a75ccd8c04465,
              mid_getSBASNavigationMessages_aade4ea8882e7a2c,
              mid_getSystemTimeOffsets_2afa36052df4765d,
              mid_setKlobucharAlpha_fa9d415d19f69361,
              mid_setKlobucharBeta_fa9d415d19f69361,
              mid_setNeQuickAlpha_fa9d415d19f69361,
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
