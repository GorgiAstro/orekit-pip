#ifndef org_orekit_files_rinex_navigation_IonosphereKlobucharMessage_H
#define org_orekit_files_rinex_navigation_IonosphereKlobucharMessage_H

#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class RegionCode;
        }
      }
    }
  }
}
namespace java {
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

          class IonosphereKlobucharMessage : public ::org::orekit::files::rinex::navigation::IonosphereBaseMessage {
           public:
            enum {
              mid_init$_e1b2f7b885c85083,
              mid_getAlpha_a53a7513ecedada2,
              mid_getBeta_a53a7513ecedada2,
              mid_getRegionCode_9a51418bd8a33d02,
              mid_setAlphaI_89aad365fb0ed8da,
              mid_setBetaI_89aad365fb0ed8da,
              mid_setRegionCode_2034f98224d4dad7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphereKlobucharMessage(jobject obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphereKlobucharMessage(const IonosphereKlobucharMessage& obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {}

            static JArray< ::org::orekit::utils::units::Unit > *S_PER_SC_N;

            IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            JArray< jdouble > getAlpha() const;
            JArray< jdouble > getBeta() const;
            ::org::orekit::files::rinex::navigation::RegionCode getRegionCode() const;
            void setAlphaI(jint, jdouble) const;
            void setBetaI(jint, jdouble) const;
            void setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode &) const;
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
          extern PyType_Def PY_TYPE_DEF(IonosphereKlobucharMessage);
          extern PyTypeObject *PY_TYPE(IonosphereKlobucharMessage);

          class t_IonosphereKlobucharMessage {
          public:
            PyObject_HEAD
            IonosphereKlobucharMessage object;
            static PyObject *wrap_Object(const IonosphereKlobucharMessage&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
